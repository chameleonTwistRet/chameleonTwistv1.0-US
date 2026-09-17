#include "Quintella.h"
Mtx Quintella_IMtx1 = IDENTITY;

extern ModelCollision Global_BLDestructableTop_ColH;
extern ModelCollision Quintella_unkCol2_ColH;
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
extern Gfx Quintella_model1_Gfx[];
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
extern ModelCollision Quintella_unkCol1_ColH;
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
extern Gfx Quintella_model2_Gfx[];
extern ModelCollision Global_exitShadowEast_ColH;
extern ModelCollision Global_pole_ColH;
extern Gfx Global_ALBLExit_Gfx[];

StageModel Quintella_stageModels[] = {
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
	{        Quintella_model1_Gfx,        &Quintella_unkCol1_ColH},
	{        Quintella_model2_Gfx,        &Quintella_unkCol2_ColH},
	{             Global_pole_Gfx,              &Global_pole_ColH}
};

extern ModelCollision Global_unk1_ColH;

rabObject Quintella_rabObjects[] = {
	{0, 100.0, 100.0, 100.0, &Global_unk1_ColH},
	{0, 100.0, 100.0, 100.0, &Global_unk1_ColH}
};


s32 Quintella_spriteLib[2][16] = {
{SPRITE_GRAYANT},
{SPRITE_GRAYANT}
};


Collectable Quintella_roomUnk_collectables[] = {
	{R_HEART,   {150.0, 0.0, -1405.0}, -1},
	{R_HEART,  {-150.0, 0.0, -1405.0}, -1},
	{R_HEART, {-1304.0, 0.0,  -304.0}, -1},
	{R_HEART,  {-100.0, 0.0,  1384.0}, -1},
	{R_HEART,   {100.0, 0.0,  1384.0}, -1},
	{R_HEART,  {1385.0, 0.0,    29.0}, -1},
	NULL_COLLECTABLE
};


