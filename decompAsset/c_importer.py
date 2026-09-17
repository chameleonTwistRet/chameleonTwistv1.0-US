
#python file for hardcoding levelGroup c's (could also probably work in general)
#run from root
def start(path):
    lines = open(path, "r", encoding="utf-8").readlines()
    i = 0
    while i < len(lines):
        line = lines[i]

        if line.startswith("//"):
            i += 1
            continue
        if line.startswith("};"):
            i += 1
            continue

        data_only = False
        if i < len(lines)-1:
            data_only = lines[i+1] == "};\n"

        #all of these are represented directly in game; subject to copyright
        #though the collision is arguable
        blacklist = ["gfx", "vtx", "png", "pal", "light", "colV", "colT", "colS", "animH", "animArr"]
        #temp, needs reformatting
        blacklist += ["ut2"]
        valid = True
        for each in blacklist:
            if line.find(f".{each}.") != -1:
                valid = False
                break
        if line.find("#include") != -1 and \
            line.find(".h") == -1  and \
            line.find("\"build/") == -1 and \
            valid:
            if line.find(".lvp.") != -1:
                pass
            if line.find(".rabObj.") != -1:
                pass
            if line.find("lilypad.colH") != -1:
                pass

            file = line.replace('#include "', "").strip()[:-1]
            importedData = open(file, "r", encoding="utf-8").readlines()
            #import remove
            if not data_only:
                while importedData[0].find(".h") != -1:
                    importedData.pop(0)
                lines.pop(i) #remove original include
                #reformat bin
                if importedData[0].find("unsigned char ") != -1:
                    start = importedData[0].split("{")[0]+"{"
                    middle = importedData[0].replace(start, "").replace(", };", "").strip()+"\n"
                    end = "};\n"
                    start += "\n"
                    importedData = [start, middle, end]

            if data_only and line.find(".colH.") != -1:
                lines.pop(i)

            oi = 0
            while len(importedData) > 0: #add data
                lines.insert(i, importedData.pop(-1))
                oi += 1

            i += oi


        i += 1

    open(path, "w", encoding="utf-8").writelines(lines)


if __name__ == "__main__":
    import argparse
    parser = argparse.ArgumentParser()
    parser.add_argument("outfileName", help="output file", type=str)
    #loading in vscode vs linux (wsl)
    try:
        args = parser.parse_args()
    except SystemExit:
        start("src/levelGroup/Training.c")
        exit()
    start(args.outfileName)