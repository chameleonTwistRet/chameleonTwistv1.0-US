#include "BombSnake.h"
Mtx BombSnake_IMtx1 = IDENTITY;

extern ModelCollision Global_BLDestructableTop_ColH;
extern Gfx Global_BLDestructableTop_Gfx[];
extern Gfx Global_BLLava_Gfx[];
extern ModelCollision Global_BLLava5_ColH;
extern Gfx Global_JLCaveDoor_Gfx[];
extern ModelCollision Global_JLCaveDoor_ColH;
extern Gfx Global_BLLavaFloor_Gfx[];
extern ModelCollision Global_ALSpinDoor_ColH;
extern ModelCollision Global_BossBridge_ColH;
extern Gfx Global_BLLava6_Gfx[];
extern Gfx Global_trainingRoomLight_Gfx[];
extern Gfx Global_JLCaveExit1_Gfx[];
extern ModelCollision Global_ALBLExit_ColH;
extern ModelCollision Global_BLLava3_ColH;
extern Gfx Global_BLLava7_Gfx[];
extern Gfx BombSnake_arenaWalls_Gfx[];
extern Gfx Global_KLDoor_Gfx[];
extern ModelCollision Global_exitShadowWest_ColH;
extern Gfx Global_sandPit_Gfx[];
extern Gfx Global_ALSpinDoor_Gfx[];
extern ModelCollision Global_JLCaveExit1_ColH;
extern ModelCollision Global_BLLava7_ColH;
extern Gfx Global_exitShadowEast_Gfx[];
extern ModelCollision Global_trainingRoomLight_ColH;
extern Gfx Global_DCExit_Gfx[];
extern Gfx Global_BLLava2_Gfx[];
extern Gfx Global_pole_Gfx[];
extern Gfx Global_ALPole_Gfx[];
extern ModelCollision Global_ALPole_ColH;
extern Gfx Global_fallbackCube_Gfx[];
extern Gfx Global_exitShadowWest_Gfx[];
extern ModelCollision Global_BLLava_ColH;
extern Gfx Global_BossBridge_Gfx[];
extern ModelCollision Global_BLMetalBridge_ColH;
extern ModelCollision BombSnake_arenaFloor_ColH;
extern Gfx Global_BLMetalBridge_Gfx[];
extern ModelCollision Global_ALBLDoor_ColH;
extern ModelCollision Global_BLLava2_ColH;
extern Gfx Global_GCExit1_Gfx[];
extern ModelCollision BombSnake_arenaWalls_ColH;
extern Gfx Global_TallExitShadow2_Gfx[];
extern Gfx Global_JLCaveExit3_Gfx[];
extern Gfx Global_JLCaveExit4_Gfx[];
extern ModelCollision Global_exitShadowNorth_ColH;
extern Gfx Global_KLExit_Gfx[];
extern ModelCollision Global_JLOutsideEntrance_ColH;
extern ModelCollision Global_JLCaveExit4_ColH;
extern Gfx Global_JLOutsideEntrance_Gfx[];
extern ModelCollision Global_exitShadowSouth_ColH;
extern ModelCollision Global_fallbackCube_ColH;
extern ModelCollision Global_BLLavaFloor_ColH;
extern ModelCollision Global_BLLava6_ColH;
extern ModelCollision Global_BLLava4_ColH;
extern Gfx Global_JLCaveExit2_Gfx[];
extern Gfx Global_JLFxCamPillar_Gfx[];
extern ModelCollision Global_JLFxCamPillar_ColH;
extern ModelCollision Global_GCExit1_ColH;
extern Gfx Global_BLLava5_Gfx[];
extern ModelCollision Global_TallExitShadow2_ColH;
extern ModelCollision Global_sandPit_ColH;
extern Gfx Global_BLLava3_Gfx[];
extern ModelCollision Global_BLLava8_ColH;
extern Gfx Global_exitShadowNorth_Gfx[];
extern Gfx Global_ALBLDoor_Gfx[];
extern ModelCollision Global_KLDoor_ColH;
extern Gfx Global_exitShadowSouth_Gfx[];
extern Gfx Global_BLLava8_Gfx[];
extern ModelCollision Global_DCExit_ColH;
extern ModelCollision Global_JLCaveExit3_ColH;
extern ModelCollision Global_KLExit_ColH;
extern ModelCollision Global_JLCaveExit2_ColH;
extern Gfx Global_BLLava4_Gfx[];
extern ModelCollision Global_exitShadowEast_ColH;
extern ModelCollision Global_pole_ColH;
extern Gfx Global_ALBLExit_Gfx[];
extern Gfx BombSnake_arenaFloor_Gfx[];

