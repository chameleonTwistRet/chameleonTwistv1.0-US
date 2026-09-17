import argparse
from glob import glob
import ast
import os

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

#stuff to tack onto the symbol name to differentiate
splat_ext_symsuffixes = {
    "levelPointer": "",
    "levelScope": "",
    "levelHeader": "",
    "rabObjects": "",
    "spriteActor": "",
    "unkType1": "",
    "spriteLib": "",
    "roomActor": "",
    "roomObject": "",
    "roomSettings": "",
    "collectable": "",

    #these are default
    "vtx": "Vtx",
    "gfx": "Gfx",
    "gfxSeg": "Gfx",
    "mtx": "Mtx",
}

buildFolder = ["bin", "palette", "ci4", "ci8", "i4", "ia4", "i8", "ia8", "rgba16", "rgba32"]

class Split(object):
    def __init__(self, line):
        self.ShortName = ""
        if line.find("[") != -1: #normal
            args = ((line.split("#")[0].strip().split("[")[-1]))[:-1].split(",")
            for a in range(len(args)):
                args[a] = args[a].strip()
            self.Address = args[0]
            if len(args) > 1:
                self.Type = args[1]
            if len(args) < 3: #no name, usually for fuckall bins
                self.Path = args[0].split("x")[1].upper()
            elif len(args) >= 3:
                self.Path = args[2]
            if len(args) > 3:
                self.Ext = args[3:]
        elif line.find("{") != -1: #dict
            args = ("0x"+(line.split("#")[0].strip().split("0x")[-1]))[:-1].split(",")
            for a in range(len(args)):
                args[a] = args[a].replace("type: ", "").replace("name: ", "").strip()
            self.Address = args[0]
            self.Type = args[1]
            self.Path = args[2]
            if len(args) > 3:
                self.Ext = args[3:]

