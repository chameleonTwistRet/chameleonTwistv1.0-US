#include "GiantCake.h"
Mtx GiantCake_IMtx1 = IDENTITY;

extern ModelCollision Global_BLDestructableTop_ColH;
extern Gfx Global_BLDestructableTop_Gfx[];
extern Gfx Global_BLLava_Gfx[];
extern ModelCollision Global_BLLava5_ColH;
extern Gfx Global_JLCaveDoor_Gfx[];
extern ModelCollision Global_JLCaveDoor_ColH;
extern Gfx Global_BLLavaFloor_Gfx[];
extern ModelCollision Global_ALSpinDoor_ColH;
extern ModelCollision Global_BossBridge_ColH;
extern Gfx GiantCake_model1_Gfx[];
extern Gfx Global_BLLava6_Gfx[];
extern Gfx Global_trainingRoomLight_Gfx[];
extern Gfx Global_JLCaveExit1_Gfx[];
extern ModelCollision Global_ALBLExit_ColH;
extern ModelCollision Global_BLLava3_ColH;
extern Gfx Global_BLLava7_Gfx[];
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
extern ModelCollision GiantCake_unkCol1_ColH;
extern ModelCollision Global_BLLava_ColH;
extern Gfx Global_BossBridge_Gfx[];
extern ModelCollision Global_BLMetalBridge_ColH;
extern Gfx Global_BLMetalBridge_Gfx[];
extern ModelCollision Global_ALBLDoor_ColH;
extern ModelCollision Global_BLLava2_ColH;
extern Gfx Global_GCExit1_Gfx[];
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
extern ModelCollision GiantCake_unkCol2_ColH;
extern ModelCollision Global_exitShadowEast_ColH;
extern ModelCollision Global_pole_ColH;
extern Gfx Global_ALBLExit_Gfx[];
extern Gfx GiantCake_model2_Gfx[];

StageModel GiantCake_stageModels[] = {
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
	{        GiantCake_model1_Gfx,        &GiantCake_unkCol1_ColH},
	{        GiantCake_model2_Gfx,        &GiantCake_unkCol2_ColH},
	{             Global_pole_Gfx,              &Global_pole_ColH}
};

extern ModelCollision Global_unk1_ColH;

rabObject GiantCake_rabObjects[] = {
	{0, 100.0, 100.0, 100.0, &Global_unk1_ColH},
	{0, 100.0, 100.0, 100.0, &Global_unk1_ColH}
};