StageModel BombSnake_stageModels[] = {
	{     Global_fallbackCube_Gfx,      &Global_fallbackCube_ColH},
	{  Global_exitShadowSouth_Gfx,   &Global_exitShadowSouth_ColH},
	{  Global_exitShadowNorth_Gfx,   &Global_exitShadowNorth_ColH},
	{   Global_exitShadowEast_Gfx,    &Global_exitShadowEast_ColH},
	{   Global_exitShadowWest_Gfx,    &Global_exitShadowWest_ColH},
	{         Global_ALBLExit_Gfx,          &Global_ALBLExit_ColH},
	{          Global_sandPit_Gfx,           &Global_sandPit_ColH},
	{       Global_BossBridge_Gfx,        &Global_BossBridge_ColH},
	{           Global_ALPole_Gfx,            &Global_ALPole_ColH},
	{         Global_ALBLDoor_Gfx,          &Global_ALBLDoor_ColH},
	{       Global_ALSpinDoor_Gfx,        &Global_ALSpinDoor_ColH},
	{      Global_BLLavaFloor_Gfx,       &Global_BLLavaFloor_ColH},
	{           Global_BLLava_Gfx,            &Global_BLLava_ColH},
	{          Global_BLLava2_Gfx,           &Global_BLLava2_ColH},
	{          Global_BLLava3_Gfx,           &Global_BLLava3_ColH},
	{          Global_BLLava4_Gfx,           &Global_BLLava4_ColH},
	{          Global_BLLava5_Gfx,           &Global_BLLava5_ColH},
	{          Global_BLLava6_Gfx,           &Global_BLLava6_ColH},
	{          Global_BLLava7_Gfx,           &Global_BLLava7_ColH},
	{          Global_BLLava8_Gfx,           &Global_BLLava8_ColH},
	{Global_BLDestructableTop_Gfx, &Global_BLDestructableTop_ColH},
	{    Global_BLMetalBridge_Gfx,     &Global_BLMetalBridge_ColH},
	{           Global_KLExit_Gfx,            &Global_KLExit_ColH},
	{           Global_KLDoor_Gfx,            &Global_KLDoor_ColH},
	{           Global_DCExit_Gfx,            &Global_DCExit_ColH},
	{  Global_TallExitShadow2_Gfx,   &Global_TallExitShadow2_ColH},
	{          Global_GCExit1_Gfx,           &Global_GCExit1_ColH},
	{Global_trainingRoomLight_Gfx, &Global_trainingRoomLight_ColH},
	{      Global_JLCaveExit1_Gfx,       &Global_JLCaveExit1_ColH},
	{      Global_JLCaveExit2_Gfx,       &Global_JLCaveExit2_ColH},
	{      Global_JLCaveExit3_Gfx,       &Global_JLCaveExit3_ColH},
	{      Global_JLCaveExit4_Gfx,       &Global_JLCaveExit4_ColH},
	{Global_JLOutsideEntrance_Gfx, &Global_JLOutsideEntrance_ColH},
	{    Global_JLFxCamPillar_Gfx,     &Global_JLFxCamPillar_ColH},
	{       Global_JLCaveDoor_Gfx,        &Global_JLCaveDoor_ColH},
	{    BombSnake_arenaWalls_Gfx,     &BombSnake_arenaWalls_ColH},
	{    BombSnake_arenaFloor_Gfx,     &BombSnake_arenaFloor_ColH},
	{             Global_pole_Gfx,              &Global_pole_ColH}
};