RoomObject Quintella_roomMulti_objects[] = {
	{{0.0,     0.0, -2800.0}, {1.0, 1.0, 1.0}, ROT_NONE, 0, OBJU_NORMAL, OBJM_FALLING_FLAG,    0.0, -20000.0, -2400.0, 0.0,         15, 300, -2,    0, 0, 0,  7, -1, -1, 16, NULL, NULL, NULL, 0, 7,  4, 4, 0, -1, 0, 0},
	{{0.0,     0.0, -2600.0}, {1.0, 1.0, 1.0}, ROT_NONE, 0, OBJU_NORMAL, OBJM_FALLING_FLAG,    0.0, -20000.0, -2400.0, 0.0,         20, 300, -2,    0, 0, 0,  7, -1, -1, 16, NULL, NULL, NULL, 0, 7,  4, 4, 0, -1, 0, 0},
	{{0.0,     0.0, -2400.0}, {1.0, 1.0, 1.0}, ROT_NONE, 0, OBJU_NORMAL, OBJM_FALLING_FLAG,    0.0, -20000.0, -2400.0, 0.0,         25, 300, -2,    0, 0, 0,  7, -1, -1, 16, NULL, NULL, NULL, 0, 7,  4, 4, 0, -1, 0, 0},
	{{0.0,     0.0, -2200.0}, {1.0, 1.0, 1.0}, ROT_NONE, 0, OBJU_NORMAL, OBJM_FALLING_FLAG,    0.0, -20000.0, -2200.0, 0.0,         30, 300, -2,    0, 0, 0,  7, -1, -1, 16, NULL, NULL, NULL, 0, 7,  4, 4, 0, -1, 0, 0},
	{{0.0,     0.0, -2000.0}, {1.0, 1.0, 1.0}, ROT_NONE, 0, OBJU_NORMAL, OBJM_FALLING_FLAG,    0.0, -20000.0, -2000.0, 0.0,         35, 300, -2,    0, 0, 0,  7, -1, -1, 16, NULL, NULL, NULL, 0, 7,  4, 4, 0, -1, 0, 0},
	{{0.0,     0.0, -1800.0}, {1.0, 1.0, 1.0}, ROT_NONE, 0, OBJU_NORMAL, OBJM_FALLING_FLAG,    0.0, -20000.0, -1800.0, 0.0,         40, 300, -2,    0, 0, 0,  7, -1, -1, 16, NULL, NULL, NULL, 0, 7,  4, 4, 0, -1, 0, 0},
	{{0.0,     0.0, -1600.0}, {1.0, 1.0, 1.0}, ROT_NONE, 0, OBJU_NORMAL, OBJM_FALLING_FLAG,    0.0, -20000.0, -1600.0, 0.0,         45, 300, -2,    0, 0, 0,  7, -1, -1, 16, NULL, NULL, NULL, 0, 7,  4, 4, 0, -1, 0, 0},
	{{0.0,     0.0,     0.0}, {1.0, 1.0, 1.0}, ROT_NONE, 0, OBJU_NORMAL,       OBJM_NORMAL, 1400.0,   1000.0, -1000.0, 0.0,       NULL,  90,  0, 1000, 0, 0, 35, -1, -1, -1, NULL, NULL, NULL, 0, 0,  4, 4, 0, -1, 0, 0},
	{{0.0,     0.0,     0.0}, {1.0, 1.0, 1.0}, ROT_NONE, 0, OBJU_NORMAL,       OBJM_NORMAL, 1400.0,   1000.0, -1000.0, 0.0,       NULL,  90,  0, 1000, 0, 0, 36, -1, 16, -1, NULL, NULL, NULL, 0, 3,  4, 4, 0, -1, 0, 0},
	{{0.0, -6000.0,     0.0}, {1.0, 1.0, 1.0}, ROT_NONE, 0, OBJU_NORMAL, OBJM_FALLING_FLAG,    0.0,      0.0,     0.0, 0.0,       NULL, 300, -1,    0, 0, 0,  8, -1, -1, -1, NULL, NULL, NULL, 0, 6,  4, 4, 0, -1, 1, 0},
	{{0.0,     0.0, -3100.0}, {1.0, 1.0, 1.0}, ROT_NONE, 0,   OBJU_ZONE,       OBJM_NORMAL,  400.0,    400.0,     0.0, 0.0, ZDIR_NORTH,   1,  0,    0, 0, 0,  0, -1, -1, -1, NULL, NULL, NULL, 0, 2, -1, 1, 0, -1, 0, 0},
	{{0.0,     0.0, -3100.0}, {4.0, 4.0, 4.0}, ROT_NONE, 0, OBJU_NORMAL,       OBJM_NORMAL, 1400.0,   1000.0, -1000.0, 0.0,       NULL,  90,  0, 1000, 0, 0,  0, -1, -1, -1, NULL, NULL, NULL, 0, 1,  0, 0, 0, -1, 0, 0},
	{{0.0, -1500.0,     0.0}, {1.0, 1.0, 1.0}, ROT_NONE, 0, OBJU_NORMAL,       OBJM_NORMAL,    0.0,      0.0,     0.0, 0.0,       NULL,   0,  0,    0, 0, 0, 37, -1, -1, -1, NULL, NULL, NULL, 0, 0,  0, 4, 0, -1, 0, 0},
	NULL_OBJECT
};


RoomActor Quintella_room0_actors[] = {
	{ANT_QUEEN, {0.0, 0.0, 400.0}, 90.0, -1100.0, 1100.0, 0.0, 0.0, -1100.0, 1100.0, 0, 0.0, 0.0, 0.0, 5.0, 1.0, 0.0, 0.0, 0.0, 12.0, 5.0, 5.0, 0.0},
	NULL_ACTOR
};


RoomInstance Quintella_room_instances[] = {
	{Quintella_roomMulti_objects, Quintella_room0_actors, NULL, NULL, 1, 1, 0, 7, 31, 0, 0.0, 5, 1500.0, 800.0, -1500.0, 0.0, 0.0, 0.0, 0.0, {0,  0,  0}, {0,  0,  0}, {0,  0,  0}, {0,  0,  0}, -1500.0},
	NULL_ROOM
};


s32 Quintella_map[1][3] = {
	{-1, 0, -1}
};