RoomObject GiantCake_roomMulti_objects[] = {
	{{-3300.0,    0.0, 0.0}, {1.0, 1.0,   1.0}, ROT_NONE,                            0, OBJU_NORMAL, OBJM_FALLING_FLAG, -3300.0, -20000.0,     0.0, 0.0,        15, 300, -2,    0, 0, 0, 21, -1, -1, 30, NULL, NULL, NULL, 0, 7,  4, 4, 0, -1, 0, 0},
	{{-3100.0,    0.0, 0.0}, {1.0, 1.0,   1.0}, ROT_NONE,                            0, OBJU_NORMAL, OBJM_FALLING_FLAG, -3100.0, -20000.0,     0.0, 0.0,        20, 300, -2,    0, 0, 0, 21, -1, -1, 30, NULL, NULL, NULL, 0, 7,  4, 4, 0, -1, 0, 0},
	{{-2900.0,    0.0, 0.0}, {1.0, 1.0,   1.0}, ROT_NONE,                            0, OBJU_NORMAL, OBJM_FALLING_FLAG, -2900.0, -20000.0,     0.0, 0.0,        25, 300, -2,    0, 0, 0, 21, -1, -1, 30, NULL, NULL, NULL, 0, 7,  4, 4, 0, -1, 0, 0},
	{{-2700.0,    0.0, 0.0}, {1.0, 1.0,   1.0}, ROT_NONE,                            0, OBJU_NORMAL, OBJM_FALLING_FLAG, -2700.0, -20000.0,     0.0, 0.0,        30, 300, -2,    0, 0, 0, 21, -1, -1, 30, NULL, NULL, NULL, 0, 7,  4, 4, 0, -1, 0, 0},
	{{-2500.0,    0.0, 0.0}, {1.0, 1.0,   1.0}, ROT_NONE,                            0, OBJU_NORMAL, OBJM_FALLING_FLAG, -2500.0, -20000.0,     0.0, 0.0,        35, 300, -2,    0, 0, 0, 21, -1, -1, 30, NULL, NULL, NULL, 0, 7,  4, 4, 0, -1, 0, 0},
	{{-2300.0,    0.0, 0.0}, {1.0, 1.0,   1.0}, ROT_NONE,                            0, OBJU_NORMAL, OBJM_FALLING_FLAG, -2300.0, -20000.0,     0.0, 0.0,        40, 300, -2,    0, 0, 0, 21, -1, -1, 30, NULL, NULL, NULL, 0, 7,  4, 4, 0, -1, 0, 0},
	{{-2100.0,    0.0, 0.0}, {1.0, 1.0,   1.0}, ROT_NONE,                            0, OBJU_NORMAL, OBJM_FALLING_FLAG, -2100.0, -20000.0,     0.0, 0.0,        45, 300, -2,    0, 0, 0, 21, -1, -1, 30, NULL, NULL, NULL, 0, 7,  4, 4, 0, -1, 0, 0},
	{    {0.0,    0.0, 0.0}, {1.0, 1.0,   1.0}, ROT_NONE,                            0, OBJU_NORMAL,       OBJM_NORMAL,     0.0,      0.0,     0.0, 0.0,      NULL,   0,  0,    0, 0, 0, 35, -1, -1, -1, NULL, NULL, NULL, 0, 3,  4, 4, 0, -1, 0, 0},
	{    {0.0,    0.0, 0.0}, {1.0, 1.0,   1.0}, ROT_NONE,                            0, OBJU_NORMAL,       OBJM_NORMAL,  1400.0,   1000.0, -1000.0, 0.0,      NULL,  90,  0, 1000, 0, 0, 36, -1, 30, -1, NULL, NULL, NULL, 0, 3,  4, 4, 0, -1, 0, 0},
	{{-3450.0, -400.0, 0.0}, {1.0, 1.0, 0.125},    ROT_Y, DEGREES_TO_RADIANS_2PI(90.0), OBJU_NORMAL,         OBJM_DOOR, -3450.0,   -400.0,     0.0, 0.0,         2,  20, -1,   40, 0, 0, 23, -1, -1, 24, NULL, NULL, NULL, 0, 3,  4, 4, 0, -1, 0, 0},
	{{-3600.0,    0.0, 0.0}, {1.0, 1.0,   1.0}, ROT_NONE,                            0,   OBJU_ZONE,       OBJM_NORMAL,   400.0,    400.0,     0.0, 0.0, ZDIR_WEST,   1,  0,    0, 0, 0,  0, -1, -1, -1, NULL, NULL, NULL, 0, 7, -1, 1, 0, -1, 0, 0},
	{{-3600.0,    0.0, 0.0}, {4.0, 4.0,   4.0}, ROT_NONE,                            0, OBJU_NORMAL,       OBJM_NORMAL,  1400.0,   1000.0, -1000.0, 0.0,      NULL,  90,  0, 1000, 0, 0,  0, -1, -1, -1, NULL, NULL, NULL, 0, 1,  0, 0, 0, -1, 0, 0},
	NULL_OBJECT
};


RoomActor GiantCake_room0_actors[] = {
	{CAKE_BOSS, {0.0, 0.0, 0.0}, 0.0, -5000.0, 5000.0, -5000.0, 5000.0, -5000.0, 5000.0, 0, 32.0, 6.0, 24.0, 5.0, -3.0, 500.0, 0.0, 2000.0, 180.0, 180.0, 0.0, 0.0},
	NULL_ACTOR
};


s32 GiantCake_spriteLib[2][16] = {
{ SPRITE_BALLOON_UNUSED,
 SPRITE_ICECREAMSANDICH,
        SPRITE_CHOCOKID,
        SPRITE_POPCORN},
{ SPRITE_BALLOON_UNUSED,
 SPRITE_ICECREAMSANDICH,
        SPRITE_CHOCOKID,
        SPRITE_POPCORN}
};


RoomInstance GiantCake_room_instances[] = {
	{GiantCake_roomMulti_objects, GiantCake_room0_actors, NULL, NULL, 0, 1, 0, 0, -1, 0, 0.0, 15, 0.0, 0.0, 0.0, 0.0, 0.0, 65.0, 0.0, {0,  0,  0}, {0,  0,  0}, {0,  0,  0}, {0,  0,  0}, -1500.0},
	NULL_ROOM
};


s32 GiantCake_map[3][3] = {
	{-1, -1, -1},
	{-1,  0, -1},
	{-1, -1, -1}
};


StageMapData GiantCake_map_data = {
3, 3, GiantCake_room_instances, GiantCake_map
};


RoomInstance GiantCake_ext_room_instances[] = {
	NULL_ROOM
};


LevelScope GiantCake_scope = {
{0, 0, 0}, 255, 25000, 60
};