extern ModelCollision Global_unk1_ColH;

rabObject BombSnake_rabObjects[] = {
	{0, 100.0, 100.0, 100.0, &Global_unk1_ColH},
	{0, 100.0, 100.0, 100.0, &Global_unk1_ColH}
};

#include "build/assets/levelGroup/BombSnake/bombObjects.inc.c"

void func_800B31CC(Collider* arg0, RoomObject* arg1);
void func_800A9294(Collider*);

RoomObject BombSnake_room0_objects[] = {
	{    {0.0,    0.0, 0.0}, {40.0, 1.0, 40.0}, ROT_NONE, 0, OBJU_NORMAL,        OBJM_UNK23,     0.0,      0.0,     0.0, 0.0,  50333772,   5,  6, 50365360, 50365760, 0, 11, -1, 30, -1,           NULL, NULL, &func_800B31CC, 0, 2,  4, 4, 0, -1, 0, 0},
	{{-3300.0,    0.0, 0.0},  {1.0, 1.0,  1.0}, ROT_NONE, 0, OBJU_NORMAL, OBJM_FALLING_FLAG, -3300.0, -20000.0,     0.0, 0.0,        15, 300, -2,        0,        0, 0, 21, -1, -1, 30,           NULL, NULL,           NULL, 0, 7,  4, 4, 0, -1, 0, 0},
	{{-3100.0,    0.0, 0.0},  {1.0, 1.0,  1.0}, ROT_NONE, 0, OBJU_NORMAL, OBJM_FALLING_FLAG, -3100.0, -20000.0,     0.0, 0.0,        20, 300, -2,        0,        0, 0, 21, -1, -1, 30,           NULL, NULL,           NULL, 0, 7,  4, 4, 0, -1, 0, 0},
	{{-2900.0,    0.0, 0.0},  {1.0, 1.0,  1.0}, ROT_NONE, 0, OBJU_NORMAL, OBJM_FALLING_FLAG, -2900.0, -20000.0,     0.0, 0.0,        25, 300, -2,        0,        0, 0, 21, -1, -1, 30,           NULL, NULL,           NULL, 0, 7,  4, 4, 0, -1, 0, 0},
	{{-2700.0,    0.0, 0.0},  {1.0, 1.0,  1.0}, ROT_NONE, 0, OBJU_NORMAL, OBJM_FALLING_FLAG, -2700.0, -20000.0,     0.0, 0.0,        30, 300, -2,        0,        0, 0, 21, -1, -1, 30,           NULL, NULL,           NULL, 0, 7,  4, 4, 0, -1, 0, 0},
	{{-2500.0,    0.0, 0.0},  {1.0, 1.0,  1.0}, ROT_NONE, 0, OBJU_NORMAL, OBJM_FALLING_FLAG, -2500.0, -20000.0,     0.0, 0.0,        35, 300, -2,        0,        0, 0, 21, -1, -1, 30,           NULL, NULL,           NULL, 0, 7,  4, 4, 0, -1, 0, 0},
	{{-2300.0,    0.0, 0.0},  {1.0, 1.0,  1.0}, ROT_NONE, 0, OBJU_NORMAL, OBJM_FALLING_FLAG, -2300.0, -20000.0,     0.0, 0.0,        40, 300, -2,        0,        0, 0, 21, -1, -1, 30,           NULL, NULL,           NULL, 0, 7,  4, 4, 0, -1, 0, 0},
	{{-2100.0,    0.0, 0.0},  {1.0, 1.0,  1.0}, ROT_NONE, 0, OBJU_NORMAL, OBJM_FALLING_FLAG, -2100.0, -20000.0,     0.0, 0.0,        45, 300, -2,        0,        0, 0, 21, -1, -1, 30,           NULL, NULL,           NULL, 0, 7,  4, 4, 0, -1, 0, 0},
	{    {0.0,    0.0, 0.0},  {1.0, 1.0,  1.0}, ROT_NONE, 0, OBJU_NORMAL,       OBJM_NORMAL,     0.1,      1.2,     0.0, 0.0,      NULL,   0,  0,        0,        0, 0, 35, -1, -1, -1, &func_800A9294, NULL,           NULL, 0, 0,  4, 4, 0, -1, 0, 0},
	{    {0.0, -100.0, 0.0},  {1.0, 1.0,  1.0}, ROT_NONE, 0, OBJU_NORMAL,       OBJM_NORMAL,  1400.0,   1000.0, -1000.0, 0.0,      NULL,  90,  0,     1000,        0, 0, 36, -1, -1, -1,           NULL, NULL,           NULL, 0, 3,  4, 4, 0, -1, 0, 0},
	{{-3600.0,    0.0, 0.0},  {1.0, 1.0,  1.0}, ROT_NONE, 0,   OBJU_ZONE,       OBJM_NORMAL,   400.0,    400.0,     0.0, 0.0, ZDIR_WEST,   1,  0,        0,        0, 0,  0, -1, -1, -1,           NULL, NULL,           NULL, 0, 7, -1, 1, 0, -1, 0, 0},
	{{-3600.0,    0.0, 0.0},  {4.0, 4.0,  4.0}, ROT_NONE, 0, OBJU_NORMAL,       OBJM_NORMAL,  1400.0,   1000.0, -1000.0, 0.0,      NULL,  90,  0,     1000,        0, 0,  0, -1, -1, -1,           NULL, NULL,           NULL, 0, 1,  0, 0, 0, -1, 0, 0},
	NULL_OBJECT
};


