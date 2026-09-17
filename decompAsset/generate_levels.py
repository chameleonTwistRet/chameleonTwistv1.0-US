import subprocess

pngs = {}

levels = [
    "BossRush",
    "Training",
    "BattleMode",
    "PileOfBooks",
    "Armadillo",
    "GiantCake",
    "BombSnake",
    "Quintella",
    "LizardKong",
    "JungleLand",
    "GhostCastle",
    "IntroOutro",
    "DesertCastle",
    "KidsLand",
    "BombLand",
    "AntLand"
]

levels.reverse()

#write to symbol_addrs
for level in levels:
    subprocess.run(f"python3 decompAsset/groupAutomater.py {level} levelGroup/{level}", shell = True, executable="/bin/bash")
#split using new symobls
subprocess.run("./configure --clean --full", shell = True, executable="/bin/bash")
#import into c
for level in levels:
    subprocess.run(f"python3 decompAsset/c_importer.py src/levelGroup/{level}.c", shell = True, executable="/bin/bash")

#fix this one thing. ugh
file = open("symbol_addrs.txt", "r").readlines()
i = 0
while not file[i].startswith("BombSnake_unk2Pointers_Animp"):
    i += 1
file[i] = "BombSnake_unk2Pointers_Animp = 0x03008384; // allow_duplicated:True type:Animp rom:0x880BB4 defined:True\n"
file.insert(i, "BombSnake_unk2Pointers_Animp = 0x03008384; // allow_duplicated:True type:Animp defined:True\n")
open("symbol_addrs.txt", "w").writelines(file)

#build ok?
subprocess.run("./configure --clean --full && ninja", shell = True, executable="/bin/bash")
