import argparse
from glob import glob
import yaml

#specifically for ones who dont exactly match their file inc names
splat_exts = {
}
incExt = {
    "palette": "pal",
    "ci4": "png",
    "ci8": "png",
    "i4": "png",
    "ia4": "png",
    "i8": "png",
    "ia8": "png",
    "rgba16": "png",
    "rgba32": "png",
}

buildFolder = ["bin", "palette", "ci4", "ci8", "i4", "ia4", "i8", "ia8", "rgba16", "rgba32"]

def start2(group):
    exts = glob("tools/splat_ext/*.py")
    for ext in exts:
        new = open(ext, "r", encoding="UTF-8").readlines()
        parse = ""
        reading = False
        for line in new:
            if not reading:
                if line.find("def out_path(self) -> Path") != -1:
                    reading = True
            else:
                parse = line.split("return")[-1].strip().split('{self.name}.')[-1].split(".inc.c")[0].strip()
                break
        segtype = ext.split("/")[-1].split(".py")[0].strip()
        splat_exts[segtype] = parse

    symbolsPath = "symbol_addrs.txt"
    if group == "CLEAR":
        symbolAddrs = open(symbolsPath, "r").readlines()
        dump = []
        for line in symbolAddrs:
            dump.append(line)
            if line == "//ASSETS\n": break
        open(symbolsPath, "w").writelines(dump)
        return

    symbolage = True

    reading = False
    tabbing = ""

    baseAdr = 0x0
    segmentId = -1
    newC = ['#include "common.h"\n',]
    newSymbols = ["\n\n//generated section "+group+" starting here\n"]
    defDir = ""
    definitions = []

    pads = 0
    imtx = 0

    use_segment = None
    writeTo = "src/"

    data_loaded = yaml.safe_load(open("chameleontwist.us.yaml"))
    for segment in data_loaded["segments"]:
        if "name" in list(segment.keys()):
            if segment["name"] == group:
                use_segment = segment
                break

    baseAdr = use_segment["start"]
    segmentId = use_segment["vram"]
    writeTo += use_segment['dir']+"/"
    orig_path = writeTo

    defDir = writeTo

    groupage = ""

    use_segment = use_segment["subsegments"][1]

    def do_segments(segment_group):
        nonlocal newSymbols
        nonlocal newC

        nonlocal defDir
        nonlocal groupage
        old = defDir
        old2 = groupage
        if type(segment_group) == dict:
            if "dir" in list(segment_group.keys()):
                defDir += segment_group["dir"]+"/"
                groupage += segment_group["dir"]+"/"
        for segment in segment_group["subsegments"]:
            if type(segment) == dict:
                if "dir" in list(segment.keys()):
                    do_segments(segment)
                    continue
            #not a subgroup
            values = {}
            if type(segment) == list:
                values["Address"] = segment[0]
                if len(segment) > 1:
                    values["Type"] = segment[1]
                if len(segment) < 3: #no name, usually for fuckall bins
                    values["Path"] = '0x{:01X}'.format(segment[0])
                else:
                    values["Path"] = segment[2]
                if len(segment) > 3:
                    values["Ext"] = segment[3:]
            elif type(segment) == dict:
                values["Address"] = segment["start"]
                values["Type"] = segment["type"]
                values["Path"] = segment["name"]
                if len(list(segment.keys())) > 3:
                    for key in list(segment.keys())[3:]:
                        values[key] = segment[key]

            nonlocal pads
            nonlocal imtx
            nonlocal orig_path

            if values["Type"] == "pad":
                #assumed/known types
                if values["Path"] == "B8000000":#filepad
                    add = '#define FILEPAD {0xB8,0,0,0,0,0,0,0} // the funny\n\n'
                    if not add in definitions: definitions.append(add)
                    pads += 1

                    pather = groupage.replace("/","_").replace(".","_")
                    symbol = pather+"Pad"+str(pads)

                    newC.append(f"unsigned char {symbol}[] = FILEPAD;\n")
                    continue
                elif values["Path"] == "identity_matrix":#identity
                    add = '#define IDENTITY {{1,0,0,0,0,1,0,0,0,0,1,0,0,0,0,1},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}} // identity matrix so we dont have to split useless files\n\n'
                    if not add in definitions: definitions.append(add)
                    imtx += 1

                    pather = groupage.replace("/","_").replace(".","_")
                    symbol = pather+"IMtx"+str(imtx)

                    newC.append(f"Mtx {symbol} = IDENTITY;\n")

                    segmentAdr = (values["Address"] - baseAdr) + segmentId
                    rom = '0x{:01X}'.format(values["Address"])
                    ss = f'{symbol} = '+'0x{:08X}'.format(segmentAdr)+f"; // type:Mtx rom:{rom} defined:True"
                    if symbolage:
                        newSymbols.append(ss+"\n")
                    continue

            dataOnly = values["Type"] in buildFolder
            #new splat thing
            if values["Type"] == "databin":
                values["Type"] = "bin"
            values["Path"] = defDir+values["Path"]
            values["ShortName"] = values["Path"].replace(orig_path,"",1).replace("/","_").replace(".","_")
            values["Path"] = values["Path"].replace("src/", "")

            if values["ShortName"][0].isdigit():
                values["ShortName"]="d"+values["ShortName"] #bc we cant have a number start now can we
            useType = values["Type"]
            if values["Type"] in list(incExt.keys()):
                useType = incExt[values["Type"]]
            elif values["Type"] in list(splat_exts.keys()):
                useType = splat_exts[values["Type"]]

            customType = ""

            if values["Type"] in ["levelMap", "collision"]: #arg'd segtypes
                mapType = values["Ext"][-1].split(" ")[-1].replace('"', "").strip()
                useType = useType.replace("{self.type[0]}", mapType[0])
                customType = useType


            nline = '\n#include "assets/'+values["Path"]+'.'+useType+'.inc.c"\n'
            if values["Type"] == "bin":
                nline = nline.replace(".bin", "",1)
            if values["Type"] in buildFolder:
                nline = nline.replace("assets/", "build/assets/",1)

            segmentAdr = (values["Address"] - baseAdr) + segmentId
            #symbol creation
            if values["Type"] in ["mtx", "vtx", "gfx"]:
                customType = values["Type"].capitalize()
            elif values["Type"] in buildFolder and values["Type"] != "bin":
                customType = incExt[values["Type"]].upper()
            elif values["Type"] in list(incExt.keys()):
                customType = incExt[values["Type"]].capitalize()
            elif values["Type"] in list(splat_exts.keys()):
                customType = splat_exts[values["Type"]].capitalize()
            else:
                customType = values["Type"].capitalize()

            if values["Type"] in ["levelMap", "collision"]: #arg'd segtypes
                customType = useType.capitalize()
                customType = customType[:-1] + customType[-1].upper()

            symbol = ""
            if symbolage:
                symbol = values["ShortName"]+"_"+customType
            else:
                #undefined_syms fallback
                symbol = "D_"+'{:08X}'.format(segmentAdr)+"_"+group

            #typedef
            char = values["Type"] in buildFolder and dataOnly


            if "data_only" in list(values.keys()) and not dataOnly:
                dataOnly = True

            if dataOnly:
                if values["Type"] == "mtx":
                    newC.append("Mtx "+symbol+" = {")
                elif values["Type"] == "lights":
                    newC.append("Lights1 "+symbol+" =")
                elif values["Type"] == "vtx":
                    newC.append("Vtx "+symbol+"[] = {")
                elif values["Type"] in ["gfx", "gfxSeg"]:
                    newC.append("Gfx "+symbol+"[] = {")
                elif values["Type"] == "collision":
                    if customType in ["ColV", "ColS"]:
                        newC.append("Vec3f "+symbol+"[] = {")
                    elif customType == "ColT":
                        newC.append("Vec3s "+symbol+"[] = {")
                    elif customType == "ColH":
                        newC.append("ModelCollision "+symbol+"[] = {")
                elif char:
                    newC.append("unsigned char "+symbol+"[] = {")

            newC.append(nline)

            #end_typedef
            if dataOnly:
                if (not values["Type"] in ["lights"]) or char:
                    newC.append("};\n")

            #pretty sure this isnt needed but it helps line up with actual ram values :)
            ss = symbol+" = "+'0x{:08X}'.format(segmentAdr)+";"
            #change the customType here to match gfx linking
            #GENERALLY they are the same as the suffix but stuff like images are Tluts so yeah
            #might have to go more in depth based on type of image (rgba16, i4, etc)
            #but until gfx whines at me we go with this :)

            if customType == "PNG":
                customType = "TImg"
            elif customType == "PAL":
                customType = "TLut"
            ss += " // type:"+customType+" rom:"+'0x{:01X}'.format(values["Address"])+" defined:True"
            if symbolage:
                newSymbols.append(ss+"\n")

            print(segment)
        groupage = old2
        defDir = old

    do_segments(use_segment)
    writeTo += use_segment["dir"]+".c"

    #definitions.reverse()
    #for i in definitions: newC.insert(1, i)
    open(writeTo, "w", encoding="UTF-8").writelines(newC)
    if symbolage: open(symbolsPath, "a").writelines(newSymbols)
    return

if __name__ == "__main__":
    parser = argparse.ArgumentParser()
    parser.add_argument("group", help="group name", type=str,)
    parser.add_argument("outfileName", help="output file", type=str)
    #loading in vscode vs linux (wsl)
    try:
        args = parser.parse_args()
    except SystemExit:
        start2("static0")
        exit()