RoomActor BombSnake_room0_actors[] = {
	{BL_BOSS_SEGMENT, {-5000.0, 0.0, -1800.0}, 270.0, -2000.0, 2000.0, 0.0, 50.0, -2000.0, 2000.0, 0, 12.0, 5.0, 60.0, 20.0, 4.0, 30.0, 60.0, 20.0, 0.0, -1.0, 120.0, 120.0},
	NULL_ACTOR
};


Collectable BombSnake_room0_collectables[] = {
	{R_HEART, {-1792.0,  0.0,  -861.0}, -1},
	{R_HEART, {-1781.0,  0.0,  -365.0}, -1},
	{R_HEART, {-1784.0,  0.0,   648.0}, -1},
	{R_HEART,  {1806.0,  0.0,  -845.0}, -1},
	{R_HEART,  {1773.0,  0.0,   406.0}, -1},
	{R_HEART, {-1056.0, 10.0, -1046.0}, -1},
	{R_HEART,  {1040.0, 10.0,  -399.0}, -1},
	{R_HEART,   {127.0, 10.0,  1061.0}, -1},
	{R_HEART, {-1748.0, 10.0, -1782.0}, -1},
	NULL_COLLECTABLE
};


s32 BombSnake_spriteLib[3][16] = {
{ SPRITE_BOMBDOKKAN_PARTS,
    SPRITE_BOMBDOKKAN_EYE,
   SPRITE_BOMBDOKKAN_PART,
              SPRITE_MINE,
           SPRITE_GRENADE,
           SPRITE_MISSILE,
             SPRITE_BOMB}
};


RoomInstance BombSnake_room_instances[] = {
	{BombSnake_room0_objects, BombSnake_room0_actors, NULL, NULL, 0, 1, 0, 0, -1, 0, 0.0, 5, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, {0,  0,  0}, {0,  0,  0}, {0,  0,  0}, {0,  0,  0}, -1500.0},
	NULL_ROOM
};


s32 BombSnake_map[1][3] = {
	{-1, 0, -1}
};


StageMapData BombSnake_map_data = {
3, 1, BombSnake_room_instances, BombSnake_map
};