StageData GiantCake_stageData = {
               &GiantCake_map_data,
                              NULL,
             GiantCake_stageModels,
ARRAY_COUNT(GiantCake_stageModels),
                                 0,
              GiantCake_rabObjects,
                           0x20000,
               GiantCake_spriteLib,
                  &GiantCake_scope
};
s32 GiantCake_alignment1[] = {0,0};
Mtx GiantCake_IMtx2 = IDENTITY;
Lights1 GiantCake_gicScope_Light =
#include "assets/levelGroup/GiantCake/gicScope/gicScope.light.inc.c"
Vtx GiantCake_model1_Vtx[] = {
#include "assets/levelGroup/GiantCake/model1/model1.vtx.inc.c"
};
Mtx GiantCake_IMtx3 = IDENTITY;
Gfx GiantCake_model1_Gfx[] = {
#include "assets/levelGroup/GiantCake/model1/model1.gfx.inc.c"
};
Vtx GiantCake_model2_Vtx[] = {
#include "assets/levelGroup/GiantCake/model2/model2.vtx.inc.c"
};
Mtx GiantCake_IMtx4 = IDENTITY;
Gfx GiantCake_model2_Gfx[] = {
#include "assets/levelGroup/GiantCake/model2/model2.gfx.inc.c"
};
Vec3f GiantCake_unkCol1_ColV[] = {
#include "assets/levelGroup/GiantCake/unkCol1/unkCol1.colV.inc.c"
};
Vec3w GiantCake_unkCol1_ColT[] = {
#include "assets/levelGroup/GiantCake/unkCol1/unkCol1.colT.inc.c"
};
Rect3D GiantCake_unkCol1_ColS = {
#include "assets/levelGroup/GiantCake/unkCol1/unkCol1.colS.inc.c"
};
ModelCollision GiantCake_unkCol1_ColH = {
ARRAY_COUNT(GiantCake_unkCol1_ColV), ARRAY_COUNT(GiantCake_unkCol1_ColT), GiantCake_unkCol1_ColV, GiantCake_unkCol1_ColT, &GiantCake_unkCol1_ColS
};
Vec3f GiantCake_unkCol2_ColV[] = {
#include "assets/levelGroup/GiantCake/unkCol2/unkCol2.colV.inc.c"
};
Vec3w GiantCake_unkCol2_ColT[] = {
#include "assets/levelGroup/GiantCake/unkCol2/unkCol2.colT.inc.c"
};
Rect3D GiantCake_unkCol2_ColS = {
#include "assets/levelGroup/GiantCake/unkCol2/unkCol2.colS.inc.c"
};
ModelCollision GiantCake_unkCol2_ColH = {
ARRAY_COUNT(GiantCake_unkCol2_ColV), ARRAY_COUNT(GiantCake_unkCol2_ColT), GiantCake_unkCol2_ColV, GiantCake_unkCol2_ColT, &GiantCake_unkCol2_ColS
};
Mtx GiantCake_IMtx5 = IDENTITY;
Lights1 GiantCake_gicScope2_Light =
#include "assets/levelGroup/GiantCake/gicScope2/gicScope2.light.inc.c"
Vtx GiantCake_a_model1_Vtx[] = {
#include "assets/levelGroup/GiantCake/a_model1/a_model1.vtx.inc.c"
};
Mtx GiantCake_IMtx6 = IDENTITY;
unsigned char GiantCake_Pad1[] = FILEPAD;
unsigned char GiantCake_frosting_ci8_PNG[] = {
#include "build/assets/levelGroup/GiantCake/img/frosting.ci8.png.inc.c"
};
unsigned char GiantCake_Pad2[] = FILEPAD;
unsigned char GiantCake_frosting_ci8_PAL[] = {
#include "build/assets/levelGroup/GiantCake/img/frosting.ci8.pal.inc.c"
};
Gfx GiantCake_a_model1_Gfx[] = {
#include "assets/levelGroup/GiantCake/a_model1/a_model1.gfx.inc.c"
};
Vtx GiantCake_a_model2_Vtx[] = {
#include "assets/levelGroup/GiantCake/a_model2/a_model2.vtx.inc.c"
};
Mtx GiantCake_IMtx7 = IDENTITY;
Gfx GiantCake_a_model2_Gfx[] = {
#include "assets/levelGroup/GiantCake/a_model2/a_model2.gfx.inc.c"
};
Vtx GiantCake_a_model3_Vtx[] = {
#include "assets/levelGroup/GiantCake/a_model3/a_model3.vtx.inc.c"
};
Mtx GiantCake_IMtx8 = IDENTITY;
Gfx GiantCake_a_model3_Gfx[] = {
#include "assets/levelGroup/GiantCake/a_model3/a_model3.gfx.inc.c"
};
Vtx GiantCake_a_model4_Vtx[] = {
#include "assets/levelGroup/GiantCake/a_model4/a_model4.vtx.inc.c"
};
Mtx GiantCake_IMtx9 = IDENTITY;
Gfx GiantCake_a_model4_Gfx[] = {
#include "assets/levelGroup/GiantCake/a_model4/a_model4.gfx.inc.c"
};
Vtx GiantCake_a_model5_Vtx[] = {
#include "assets/levelGroup/GiantCake/a_model5/a_model5.vtx.inc.c"
};
Mtx GiantCake_IMtx10 = IDENTITY;
Gfx GiantCake_a_model5_Gfx[] = {
#include "assets/levelGroup/GiantCake/a_model5/a_model5.gfx.inc.c"
};
Vtx GiantCake_a_model6_Vtx[] = {
#include "assets/levelGroup/GiantCake/a_model6/a_model6.vtx.inc.c"
};
Mtx GiantCake_IMtx11 = IDENTITY;
Gfx GiantCake_a_model6_Gfx[] = {
#include "assets/levelGroup/GiantCake/a_model6/a_model6.gfx.inc.c"
};
Vtx GiantCake_a_model7_Vtx[] = {
#include "assets/levelGroup/GiantCake/a_model7/a_model7.vtx.inc.c"
};
Mtx GiantCake_IMtx12 = IDENTITY;
unsigned char GiantCake_Pad3[] = FILEPAD;
unsigned char GiantCake_frosting2_ci8_PNG[] = {
#include "build/assets/levelGroup/GiantCake/img/frosting2.ci8.png.inc.c"
};
unsigned char GiantCake_Pad4[] = FILEPAD;
unsigned char GiantCake_frosting2_ci8_PAL[] = {
#include "build/assets/levelGroup/GiantCake/img/frosting2.ci8.pal.inc.c"
};
unsigned char GiantCake_Pad5[] = FILEPAD;
unsigned char GiantCake_frosting3_ci8_PNG[] = {
#include "build/assets/levelGroup/GiantCake/img/frosting3.ci8.png.inc.c"
};
unsigned char GiantCake_Pad6[] = FILEPAD;
unsigned char GiantCake_frosting3_ci8_PAL[] = {
#include "build/assets/levelGroup/GiantCake/img/frosting3.ci8.pal.inc.c"
};
Gfx GiantCake_a_model7_Gfx[] = {
#include "assets/levelGroup/GiantCake/a_model7/a_model7.gfx.inc.c"
};
Vtx GiantCake_a_model8_Vtx[] = {
#include "assets/levelGroup/GiantCake/a_model8/a_model8.vtx.inc.c"
};
Mtx GiantCake_IMtx13 = IDENTITY;
unsigned char GiantCake_Pad7[] = FILEPAD;
unsigned char GiantCake_base_ci8_PNG[] = {
#include "build/assets/levelGroup/GiantCake/img/base.ci8.png.inc.c"
};
unsigned char GiantCake_Pad8[] = FILEPAD;
unsigned char GiantCake_base_ci8_PAL[] = {
#include "build/assets/levelGroup/GiantCake/img/base.ci8.pal.inc.c"
};
Gfx GiantCake_a_model8_Gfx[] = {
#include "assets/levelGroup/GiantCake/a_model8/a_model8.gfx.inc.c"
};
Mtx GiantCake_IMtx14 = IDENTITY;
Gfx GiantCake_a_model9_Gfx[] = {
#include "assets/levelGroup/GiantCake/a_model9/a_model9.gfx.inc.c"
};
Vtx GiantCake_a_model10_Vtx[] = {
#include "assets/levelGroup/GiantCake/a_model10/a_model10.vtx.inc.c"
};
Mtx GiantCake_IMtx15 = IDENTITY;
unsigned char GiantCake_Pad9[] = FILEPAD;
unsigned char GiantCake_crank_ci8_PNG[] = {
#include "build/assets/levelGroup/GiantCake/img/crank.ci8.png.inc.c"
};
unsigned char GiantCake_Pad10[] = FILEPAD;
unsigned char GiantCake_crank_ci8_PAL[] = {
#include "build/assets/levelGroup/GiantCake/img/crank.ci8.pal.inc.c"
};
Gfx GiantCake_a_model10_Gfx[] = {
#include "assets/levelGroup/GiantCake/a_model10/a_model10.gfx.inc.c"
};
Vtx GiantCake_a_model11_Vtx[] = {
#include "assets/levelGroup/GiantCake/a_model11/a_model11.vtx.inc.c"
};
Mtx GiantCake_IMtx16 = IDENTITY;
Gfx GiantCake_a_model11_Gfx[] = {
#include "assets/levelGroup/GiantCake/a_model11/a_model11.gfx.inc.c"
};
Vtx GiantCake_a_model12_Vtx[] = {
#include "assets/levelGroup/GiantCake/a_model12/a_model12.vtx.inc.c"
};
Mtx GiantCake_IMtx17 = IDENTITY;
Gfx GiantCake_a_model12_Gfx[] = {
#include "assets/levelGroup/GiantCake/a_model12/a_model12.gfx.inc.c"
};
Mtx GiantCake_IMtx18 = IDENTITY;
Gfx GiantCake_a_model13_Gfx[] = {
#include "assets/levelGroup/GiantCake/a_model13/a_model13.gfx.inc.c"
};
Vtx GiantCake_a_model14_Vtx[] = {
#include "assets/levelGroup/GiantCake/a_model14/a_model14.vtx.inc.c"
};
Mtx GiantCake_IMtx19 = IDENTITY;
unsigned char GiantCake_Pad11[] = FILEPAD;
unsigned char GiantCake_strawberry_ci8_PNG[] = {
#include "build/assets/levelGroup/GiantCake/img/strawberry.ci8.png.inc.c"
};
unsigned char GiantCake_Pad12[] = FILEPAD;
unsigned char GiantCake_strawberry_ci8_PAL[] = {
#include "build/assets/levelGroup/GiantCake/img/strawberry.ci8.pal.inc.c"
};
Gfx GiantCake_a_model14_Gfx[] = {
#include "assets/levelGroup/GiantCake/a_model14/a_model14.gfx.inc.c"
};
Mtx GiantCake_IMtx20 = IDENTITY;
Gfx GiantCake_a_model15_Gfx[] = {
#include "assets/levelGroup/GiantCake/a_model15/a_model15.gfx.inc.c"
};
Vtx GiantCake_a_model16_Vtx[] = {
#include "assets/levelGroup/GiantCake/a_model16/a_model16.vtx.inc.c"
};
Mtx GiantCake_IMtx21 = IDENTITY;
Gfx GiantCake_a_model16_Gfx[] = {
#include "assets/levelGroup/GiantCake/a_model16/a_model16.gfx.inc.c"
};
Vtx GiantCake_a_model17_Vtx[] = {
#include "assets/levelGroup/GiantCake/a_model17/a_model17.vtx.inc.c"
};
Mtx GiantCake_IMtx22 = IDENTITY;
Gfx GiantCake_a_model17_Gfx[] = {
#include "assets/levelGroup/GiantCake/a_model17/a_model17.gfx.inc.c"
};
Vtx GiantCake_a_model18_Vtx[] = {
#include "assets/levelGroup/GiantCake/a_model18/a_model18.vtx.inc.c"
};
Mtx GiantCake_IMtx23 = IDENTITY;
Gfx GiantCake_a_model18_Gfx[] = {
#include "assets/levelGroup/GiantCake/a_model18/a_model18.gfx.inc.c"
};
Vtx GiantCake_a_model19_Vtx[] = {
#include "assets/levelGroup/GiantCake/a_model19/a_model19.vtx.inc.c"
};
Mtx GiantCake_IMtx24 = IDENTITY;
Gfx GiantCake_a_model19_Gfx[] = {
#include "assets/levelGroup/GiantCake/a_model19/a_model19.gfx.inc.c"
};
Vtx GiantCake_a_model20_Vtx[] = {
#include "assets/levelGroup/GiantCake/a_model20/a_model20.vtx.inc.c"
};
Mtx GiantCake_IMtx25 = IDENTITY;
Gfx GiantCake_a_model20_Gfx[] = {
#include "assets/levelGroup/GiantCake/a_model20/a_model20.gfx.inc.c"
};
Vtx GiantCake_a_model21_Vtx[] = {
#include "assets/levelGroup/GiantCake/a_model21/a_model21.vtx.inc.c"
};
Mtx GiantCake_IMtx26 = IDENTITY;
Gfx GiantCake_a_model21_Gfx[] = {
#include "assets/levelGroup/GiantCake/a_model21/a_model21.gfx.inc.c"
};
Vtx GiantCake_a_model22_Vtx[] = {
#include "assets/levelGroup/GiantCake/a_model22/a_model22.vtx.inc.c"
};
Mtx GiantCake_IMtx27 = IDENTITY;
Gfx GiantCake_a_model22_Gfx[] = {
#include "assets/levelGroup/GiantCake/a_model22/a_model22.gfx.inc.c"
};
Vtx GiantCake_a_model23_Vtx[] = {
#include "assets/levelGroup/GiantCake/a_model23/a_model23.vtx.inc.c"
};
Mtx GiantCake_IMtx28 = IDENTITY;
unsigned char GiantCake_Pad13[] = FILEPAD;
unsigned char GiantCake_color_ci4_PNG[] = {
#include "build/assets/levelGroup/GiantCake/img/color.ci4.png.inc.c"
};
unsigned char GiantCake_Pad14[] = FILEPAD;
unsigned char GiantCake_color_ci4_PAL[] = {
#include "build/assets/levelGroup/GiantCake/img/color.ci4.pal.inc.c"
};
Gfx GiantCake_a_model23_Gfx[] = {
#include "assets/levelGroup/GiantCake/a_model23/a_model23.gfx.inc.c"
};
Vtx GiantCake_a_model24_Vtx[] = {
#include "assets/levelGroup/GiantCake/a_model24/a_model24.vtx.inc.c"
};
Mtx GiantCake_IMtx29 = IDENTITY;
Gfx GiantCake_a_model24_Gfx[] = {
#include "assets/levelGroup/GiantCake/a_model24/a_model24.gfx.inc.c"
};
Vtx GiantCake_a_model25_Vtx[] = {
#include "assets/levelGroup/GiantCake/a_model25/a_model25.vtx.inc.c"
};
Mtx GiantCake_IMtx30 = IDENTITY;
Gfx GiantCake_a_model25_Gfx[] = {
#include "assets/levelGroup/GiantCake/a_model25/a_model25.gfx.inc.c"
};
Vtx GiantCake_a_model26_Vtx[] = {
#include "assets/levelGroup/GiantCake/a_model26/a_model26.vtx.inc.c"
};
Mtx GiantCake_IMtx31 = IDENTITY;
Gfx GiantCake_a_model26_Gfx[] = {
#include "assets/levelGroup/GiantCake/a_model26/a_model26.gfx.inc.c"
};
Vtx GiantCake_a_model27_Vtx[] = {
#include "assets/levelGroup/GiantCake/a_model27/a_model27.vtx.inc.c"
};
Mtx GiantCake_IMtx32 = IDENTITY;
Gfx GiantCake_a_model27_Gfx[] = {
#include "assets/levelGroup/GiantCake/a_model27/a_model27.gfx.inc.c"
};
Vtx GiantCake_a_model28_Vtx[] = {
#include "assets/levelGroup/GiantCake/a_model28/a_model28.vtx.inc.c"
};
Mtx GiantCake_IMtx33 = IDENTITY;
Gfx GiantCake_a_model28_Gfx[] = {
#include "assets/levelGroup/GiantCake/a_model28/a_model28.gfx.inc.c"
};
Vtx GiantCake_a_model29_Vtx[] = {
#include "assets/levelGroup/GiantCake/a_model29/a_model29.vtx.inc.c"
};
Mtx GiantCake_IMtx34 = IDENTITY;
Gfx GiantCake_a_model29_Gfx[] = {
#include "assets/levelGroup/GiantCake/a_model29/a_model29.gfx.inc.c"
};
Vtx GiantCake_a_model30_Vtx[] = {
#include "assets/levelGroup/GiantCake/a_model30/a_model30.vtx.inc.c"
};
Mtx GiantCake_IMtx35 = IDENTITY;
Gfx GiantCake_a_model30_Gfx[] = {
#include "assets/levelGroup/GiantCake/a_model30/a_model30.gfx.inc.c"
};
Vtx GiantCake_a_model31_Vtx[] = {
#include "assets/levelGroup/GiantCake/a_model31/a_model31.vtx.inc.c"
};
Mtx GiantCake_IMtx36 = IDENTITY;
Gfx GiantCake_a_model31_Gfx[] = {
#include "assets/levelGroup/GiantCake/a_model31/a_model31.gfx.inc.c"
};
Vtx GiantCake_a_model32_Vtx[] = {
#include "assets/levelGroup/GiantCake/a_model32/a_model32.vtx.inc.c"
};
Mtx GiantCake_IMtx37 = IDENTITY;
Gfx GiantCake_a_model32_Gfx[] = {
#include "assets/levelGroup/GiantCake/a_model32/a_model32.gfx.inc.c"
};
Mtx GiantCake_IMtx38 = IDENTITY;
Gfx GiantCake_a_model33_Gfx[] = {
#include "assets/levelGroup/GiantCake/a_model33/a_model33.gfx.inc.c"
};
Vtx GiantCake_a_model34_Vtx[] = {
#include "assets/levelGroup/GiantCake/a_model34/a_model34.vtx.inc.c"
};
Mtx GiantCake_IMtx39 = IDENTITY;
Gfx GiantCake_a_model34_Gfx[] = {
#include "assets/levelGroup/GiantCake/a_model34/a_model34.gfx.inc.c"
};
Vtx GiantCake_a_model35_Vtx[] = {
#include "assets/levelGroup/GiantCake/a_model35/a_model35.vtx.inc.c"
};
Mtx GiantCake_IMtx40 = IDENTITY;
Gfx GiantCake_a_model35_Gfx[] = {
#include "assets/levelGroup/GiantCake/a_model35/a_model35.gfx.inc.c"
};
Vtx GiantCake_a_model36_Vtx[] = {
#include "assets/levelGroup/GiantCake/a_model36/a_model36.vtx.inc.c"
};
Mtx GiantCake_IMtx41 = IDENTITY;
Gfx GiantCake_a_model36_Gfx[] = {
#include "assets/levelGroup/GiantCake/a_model36/a_model36.gfx.inc.c"
};
Vtx GiantCake_a_model37_Vtx[] = {
#include "assets/levelGroup/GiantCake/a_model37/a_model37.vtx.inc.c"
};
Mtx GiantCake_IMtx42 = IDENTITY;
Gfx GiantCake_a_model37_Gfx[] = {
#include "assets/levelGroup/GiantCake/a_model37/a_model37.gfx.inc.c"
};
Vtx GiantCake_a_model38_Vtx[] = {
#include "assets/levelGroup/GiantCake/a_model38/a_model38.vtx.inc.c"
};
Mtx GiantCake_IMtx43 = IDENTITY;
Gfx GiantCake_a_model38_Gfx[] = {
#include "assets/levelGroup/GiantCake/a_model38/a_model38.gfx.inc.c"
};
Vtx GiantCake_a_model39_Vtx[] = {
#include "assets/levelGroup/GiantCake/a_model39/a_model39.vtx.inc.c"
};
Mtx GiantCake_IMtx44 = IDENTITY;
Gfx GiantCake_a_model39_Gfx[] = {
#include "assets/levelGroup/GiantCake/a_model39/a_model39.gfx.inc.c"
};
Vtx GiantCake_a_model40_Vtx[] = {
#include "assets/levelGroup/GiantCake/a_model40/a_model40.vtx.inc.c"
};
Mtx GiantCake_IMtx45 = IDENTITY;
Gfx GiantCake_a_model40_Gfx[] = {
#include "assets/levelGroup/GiantCake/a_model40/a_model40.gfx.inc.c"
};
Vtx GiantCake_a_model41_Vtx[] = {
#include "assets/levelGroup/GiantCake/a_model41/a_model41.vtx.inc.c"
};
Mtx GiantCake_IMtx46 = IDENTITY;
Gfx GiantCake_a_model41_Gfx[] = {
#include "assets/levelGroup/GiantCake/a_model41/a_model41.gfx.inc.c"
};
Vtx GiantCake_a_model42_Vtx[] = {
#include "assets/levelGroup/GiantCake/a_model42/a_model42.vtx.inc.c"
};
Mtx GiantCake_IMtx47 = IDENTITY;
Gfx GiantCake_a_model42_Gfx[] = {
#include "assets/levelGroup/GiantCake/a_model42/a_model42.gfx.inc.c"
};
Vtx GiantCake_a_model43_Vtx[] = {
#include "assets/levelGroup/GiantCake/a_model43/a_model43.vtx.inc.c"
};
Mtx GiantCake_IMtx48 = IDENTITY;
Gfx GiantCake_a_model43_Gfx[] = {
#include "assets/levelGroup/GiantCake/a_model43/a_model43.gfx.inc.c"
};
Vtx GiantCake_a_model44_Vtx[] = {
#include "assets/levelGroup/GiantCake/a_model44/a_model44.vtx.inc.c"
};
Mtx GiantCake_IMtx49 = IDENTITY;
Gfx GiantCake_a_model44_Gfx[] = {
#include "assets/levelGroup/GiantCake/a_model44/a_model44.gfx.inc.c"
};
Vtx GiantCake_a_model45_Vtx[] = {
#include "assets/levelGroup/GiantCake/a_model45/a_model45.vtx.inc.c"
};
Mtx GiantCake_IMtx50 = IDENTITY;
Gfx GiantCake_a_model45_Gfx[] = {
#include "assets/levelGroup/GiantCake/a_model45/a_model45.gfx.inc.c"
};
Vtx GiantCake_a_model46_Vtx[] = {
#include "assets/levelGroup/GiantCake/a_model46/a_model46.vtx.inc.c"
};
Mtx GiantCake_IMtx51 = IDENTITY;
Gfx GiantCake_a_model46_Gfx[] = {
#include "assets/levelGroup/GiantCake/a_model46/a_model46.gfx.inc.c"
};
Vtx GiantCake_a_model47_Vtx[] = {
#include "assets/levelGroup/GiantCake/a_model47/a_model47.vtx.inc.c"
};
Mtx GiantCake_IMtx52 = IDENTITY;
Gfx GiantCake_a_model47_Gfx[] = {
#include "assets/levelGroup/GiantCake/a_model47/a_model47.gfx.inc.c"
};
Vtx GiantCake_a_model48_Vtx[] = {
#include "assets/levelGroup/GiantCake/a_model48/a_model48.vtx.inc.c"
};
Mtx GiantCake_IMtx53 = IDENTITY;
Gfx GiantCake_a_model48_Gfx[] = {
#include "assets/levelGroup/GiantCake/a_model48/a_model48.gfx.inc.c"
};
Vtx GiantCake_a_model49_Vtx[] = {
#include "assets/levelGroup/GiantCake/a_model49/a_model49.vtx.inc.c"
};
Mtx GiantCake_IMtx54 = IDENTITY;
Gfx GiantCake_a_model49_Gfx[] = {
#include "assets/levelGroup/GiantCake/a_model49/a_model49.gfx.inc.c"
};
Vtx GiantCake_a_model50_Vtx[] = {
#include "assets/levelGroup/GiantCake/a_model50/a_model50.vtx.inc.c"
};
Mtx GiantCake_IMtx55 = IDENTITY;
Gfx GiantCake_a_model50_Gfx[] = {
#include "assets/levelGroup/GiantCake/a_model50/a_model50.gfx.inc.c"
};
Mtx GiantCake_IMtx56 = IDENTITY;
Gfx GiantCake_a_model51_Gfx[] = {
#include "assets/levelGroup/GiantCake/a_model51/a_model51.gfx.inc.c"
};
Anim GiantCake_unk1Header_Animh = {
#include "assets/levelGroup/GiantCake/anim/unk1Header.animH.inc.c"
};
Mtx GiantCake_unk1_Animarr[15][8] = {
#include "assets/levelGroup/GiantCake/anim/unk1.animArr.inc.c"
};