StageMapData Quintella_map_data = {
3, 1, Quintella_room_instances, Quintella_map
};


RoomInstance Quintella_ext_room_instances[] = {
	NULL_ROOM
};


LevelScope Quintella_scope = {
{0, 0, 0}, -1, 25000, 60
};


StageData Quintella_stageData = {
               &Quintella_map_data,
                              NULL,
             Quintella_stageModels,
ARRAY_COUNT(Quintella_stageModels),
                                 0,
              Quintella_rabObjects,
                           0x20000,
               Quintella_spriteLib,
                  &Quintella_scope
};
s32 Quintella_alignment1[] = {0,0};
Mtx Quintella_IMtx2 = IDENTITY;
Lights1 Quintella_qtScope_Light =
#include "assets/levelGroup/Quintella/qtScope/qtScope.light.inc.c"
Vtx Quintella_model1_Vtx[] = {
#include "assets/levelGroup/Quintella/model1/model1.vtx.inc.c"
};
Mtx Quintella_IMtx3 = IDENTITY;
unsigned char Quintella_Pad1[] = FILEPAD;
unsigned char Quintella_mural_i4_PNG[] = {
#include "build/assets/levelGroup/Quintella/img/mural.i4.png.inc.c"
};
unsigned char Quintella_Pad2[] = FILEPAD;
unsigned char Quintella_wallFade_ci8_PNG[] = {
#include "build/assets/levelGroup/Quintella/img/wallFade.ci8.png.inc.c"
};
unsigned char Quintella_Pad3[] = FILEPAD;
unsigned char Quintella_wallFade_ci8_PAL[] = {
#include "build/assets/levelGroup/Quintella/img/wallFade.ci8.pal.inc.c"
};
Gfx Quintella_model1_Gfx[] = {
#include "assets/levelGroup/Quintella/model1/model1.gfx.inc.c"
};
Vtx Quintella_model2_Vtx[] = {
#include "assets/levelGroup/Quintella/model2/model2.vtx.inc.c"
};
Mtx Quintella_IMtx4 = IDENTITY;
Gfx Quintella_model2_Gfx[] = {
#include "assets/levelGroup/Quintella/model2/model2.gfx.inc.c"
};
Vec3f Quintella_unkCol1_ColV[] = {
#include "assets/levelGroup/Quintella/unkCol1/unkCol1.colV.inc.c"
};
Vec3w Quintella_unkCol1_ColT[] = {
#include "assets/levelGroup/Quintella/unkCol1/unkCol1.colT.inc.c"
};
Rect3D Quintella_unkCol1_ColS = {
#include "assets/levelGroup/Quintella/unkCol1/unkCol1.colS.inc.c"
};
ModelCollision Quintella_unkCol1_ColH = {
ARRAY_COUNT(Quintella_unkCol1_ColV), ARRAY_COUNT(Quintella_unkCol1_ColT), Quintella_unkCol1_ColV, Quintella_unkCol1_ColT, &Quintella_unkCol1_ColS
};
Vec3f Quintella_unkCol2_ColV[] = {
#include "assets/levelGroup/Quintella/unkCol2/unkCol2.colV.inc.c"
};
Vec3w Quintella_unkCol2_ColT[] = {
#include "assets/levelGroup/Quintella/unkCol2/unkCol2.colT.inc.c"
};
Rect3D Quintella_unkCol2_ColS = {
#include "assets/levelGroup/Quintella/unkCol2/unkCol2.colS.inc.c"
};
ModelCollision Quintella_unkCol2_ColH = {
ARRAY_COUNT(Quintella_unkCol2_ColV), ARRAY_COUNT(Quintella_unkCol2_ColT), Quintella_unkCol2_ColV, Quintella_unkCol2_ColT, &Quintella_unkCol2_ColS
};
Mtx Quintella_IMtx5 = IDENTITY;
Lights1 Quintella_qtScope2_Light =
#include "assets/levelGroup/Quintella/qtScope2/qtScope2.light.inc.c"
Vtx Quintella_a_model1_Vtx[] = {
#include "assets/levelGroup/Quintella/a_model1/a_model1.vtx.inc.c"
};
Mtx Quintella_IMtx6 = IDENTITY;
Gfx Quintella_a_model1_Gfx[] = {
#include "assets/levelGroup/Quintella/a_model1/a_model1.gfx.inc.c"
};
Vtx Quintella_a_model2_Vtx[] = {
#include "assets/levelGroup/Quintella/a_model2/a_model2.vtx.inc.c"
};
Mtx Quintella_IMtx7 = IDENTITY;
unsigned char Quintella_Pad4[] = FILEPAD;
unsigned char Quintella_color_ci4_PNG[] = {
#include "build/assets/levelGroup/Quintella/img/color.ci4.png.inc.c"
};
unsigned char Quintella_Pad5[] = FILEPAD;
unsigned char Quintella_color_ci4_PAL[] = {
#include "build/assets/levelGroup/Quintella/img/color.ci4.pal.inc.c"
};
unsigned char Quintella_Pad6[] = FILEPAD;
unsigned char Quintella_color2_ci4_PNG[] = {
#include "build/assets/levelGroup/Quintella/img/color2.ci4.png.inc.c"
};
unsigned char Quintella_Pad7[] = FILEPAD;
unsigned char Quintella_color2_ci4_PAL[] = {
#include "build/assets/levelGroup/Quintella/img/color2.ci4.pal.inc.c"
};
unsigned char Quintella_Pad8[] = FILEPAD;
unsigned char Quintella_gaster_ci4_PNG[] = {
#include "build/assets/levelGroup/Quintella/img/gaster.ci4.png.inc.c"
};
unsigned char Quintella_Pad9[] = FILEPAD;
unsigned char Quintella_gaster_ci4_PAL[] = {
#include "build/assets/levelGroup/Quintella/img/gaster.ci4.pal.inc.c"
};
Gfx Quintella_a_model2_Gfx[] = {
#include "assets/levelGroup/Quintella/a_model2/a_model2.gfx.inc.c"
};
Vtx Quintella_a_model3_Vtx[] = {
#include "assets/levelGroup/Quintella/a_model3/a_model3.vtx.inc.c"
};
Mtx Quintella_IMtx8 = IDENTITY;
unsigned char Quintella_Pad10[] = FILEPAD;
unsigned char Quintella_eye_ci8_PNG[] = {
#include "build/assets/levelGroup/Quintella/img/eye.ci8.png.inc.c"
};
unsigned char Quintella_Pad11[] = FILEPAD;
unsigned char Quintella_eye_ci8_PAL[] = {
#include "build/assets/levelGroup/Quintella/img/eye.ci8.pal.inc.c"
};
unsigned char Quintella_Pad12[] = FILEPAD;
unsigned char Quintella_color3_ci4_PNG[] = {
#include "build/assets/levelGroup/Quintella/img/color3.ci4.png.inc.c"
};
unsigned char Quintella_Pad13[] = FILEPAD;
unsigned char Quintella_color3_ci4_PAL[] = {
#include "build/assets/levelGroup/Quintella/img/color3.ci4.pal.inc.c"
};
Gfx Quintella_a_model3_Gfx[] = {
#include "assets/levelGroup/Quintella/a_model3/a_model3.gfx.inc.c"
};
Vtx Quintella_a_model4_Vtx[] = {
#include "assets/levelGroup/Quintella/a_model4/a_model4.vtx.inc.c"
};
Mtx Quintella_IMtx9 = IDENTITY;
unsigned char Quintella_Pad14[] = FILEPAD;
unsigned char Quintella_shoulder_ci4_PNG[] = {
#include "build/assets/levelGroup/Quintella/img/shoulder.ci4.png.inc.c"
};
unsigned char Quintella_Pad15[] = FILEPAD;
unsigned char Quintella_shoulder_ci4_PAL[] = {
#include "build/assets/levelGroup/Quintella/img/shoulder.ci4.pal.inc.c"
};
Gfx Quintella_a_model4_Gfx[] = {
#include "assets/levelGroup/Quintella/a_model4/a_model4.gfx.inc.c"
};
Vtx Quintella_a_model5_Vtx[] = {
#include "assets/levelGroup/Quintella/a_model5/a_model5.vtx.inc.c"
};
Mtx Quintella_IMtx10 = IDENTITY;
Gfx Quintella_a_model5_Gfx[] = {
#include "assets/levelGroup/Quintella/a_model5/a_model5.gfx.inc.c"
};
Vtx Quintella_a_model6_Vtx[] = {
#include "assets/levelGroup/Quintella/a_model6/a_model6.vtx.inc.c"
};
Mtx Quintella_IMtx11 = IDENTITY;
Gfx Quintella_a_model6_Gfx[] = {
#include "assets/levelGroup/Quintella/a_model6/a_model6.gfx.inc.c"
};
Vtx Quintella_a_model7_Vtx[] = {
#include "assets/levelGroup/Quintella/a_model7/a_model7.vtx.inc.c"
};
Mtx Quintella_IMtx12 = IDENTITY;
Gfx Quintella_a_model7_Gfx[] = {
#include "assets/levelGroup/Quintella/a_model7/a_model7.gfx.inc.c"
};
Vtx Quintella_a_model8_Vtx[] = {
#include "assets/levelGroup/Quintella/a_model8/a_model8.vtx.inc.c"
};
Mtx Quintella_IMtx13 = IDENTITY;
Gfx Quintella_a_model8_Gfx[] = {
#include "assets/levelGroup/Quintella/a_model8/a_model8.gfx.inc.c"
};
Vtx Quintella_a_model9_Vtx[] = {
#include "assets/levelGroup/Quintella/a_model9/a_model9.vtx.inc.c"
};
Mtx Quintella_IMtx14 = IDENTITY;
Gfx Quintella_a_model9_Gfx[] = {
#include "assets/levelGroup/Quintella/a_model9/a_model9.gfx.inc.c"
};
Vtx Quintella_a_model10_Vtx[] = {
#include "assets/levelGroup/Quintella/a_model10/a_model10.vtx.inc.c"
};
Mtx Quintella_IMtx15 = IDENTITY;
Gfx Quintella_a_model10_Gfx[] = {
#include "assets/levelGroup/Quintella/a_model10/a_model10.gfx.inc.c"
};
Vtx Quintella_a_model11_Vtx[] = {
#include "assets/levelGroup/Quintella/a_model11/a_model11.vtx.inc.c"
};
Mtx Quintella_IMtx16 = IDENTITY;
Gfx Quintella_a_model11_Gfx[] = {
#include "assets/levelGroup/Quintella/a_model11/a_model11.gfx.inc.c"
};
Vtx Quintella_a_model12_Vtx[] = {
#include "assets/levelGroup/Quintella/a_model12/a_model12.vtx.inc.c"
};
Mtx Quintella_IMtx17 = IDENTITY;
Gfx Quintella_a_model12_Gfx[] = {
#include "assets/levelGroup/Quintella/a_model12/a_model12.gfx.inc.c"
};
Vtx Quintella_a_model13_Vtx[] = {
#include "assets/levelGroup/Quintella/a_model13/a_model13.vtx.inc.c"
};
Mtx Quintella_IMtx18 = IDENTITY;
unsigned char Quintella_Pad16[] = FILEPAD;
unsigned char Quintella_dressTop_ci4_PNG[] = {
#include "build/assets/levelGroup/Quintella/img/dressTop.ci4.png.inc.c"
};
unsigned char Quintella_Pad17[] = FILEPAD;
unsigned char Quintella_dressTop_ci4_PAL[] = {
#include "build/assets/levelGroup/Quintella/img/dressTop.ci4.pal.inc.c"
};
unsigned char Quintella_Pad18[] = FILEPAD;
unsigned char Quintella_dressUncompressed_rgba16_PNG[] = {
#include "build/assets/levelGroup/Quintella/img/dressUncompressed.rgba16.png.inc.c"
};
unsigned char Quintella_Pad19[] = FILEPAD;
unsigned char Quintella_dress_ci4_PNG[] = {
#include "build/assets/levelGroup/Quintella/img/dress.ci4.png.inc.c"
};
unsigned char Quintella_Pad20[] = FILEPAD;
unsigned char Quintella_dress_ci4_PAL[] = {
#include "build/assets/levelGroup/Quintella/img/dress.ci4.pal.inc.c"
};
Gfx Quintella_a_model13_Gfx[] = {
#include "assets/levelGroup/Quintella/a_model13/a_model13.gfx.inc.c"
};
Vtx Quintella_a_model14_Vtx[] = {
#include "assets/levelGroup/Quintella/a_model14/a_model14.vtx.inc.c"
};
Mtx Quintella_IMtx19 = IDENTITY;
Gfx Quintella_a_model14_Gfx[] = {
#include "assets/levelGroup/Quintella/a_model14/a_model14.gfx.inc.c"
};
Vtx Quintella_a_model15_Vtx[] = {
#include "assets/levelGroup/Quintella/a_model15/a_model15.vtx.inc.c"
};
Mtx Quintella_IMtx20 = IDENTITY;
Gfx Quintella_a_model15_Gfx[] = {
#include "assets/levelGroup/Quintella/a_model15/a_model15.gfx.inc.c"
};
Vtx Quintella_a_model16_Vtx[] = {
#include "assets/levelGroup/Quintella/a_model16/a_model16.vtx.inc.c"
};
Mtx Quintella_IMtx21 = IDENTITY;
unsigned char Quintella_Pad21[] = FILEPAD;
unsigned char Quintella_fan_ci4_PNG[] = {
#include "build/assets/levelGroup/Quintella/img/fan.ci4.png.inc.c"
};
unsigned char Quintella_Pad22[] = FILEPAD;
unsigned char Quintella_fan_ci4_PAL[] = {
#include "build/assets/levelGroup/Quintella/img/fan.ci4.pal.inc.c"
};
Gfx Quintella_a_model16_Gfx[] = {
#include "assets/levelGroup/Quintella/a_model16/a_model16.gfx.inc.c"
};
Vtx Quintella_a_model17_Vtx[] = {
#include "assets/levelGroup/Quintella/a_model17/a_model17.vtx.inc.c"
};
Mtx Quintella_IMtx22 = IDENTITY;
Gfx Quintella_a_model17_Gfx[] = {
#include "assets/levelGroup/Quintella/a_model17/a_model17.gfx.inc.c"
};
Mtx Quintella_IMtx23 = IDENTITY;
Gfx Quintella_a_model18_Gfx[] = {
#include "assets/levelGroup/Quintella/a_model18/a_model18.gfx.inc.c"
};
Anim Quintella_unk1Header_Animh = {
#include "assets/levelGroup/Quintella/anim/unk1Header.animH.inc.c"
};
Mtx Quintella_unk1_Animarr[40][17] = {
#include "assets/levelGroup/Quintella/anim/unk1.animArr.inc.c"
};
Anim Quintella_unk2Header_Animh = {
#include "assets/levelGroup/Quintella/anim/unk2Header.animH.inc.c"
};
Mtx Quintella_unk2_Animarr[30][17] = {
#include "assets/levelGroup/Quintella/anim/unk2.animArr.inc.c"
};
Anim Quintella_unk3Header_Animh = {
#include "assets/levelGroup/Quintella/anim/unk3Header.animH.inc.c"
};
Mtx Quintella_unk3_Animarr[15][17] = {
#include "assets/levelGroup/Quintella/anim/unk3.animArr.inc.c"
};
Anim Quintella_unk4Header_Animh = {
#include "assets/levelGroup/Quintella/anim/unk4Header.animH.inc.c"
};
Mtx Quintella_unk4_Animarr[20][17] = {
#include "assets/levelGroup/Quintella/anim/unk4.animArr.inc.c"
};
Anim Quintella_unk5Header_Animh = {
#include "assets/levelGroup/Quintella/anim/unk5Header.animH.inc.c"
};
Mtx Quintella_unk5_Animarr[40][17] = {
#include "assets/levelGroup/Quintella/anim/unk5.animArr.inc.c"
};
Anim Quintella_unk6Header_Animh = {
#include "assets/levelGroup/Quintella/anim/unk6Header.animH.inc.c"
};
Mtx Quintella_unk6_Animarr[60][17] = {
#include "assets/levelGroup/Quintella/anim/unk6.animArr.inc.c"
};
Anim Quintella_unk7Header_Animh = {
#include "assets/levelGroup/Quintella/anim/unk7Header.animH.inc.c"
};
Mtx Quintella_unk7_Animarr[3][17] = {
#include "assets/levelGroup/Quintella/anim/unk7.animArr.inc.c"
};
Anim Quintella_unk8Header_Animh = {
#include "assets/levelGroup/Quintella/anim/unk8Header.animH.inc.c"
};
Mtx Quintella_unk8_Animarr[5][17] = {
#include "assets/levelGroup/Quintella/anim/unk8.animArr.inc.c"
};
Anim Quintella_unk9Header_Animh = {
#include "assets/levelGroup/Quintella/anim/unk9Header.animH.inc.c"
};
Mtx Quintella_unk9_Animarr[30][17] = {
#include "assets/levelGroup/Quintella/anim/unk9.animArr.inc.c"
};
Anim Quintella_unk10Header_Animh = {
#include "assets/levelGroup/Quintella/anim/unk10Header.animH.inc.c"
};
Mtx Quintella_unk10_Animarr[55][17] = {
#include "assets/levelGroup/Quintella/anim/unk10.animArr.inc.c"
};
Anim Quintella_unk11Header_Animh = {
#include "assets/levelGroup/Quintella/anim/unk11Header.animH.inc.c"
};
Mtx Quintella_unk11_Animarr[5][17] = {
#include "assets/levelGroup/Quintella/anim/unk11.animArr.inc.c"
};