def start(group, where):
    yaml = open("chameleontwist.us.yaml", "r", encoding='UTF-8').readlines()

    _VARIANTs = {}

    for ext in glob("tools/splat_ext/*.py"):
        segtype = ext.split("/")[-1].split(".py")[0].strip()
        file = open(ext, "r", encoding="UTF-8").readlines()
        for line in file:
            if "SUFFIX = " in line:
                splat_exts[segtype] = line.split(" = ")[-1].strip().replace("\"", "")
                break

        #get type dicts
        if segtype in ["collision", "levelMap"]:
            splat_exts.pop(segtype, None)
            x = 0
            while x < len(file):
                line = file[x]
                if "_VARIANT = {" in line:
                    lines = []
                    x += 1
                    line = file[x].strip()
                    while line != "}":
                        lines.append(line)
                        x += 1
                        line = file[x].strip()
                    _VARIANTs[segtype] = ast.literal_eval("{"+"".join(lines)+"}")
                    break
                x += 1


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

    writeTo = f"src/{where}.c"
    open(writeTo, "w").close() #clear
    reading = False
    tabbing = ""


    baseAdr = 0x0
    segmentId = -1
    newC = [f'#include "{group}.h"\n',]
    newSymbols = [f"\n\n//generated section {group} starting here\n"]
    defDir = ""
    definitions = []

    pads = 0
    imtx = 0
    alignments = 0

    i = 0
    while i < len(yaml):
        line = yaml[i]
        if not reading:
            #get group info
            if line.find("name: "+group) != -1 and not line.strip().startswith("#"):
                tabbing = line.split('name')[0]
                for walk in range(5):
                    if walk == 0:
                        continue
                    if baseAdr != 0x0 and segmentId != -1:
                        break

                    get = yaml[i + walk]
                    if get.startswith("  - start: ") and baseAdr == 0x0:
                        baseAdr = int(get.split(": ")[1].split("#")[0].strip(),16)
                    if get.find("#SEGMENT ") != -1 and segmentId == -1:
                        segmentId = int(get.split("#SEGMENT ")[1].split("#")[0].strip(),16)

                    get = yaml[i - walk]
                    if get.startswith("  - start: ") and baseAdr == 0x0:
                        baseAdr = int(get.split(": ")[1].split("#")[0].strip(),16)
                    if get.find("#SEGMENT ") != -1 and segmentId == -1:
                        segmentId = int(get.split("#SEGMENT ")[1].split("#")[0].strip(),16)
                segmentId <<= 24
                reading = True
            i += 1
            continue

        if (not line.startswith(tabbing) or line.startswith("  - start: ")) and line != "\n":
            break

        #rip apart split
        if line.find("-") != -1 and not line.strip().startswith("#") and (line.find(",") != -1 or line.find("#") != -1):
            if line.find(",") != -1: #normal split
                values = Split(line)
                if values.Address == "auto":
                    i += 1
                    continue
                values.Address = int(values.Address, 16)
                dataOnly = values.Type in buildFolder
                #new splat thing
                if values.Type == "databin":
                    values.Type = "bin"
                #i honestly dont remember what this suffix was for
                values.Path = defDir+"/"+values.Path.replace(".MEd", "")
                values.ShortName = os.path.basename(values.Path).replace(".","_")
                #usually only matters for Fuckall Bins
                if values.ShortName[0].isdigit():
                    values.ShortName="d"+values.ShortName #bc we cant have a number start now can we

                #type to represent the symbol in symbol_addrs.txt
                useSuffix = values.Type
                if values.Type in list(incExt.keys()):
                    useSuffix = incExt[values.Type]
                elif values.Type in list(splat_exts.keys()):
                    useSuffix = splat_exts[values.Type]

                symbolType = ""
                suffix_exists = False
                actual_suffix = ""

                if values.Type in ["levelMap", "collision"]: #arg'd segtypes
                    variant = values.Ext[0].split(" ")[-1].replace('"', "").strip()
                    useSuffix, symbolType, actual_suffix = _VARIANTs[values.Type][variant]
                    suffix_exists = True

                nline = f'\n#include "assets/{values.Path}.{useSuffix}.inc.c"\n'

                if values.Type == "bin":
                    nline = nline.replace(".bin", "", 1)
                if values.Type == "gfxSeg":
                    nline = nline.replace(".gfxSeg", ".gfx", 1)
                if values.Type in buildFolder:
                    nline = nline.replace("assets/", "build/assets/", 1)

                segmentAdr = (values.Address - baseAdr) + segmentId
                #symbol creation
                if values.Type in ["mtx", "vtx", "gfx"]:
                    symbolType = values.Type.capitalize()
                elif values.Type in buildFolder and values.Type != "bin":
                    symbolType = incExt[values.Type].upper()
                elif values.Type in list(incExt.keys()):
                    symbolType = incExt[values.Type].capitalize()
                elif values.Type in list(splat_exts.keys()):
                    symbolType = splat_exts[values.Type].capitalize()
                else:
                    symbolType = values.Type.capitalize()
                if values.Type == "gfxSeg":
                    symbolType = "Gfx"

                if values.Type in list(splat_ext_symsuffixes.keys()):
                    actual_suffix = splat_ext_symsuffixes[values.Type]
                    suffix_exists = True

                if symbolage:
                    if not suffix_exists:
                        symbol = "_".join([group, values.ShortName, symbolType])
                    else:
                        name_array = [group, values.ShortName]
                        if actual_suffix != "":
                            name_array.append(actual_suffix)
                        symbol = "_".join(name_array)
                else:
                    #undefined_syms fallback
                    symbol = f"D_{segmentAdr:08X}_{group}"

                #typedef
                char = values.Type in buildFolder and dataOnly

                if getattr(values, "Ext", None) != None and not dataOnly:
                    for arg in values.Ext:
                        if arg.find("data_only") != -1:
                            dataOnly = True
                            break

                if dataOnly:
                    if values.Type == "mtx":
                        newC.append(f"Mtx {symbol} = {{")
                    elif values.Type == "lights":
                        newC.append(f"Lights1 {symbol} =")
                    elif values.Type == "vtx":
                        newC.append(f"Vtx {symbol}[] = {{")
                    elif values.Type in ["gfx", "gfxSeg"]:
                        newC.append(f"Gfx {symbol}[] = {{")
                    elif values.Type == "collision":
                        if actual_suffix == "ColV":
                            newC.append(f"Vec3f {symbol}[] = {{")
                        elif actual_suffix == "ColS":
                            newC.append(f"Rect3D {symbol} = {{")
                        elif actual_suffix == "ColT":
                            newC.append(f"Vec3w {symbol}[] = {{")
                        elif actual_suffix == "ColH":
                            newC.append(f"ModelCollision {symbol} = {{")
                    elif char:
                        newC.append(f"unsigned char {symbol}[] = {{")
                    elif values.Type == "animArray":
                        frames = int(values.Ext[0].split(" ")[-1].replace('"', "").strip())
                        objects = int(values.Ext[1].split(" ")[-1].replace('"', "").strip())

                        newC.append(f"Mtx {symbol}[{frames}][{objects}] = {{")
                    elif values.Type == "animPointers":
                        newC.append(f"AnimPointer {symbol}[] = {{")
                    elif values.Type in ["animHeader"]:
                        newC.append(f"Anim {symbol} = {{")

                newC.append(nline)

                #end_typedef
                if dataOnly:
                    if (not values.Type in ["lights"]) or char:
                        newC.append("};\n")

                #pretty sure this isnt needed but it helps line up with actual ram values :)
                symbol_set = f"{symbol} = 0x{segmentAdr:08X};"
                #change the symbolType here to match gfx linking
                #GENERALLY they are the same as the suffix but stuff like images are Tluts so yeah
                #might have to go more in depth based on type of image (rgba16, i4, etc)
                #but until gfx whines at me we go with this :)

                if symbolType == "PNG":
                    symbolType = "TImg"
                elif symbolType == "PAL":
                    symbolType = "TLut"

                symbol_set += f" // type:{symbolType} rom:0x{values.Address:X} defined:True\n"
                if symbolage:
                    newSymbols.append(symbol_set)

            elif line.find("#") != -1: #implied split
                #assumed/known types
                if line.find("#B8000000") != -1: #filepad
                    add = '#define FILEPAD {0xB8,0,0,0,0,0,0,0} // the funny\n\n'
                    if not add in definitions:
                        definitions.append(add)
                    pads += 1

                    #add to c
                    newC.append(f"unsigned char {group}_Pad{pads}[] = FILEPAD;\n")

                elif line.find("#identity matrix") != -1: #identity
                    add = '#define IDENTITY {{1,0,0,0,0,1,0,0,0,0,1,0,0,0,0,1},{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}} // identity matrix so we dont have to split useless files\n\n'
                    if not add in definitions:
                        definitions.append(add)
                    imtx += 1

                    symbol = f"{group}_IMtx{imtx}"

                    #add to c
                    newC.append(f"Mtx {symbol} = IDENTITY;\n")

                    #god forbid a variable actually needs this random ass matrix
                    if symbolage:
                        addr = int(line.split("[")[-1].split("]")[0].strip(), 16)
                        segmentAdr = (addr - baseAdr) + segmentId
                        symbol_set = f"{symbol} = 0x{segmentAdr:08X}; // type:Mtx rom:0x{addr:X} defined:True\n"
                        newSymbols.append(symbol_set)

                elif line.find("#alignment") != -1: #not-subalignment
                    values = Split(line)
                    values.Address = int(values.Address, 16)
                    i += 1
                    line = yaml[i]
                    while line.find("-") == -1:
                        i += 1
                        line = yaml[i]
                    i -= 1
                    alignments += 1

                    next_values = Split(line)
                    next_values.Address = int(next_values.Address, 16)
                    amount_of_padding = next_values.Address - values.Address
                    amount_of_padding //= 4
                    padding = ",".join(["0"] * amount_of_padding)

                    #add to c
                    newC.append(f"s32 {group}_alignment{alignments}[] = {{{padding}}};\n")

        elif line.find('dir: ') != -1:
            if defDir != "":
                defDir += "/"
            defDir += line.split("dir: ")[-1].strip()

        i += 1
    #definitions.reverse()
    #for i in definitions: newC.insert(1, i)
    open(writeTo, "w", encoding="UTF-8").writelines(newC)
    if symbolage:
        open(symbolsPath, "a").writelines(newSymbols)

if __name__ == "__main__":
    parser = argparse.ArgumentParser()
    parser.add_argument("group", help="group name", type=str,)
    parser.add_argument("outfileName", help="output file", type=str)
    #loading in vscode vs linux (wsl)
    try:
        args = parser.parse_args()
    except SystemExit:
        start("Chameleons", "chameleons/Chameleons")
        exit()
    start(args.group, args.outfileName)