AnimPointer GiantCake_unk1Pointers_Animp[1] = {
	{&GiantCake_unk1Header_Animh.frames, &GiantCake_unk1Header_Animh.objects, &GiantCake_unk1_Animarr[0][0]}
};
Anim GiantCake_unk2Header_Animh = {
#include "assets/levelGroup/GiantCake/anim/unk2Header.animH.inc.c"
};
Mtx GiantCake_unk2_Animarr[2][3] = {
#include "assets/levelGroup/GiantCake/anim/unk2.animArr.inc.c"
};


AnimPointer GiantCake_unk2Pointers_Animp[1] = {
	{&GiantCake_unk2Header_Animh.frames, &GiantCake_unk2Header_Animh.objects, &GiantCake_unk2_Animarr[0][0]}
};
Anim GiantCake_unk3Header_Animh = {
#include "assets/levelGroup/GiantCake/anim/unk3Header.animH.inc.c"
};
Mtx GiantCake_unk3_Animarr[1][1] = {
#include "assets/levelGroup/GiantCake/anim/unk3.animArr.inc.c"
};


AnimPointer GiantCake_unk3Pointers_Animp[1] = {
	{&GiantCake_unk3Header_Animh.frames, &GiantCake_unk3Header_Animh.objects, &GiantCake_unk3_Animarr[0][0]}
};
Anim GiantCake_unk4Header_Animh = {
#include "assets/levelGroup/GiantCake/anim/unk4Header.animH.inc.c"
};
Mtx GiantCake_unk4_Animarr[15][17] = {
#include "assets/levelGroup/GiantCake/anim/unk4.animArr.inc.c"
};


AnimPointer GiantCake_unk4Pointers_Animp[1] = {
	{&GiantCake_unk4Header_Animh.frames, &GiantCake_unk4Header_Animh.objects, &GiantCake_unk4_Animarr[0][0]}
};
Anim GiantCake_unk5Header_Animh = {
#include "assets/levelGroup/GiantCake/anim/unk5Header.animH.inc.c"
};
Mtx GiantCake_unk5_Animarr[2][17] = {
#include "assets/levelGroup/GiantCake/anim/unk5.animArr.inc.c"
};


AnimPointer GiantCake_unk5Pointers_Animp[1] = {
	{&GiantCake_unk5Header_Animh.frames, &GiantCake_unk5Header_Animh.objects, &GiantCake_unk5_Animarr[0][0]}
};