RoomInstance BombSnake_ext_room_instances[] = {
	NULL_ROOM
};


LevelScope BombSnake_scope = {
{0, 0, 0}, 255, 25000, 60
};


StageData BombSnake_stageData = {
               &BombSnake_map_data,
                              NULL,
             BombSnake_stageModels,
ARRAY_COUNT(BombSnake_stageModels),
                                 0,
              BombSnake_rabObjects,
                           0x20000,
               BombSnake_spriteLib,
                  &BombSnake_scope
};
s32 BombSnake_alignment1[] = {0,0,0};
Mtx BombSnake_IMtx2 = IDENTITY;
Lights1 BombSnake_bsScope_Light =
#include "assets/levelGroup/BombSnake/bsScope/bsScope.light.inc.c"
Vtx BombSnake_arenaWalls_Vtx[] = {
#include "assets/levelGroup/BombSnake/arenaWalls/arenaWalls.vtx.inc.c"
};
Mtx BombSnake_IMtx3 = IDENTITY;
Gfx BombSnake_arenaWalls_Gfx[] = {
#include "assets/levelGroup/BombSnake/arenaWalls/arenaWalls.gfx.inc.c"
};
Vtx BombSnake_arenaFloor_Vtx[] = {
#include "assets/levelGroup/BombSnake/arenaFloor/arenaFloor.vtx.inc.c"
};
Mtx BombSnake_IMtx4 = IDENTITY;
unsigned char BombSnake_Pad1[] = FILEPAD;
unsigned char BombSnake_arenaFloor_i4_PNG[] = {
#include "build/assets/levelGroup/BombSnake/img/arenaFloor.i4.png.inc.c"
};
Gfx BombSnake_arenaFloor_Gfx[] = {
#include "assets/levelGroup/BombSnake/arenaFloor/arenaFloor.gfx.inc.c"
};
Vec3f BombSnake_arenaWalls_ColV[] = {
#include "assets/levelGroup/BombSnake/arenaWalls/arenaWalls.colV.inc.c"
};
Vec3w BombSnake_arenaWalls_ColT[] = {
#include "assets/levelGroup/BombSnake/arenaWalls/arenaWalls.colT.inc.c"
};
Rect3D BombSnake_arenaWalls_ColS = {
#include "assets/levelGroup/BombSnake/arenaWalls/arenaWalls.colS.inc.c"
};
ModelCollision BombSnake_arenaWalls_ColH = {
ARRAY_COUNT(BombSnake_arenaWalls_ColV), ARRAY_COUNT(BombSnake_arenaWalls_ColT), BombSnake_arenaWalls_ColV, BombSnake_arenaWalls_ColT, &BombSnake_arenaWalls_ColS
};
Vec3f BombSnake_arenaFloor_ColV[] = {
#include "assets/levelGroup/BombSnake/arenaFloor/arenaFloor.colV.inc.c"
};
Vec3w BombSnake_arenaFloor_ColT[] = {
#include "assets/levelGroup/BombSnake/arenaFloor/arenaFloor.colT.inc.c"
};
Rect3D BombSnake_arenaFloor_ColS = {
#include "assets/levelGroup/BombSnake/arenaFloor/arenaFloor.colS.inc.c"
};
ModelCollision BombSnake_arenaFloor_ColH = {
ARRAY_COUNT(BombSnake_arenaFloor_ColV), ARRAY_COUNT(BombSnake_arenaFloor_ColT), BombSnake_arenaFloor_ColV, BombSnake_arenaFloor_ColT, &BombSnake_arenaFloor_ColS
};
Mtx BombSnake_IMtx5 = IDENTITY;
Anim BombSnake_unk1Header_Animh = {
#include "assets/levelGroup/BombSnake/anim/unk1Header.animH.inc.c"
};
Mtx BombSnake_unk1_Animarr[2][6] = {
#include "assets/levelGroup/BombSnake/anim/unk1.animArr.inc.c"
};
Anim BombSnake_unk2Header_Animh = {
#include "assets/levelGroup/BombSnake/anim/unk2Header.animH.inc.c"
};
Mtx BombSnake_unk2_Animarr[2][1] = {
#include "assets/levelGroup/BombSnake/anim/unk2.animArr.inc.c"
};
Anim BombSnake_unk3Header_Animh = {
#include "assets/levelGroup/BombSnake/anim/unk3Header.animH.inc.c"
};
Mtx BombSnake_unk3_Animarr[15][1] = {
#include "assets/levelGroup/BombSnake/anim/unk3.animArr.inc.c"
};
Anim BombSnake_unk4Header_Animh = {
#include "assets/levelGroup/BombSnake/anim/unk4Header.animH.inc.c"
};
Mtx BombSnake_unk4_Animarr[15][1] = {
#include "assets/levelGroup/BombSnake/anim/unk4.animArr.inc.c"
};
Lights1 BombSnake_bsScope2_Light =
#include "assets/levelGroup/BombSnake/bsScope2/bsScope2.light.inc.c"
Vtx BombSnake_bombSnakeHead_Vtx[] = {
#include "assets/levelGroup/BombSnake/bombSnakeHead/bombSnakeHead.vtx.inc.c"
};
Mtx BombSnake_IMtx6 = IDENTITY;
unsigned char BombSnake_Pad2[] = FILEPAD;
unsigned char BombSnake_cannonClone_ci4_PNG[] = {
#include "build/assets/levelGroup/BombSnake/img/cannonClone.ci4.png.inc.c"
};
unsigned char BombSnake_Pad3[] = FILEPAD;
unsigned char BombSnake_cannonClone_ci4_PAL[] = {
#include "build/assets/levelGroup/BombSnake/img/cannonClone.ci4.pal.inc.c"
};
unsigned char BombSnake_Pad4[] = FILEPAD;
unsigned char BombSnake_color_ci4_PNG[] = {
#include "build/assets/levelGroup/BombSnake/img/color.ci4.png.inc.c"
};
unsigned char BombSnake_Pad5[] = FILEPAD;
unsigned char BombSnake_color_ci4_PAL[] = {
#include "build/assets/levelGroup/BombSnake/img/color.ci4.pal.inc.c"
};
Gfx BombSnake_bombSnakeHead_Gfx[] = {
#include "assets/levelGroup/BombSnake/bombSnakeHead/bombSnakeHead.gfx.inc.c"
};
Vtx BombSnake_bombSnakeHeadSpike_Vtx[] = {
#include "assets/levelGroup/BombSnake/bombSnakeHeadSpike/bombSnakeHeadSpike.vtx.inc.c"
};
Mtx BombSnake_IMtx7 = IDENTITY;
unsigned char BombSnake_Pad6[] = FILEPAD;
unsigned char BombSnake_bombSnakeHeadSpike_ci4_PNG[] = {
#include "build/assets/levelGroup/BombSnake/img/bombSnakeHeadSpike.ci4.png.inc.c"
};
unsigned char BombSnake_Pad7[] = FILEPAD;
unsigned char BombSnake_bombSnakeHeadSpike_ci4_PAL[] = {
#include "build/assets/levelGroup/BombSnake/img/bombSnakeHeadSpike.ci4.pal.inc.c"
};
Gfx BombSnake_bombSnakeHeadSpike_Gfx[] = {
#include "assets/levelGroup/BombSnake/bombSnakeHeadSpike/bombSnakeHeadSpike.gfx.inc.c"
};
Vtx BombSnake_bombSnakeHeadGem_Vtx[] = {
#include "assets/levelGroup/BombSnake/bombSnakeHeadGem/bombSnakeHeadGem.vtx.inc.c"
};
Mtx BombSnake_IMtx8 = IDENTITY;
unsigned char BombSnake_Pad8[] = FILEPAD;
unsigned char BombSnake_bombSnakeHeadGem_ci8_PNG[] = {
#include "build/assets/levelGroup/BombSnake/img/bombSnakeHeadGem.ci8.png.inc.c"
};
unsigned char BombSnake_Pad9[] = FILEPAD;
unsigned char BombSnake_bombSnakeHeadGem_ci8_PAL[] = {
#include "build/assets/levelGroup/BombSnake/img/bombSnakeHeadGem.ci8.pal.inc.c"
};
Gfx BombSnake_bombSnakeHeadGem_Gfx[] = {
#include "assets/levelGroup/BombSnake/bombSnakeHeadGem/bombSnakeHeadGem.gfx.inc.c"
};
Vtx BombSnake_bombSnakeEars_Vtx[] = {
#include "assets/levelGroup/BombSnake/bombSnakeEars/bombSnakeEars.vtx.inc.c"
};
Mtx BombSnake_IMtx9 = IDENTITY;
unsigned char BombSnake_Pad10[] = FILEPAD;
unsigned char BombSnake_bombSnakeEars_rgba16_PNG[] = {
#include "build/assets/levelGroup/BombSnake/img/bombSnakeEars.rgba16.png.inc.c"
};
Gfx BombSnake_bombSnakeEars_Gfx[] = {
#include "assets/levelGroup/BombSnake/bombSnakeEars/bombSnakeEars.gfx.inc.c"
};
Vtx BombSnake_unkD_Vtx[] = {
#include "assets/levelGroup/BombSnake/unkD/unkD.vtx.inc.c"
};
Mtx BombSnake_IMtx10 = IDENTITY;
Gfx BombSnake_unkD_Gfx[] = {
#include "assets/levelGroup/BombSnake/unkD/unkD.gfx.inc.c"
};
Vtx BombSnake_unkE_Vtx[] = {
#include "assets/levelGroup/BombSnake/unkE/unkE.vtx.inc.c"
};
Mtx BombSnake_IMtx11 = IDENTITY;
Gfx BombSnake_unkE_Gfx[] = {
#include "assets/levelGroup/BombSnake/unkE/unkE.gfx.inc.c"
};
Mtx BombSnake_IMtx12 = IDENTITY;
Gfx BombSnake_unkF_Gfx[] = {
#include "assets/levelGroup/BombSnake/unkF/unkF.gfx.inc.c"
};
Vtx BombSnake_bombSnakeTail_Vtx[] = {
#include "assets/levelGroup/BombSnake/bombSnakeTail/bombSnakeTail.vtx.inc.c"
};
Mtx BombSnake_IMtx13 = IDENTITY;
Gfx BombSnake_bombSnakeTail_Gfx[] = {
#include "assets/levelGroup/BombSnake/bombSnakeTail/bombSnakeTail.gfx.inc.c"
};
Mtx BombSnake_IMtx14 = IDENTITY;
Gfx BombSnake_unk11_Gfx[] = {
#include "assets/levelGroup/BombSnake/unk11/unk11.gfx.inc.c"
};


AnimPointer BombSnake_unk1Pointers_Animp[1] = {
	{&BombSnake_unk1Header_Animh.frames, &BombSnake_unk1Header_Animh.objects, &BombSnake_unk1_Animarr[0][0]}
};


AnimPointer BombSnake_unk2Pointers_Animp[1] = {
	{&BombSnake_unk2Header_Animh.frames, &BombSnake_unk2Header_Animh.objects, &BombSnake_unk2_Animarr[0][0]}
};


AnimPointer BombSnake_unk3Pointers_Animp[1] = {
	{&BombSnake_unk3Header_Animh.frames, &BombSnake_unk3Header_Animh.objects, &BombSnake_unk3_Animarr[0][0]}
};


AnimPointer BombSnake_unk4Pointers_Animp[1] = {
	{&BombSnake_unk4Header_Animh.frames, &BombSnake_unk4Header_Animh.objects, &BombSnake_unk4_Animarr[0][0]}
};