AnimPointer Quintella_unk1Pointers_Animp[1] = {
	{&Quintella_unk1Header_Animh.frames, &Quintella_unk1Header_Animh.objects, &Quintella_unk1_Animarr[0][0]}
};


AnimPointer Quintella_unk2Pointers_Animp[1] = {
	{&Quintella_unk2Header_Animh.frames, &Quintella_unk2Header_Animh.objects, &Quintella_unk2_Animarr[0][0]}
};


AnimPointer Quintella_unk3Pointers_Animp[1] = {
	{&Quintella_unk3Header_Animh.frames, &Quintella_unk3Header_Animh.objects, &Quintella_unk3_Animarr[0][0]}
};


AnimPointer Quintella_unk4Pointers_Animp[1] = {
	{&Quintella_unk4Header_Animh.frames, &Quintella_unk4Header_Animh.objects, &Quintella_unk4_Animarr[0][0]}
};


AnimPointer Quintella_unk5Pointers_Animp[1] = {
	{&Quintella_unk5Header_Animh.frames, &Quintella_unk5Header_Animh.objects, &Quintella_unk5_Animarr[0][0]}
};


AnimPointer Quintella_unk6Pointers_Animp[1] = {
	{&Quintella_unk6Header_Animh.frames, &Quintella_unk6Header_Animh.objects, &Quintella_unk6_Animarr[0][0]}
};


AnimPointer Quintella_unk7Pointers_Animp[1] = {
	{&Quintella_unk7Header_Animh.frames, &Quintella_unk7Header_Animh.objects, &Quintella_unk7_Animarr[0][0]}
};


AnimPointer Quintella_unk8Pointers_Animp[1] = {
	{&Quintella_unk8Header_Animh.frames, &Quintella_unk8Header_Animh.objects, &Quintella_unk8_Animarr[0][0]}
};


AnimPointer Quintella_unk9Pointers_Animp[1] = {
	{&Quintella_unk9Header_Animh.frames, &Quintella_unk9Header_Animh.objects, &Quintella_unk9_Animarr[0][0]}
};


AnimPointer Quintella_unk10Pointers_Animp[1] = {
	{&Quintella_unk10Header_Animh.frames, &Quintella_unk10Header_Animh.objects, &Quintella_unk10_Animarr[0][0]}
};


AnimPointer Quintella_unk11Pointers_Animp[1] = {
	{&Quintella_unk11Header_Animh.frames, &Quintella_unk11Header_Animh.objects, &Quintella_unk11_Animarr[0][0]}
};
