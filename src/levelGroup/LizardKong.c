#include "LizardKong.h"
Mtx LizardKong_IMtx1 = IDENTITY;

extern ModelCollision Global_BLDestructableTop_ColH;
extern Gfx Global_BLDestructableTop_Gfx[];
extern Gfx Global_BLLava_Gfx[];
extern ModelCollision Global_BLLava5_ColH;
extern Gfx Global_JLCaveDoor_Gfx[];
extern ModelCollision Global_JLCaveDoor_ColH;
extern ModelCollision LizardKong_unkCol1_ColH;
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
extern Gfx LizardKong_model1_Gfx[];
extern ModelCollision Global_BLLava_ColH;
extern Gfx Global_BossBridge_Gfx[];
extern ModelCollision Global_BLMetalBridge_ColH;
extern ModelCollision LizardKong_unkCol2_ColH;
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
extern Gfx LizardKong_model2_Gfx[];
extern ModelCollision Global_exitShadowEast_ColH;
extern ModelCollision Global_pole_ColH;
extern Gfx Global_ALBLExit_Gfx[];

StageModel LizardKong_stageModels[] = {
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
	{       LizardKong_model1_Gfx,       &LizardKong_unkCol1_ColH},
	{       LizardKong_model2_Gfx,       &LizardKong_unkCol2_ColH},
	{             Global_pole_Gfx,              &Global_pole_ColH}
};

extern ModelCollision Global_unk1_ColH;

rabObject LizardKong_rabObjects[] = {
	{0, 100.0, 100.0, 100.0, &Global_unk1_ColH},
	{0, 100.0, 100.0, 100.0, &Global_unk1_ColH}
};


RoomObject LizardKong_room0_objects[] = {
	{   {0.0,   0.0,    0.0}, {1.0,       1.0, 1.0}, ROT_NONE, 0, OBJU_NORMAL, OBJM_NORMAL,    0.0,    0.0,     0.0, 0.0,       NULL,  0,  0,    0, 0, 0, 35, -1, -1, -1, NULL, NULL, NULL, 0,  7,  4, 4, 0, -1, 0, 0},
	{   {0.0,   0.0,    0.0}, {1.0,       1.0, 1.0}, ROT_NONE, 0, OBJU_NORMAL, OBJM_NORMAL, 1400.0, 1000.0, -1000.0, 0.0,       NULL, 90,  0, 1000, 0, 0, 36, -1, 30, -1, NULL, NULL, NULL, 0,  7,  4, 4, 0, -1, 0, 0},
	{{-200.0, -50.0, -200.0}, {1.5,       2.0, 2.0}, ROT_NONE, 0, OBJU_NORMAL, OBJM_NORMAL,    0.0,    0.0,     0.0, 0.0,       NULL,  0,  0,    0, 0, 0, 33, -1, -1, -1, NULL, NULL, NULL, 0, 34,  4, 4, 0, -1, 0, 0},
	{ {200.0,   0.0,  200.0}, {1.0,       1.0, 1.0}, ROT_NONE, 0, OBJU_NORMAL, OBJM_NORMAL,    0.0,    0.0,     0.0, 0.0,       NULL,  0,  0,    0, 0, 0, 30, -1, -1, -1, NULL, NULL, NULL, 0,  7,  4, 4, 0, -1, 0, 0},
	{ {200.0,   0.0,  200.0}, {1.0,       1.0, 1.0}, ROT_NONE, 0, OBJU_NORMAL, OBJM_NORMAL,    0.0,    0.0,     0.0, 0.0,       NULL,  0,  0,    0, 0, 0,  3, -1, -1, -1, NULL, NULL, NULL, 0,  0,  4, 4, 0, -1, 0, 0},
	{ {200.0,   0.0,  200.0}, {1.0,       1.0, 1.0}, ROT_NONE, 0,   OBJU_ZONE, OBJM_NORMAL,  400.0,  400.0,     0.0, 0.0, ZDIR_SOUTH,  1,  0,    0, 0, 0,  0, -1, -1, -1, NULL, NULL, NULL, 0,  7, -1, 1, 0, -1, 0, 0},
	{ {200.0,   0.0,  200.0}, {4.0,       4.0, 4.0}, ROT_NONE, 0, OBJU_NORMAL, OBJM_NORMAL, 1400.0, 1000.0, -1000.0, 0.0,       NULL, 90,  0, 1000, 0, 0,  0, -1, -1, -1, NULL, NULL, NULL, 0,  1,  0, 0, 0, -1, 0, 0},
	{ {200.0, 400.0,    0.0}, {1.0, 1.3333334, 0.1}, ROT_NONE, 0, OBJU_NORMAL,   OBJM_DOOR,  200.0,    0.0,     0.0, 0.0,          2, 20, -1,   40, 0, 0, 34, -1, -1, 30, NULL, NULL, NULL, 0,  3,  4, 4, 0, -1, 0, 0},
	NULL_OBJECT
};


RoomActor LizardKong_room0_actors[] = {
	{                  LIZARD_KONG,    {0.0,    0.0,     0.0}, 263.0, -10000.0, 10000.0, -10000.0, 10000.0, -10000.0, 10000.0, 1, 0.6, 15.0, 2000.0, 80.0, 3.0, 45.0, 3000.0, 0.0,  30.0, 0.0,  0.0, 0.0},
	{LIZARD_KONG_BUTTERFLY_SPAWNER,  {500.0, -100.0, -3200.0},   0.0, -50000.0, 50000.0, -50000.0, 50000.0, -50000.0, 50000.0, 0, 8.0,  4.0,   10.0,  1.0, 3.0,  0.0,    0.0, 0.0, 360.0, 6.0, 30.0, 0.0},
	{LIZARD_KONG_BUTTERFLY_SPAWNER, {-500.0, -100.0, -3200.0},   0.0, -50000.0, 50000.0, -50000.0, 50000.0, -50000.0, 50000.0, 0, 8.0,  4.0,   10.0,  1.0, 3.0,  0.0,    0.0, 0.0, 360.0, 6.0, 30.0, 0.0},
	NULL_ACTOR
};


s32 LizardKong_spriteLib[2][16] = {
{ SPRITE_PORCUPINE,
     SPRITE_SPIDER,
 SPRITE_BUTTERFLY}
};


RoomInstance LizardKong_room_instances[] = {
	{LizardKong_room0_objects, LizardKong_room0_actors, NULL, NULL, 0, 0, 0, 0, -1, 0, 0.0, 10, -200.0, 800.0, -200.0, 0.0, 0.0, 0.0, 2.0, {0,  0,  0}, {0,  0,  0}, {0,  0,  0}, {0,  0,  0}, -1500.0},
	NULL_ROOM
};


s32 LizardKong_map[3][3] = {
	{-1, -1, -1},
	{-1,  0, -1},
	{-1, -1, -1}
};


StageMapData LizardKong_map_data = {
3, 3, LizardKong_room_instances, LizardKong_map
};


LevelScope LizardKong_scope = {
{0, 0, 0}, -1, 25000, 60
};


StageData LizardKong_stageData = {
               &LizardKong_map_data,
                               NULL,
             LizardKong_stageModels,
ARRAY_COUNT(LizardKong_stageModels),
                                  0,
              LizardKong_rabObjects,
                            0x20000,
               LizardKong_spriteLib,
                  &LizardKong_scope
};
Mtx LizardKong_IMtx2 = IDENTITY;
Lights1 LizardKong_lkScope_Light =
#include "assets/levelGroup/LizardKong/lkScope/lkScope.light.inc.c"
Vtx LizardKong_model1_Vtx[] = {
#include "assets/levelGroup/LizardKong/model1/model1.vtx.inc.c"
};
Mtx LizardKong_IMtx3 = IDENTITY;
unsigned char LizardKong_Pad1[] = FILEPAD;
unsigned char LizardKong_caveFade_ci4_PNG[] = {
#include "build/assets/levelGroup/LizardKong/img/caveFade.ci4.png.inc.c"
};
unsigned char LizardKong_Pad2[] = FILEPAD;
unsigned char LizardKong_caveFade_ci4_PAL[] = {
#include "build/assets/levelGroup/LizardKong/img/caveFade.ci4.pal.inc.c"
};
Gfx LizardKong_model1_Gfx[] = {
#include "assets/levelGroup/LizardKong/model1/model1.gfx.inc.c"
};
Vtx LizardKong_model2_Vtx[] = {
#include "assets/levelGroup/LizardKong/model2/model2.vtx.inc.c"
};
Mtx LizardKong_IMtx4 = IDENTITY;
Gfx LizardKong_model2_Gfx[] = {
#include "assets/levelGroup/LizardKong/model2/model2.gfx.inc.c"
};
Vec3f LizardKong_unkCol1_ColV[] = {
#include "assets/levelGroup/LizardKong/unkCol1/unkCol1.colV.inc.c"
};
Vec3w LizardKong_unkCol1_ColT[] = {
#include "assets/levelGroup/LizardKong/unkCol1/unkCol1.colT.inc.c"
};
Rect3D LizardKong_unkCol1_ColS = {
#include "assets/levelGroup/LizardKong/unkCol1/unkCol1.colS.inc.c"
};
ModelCollision LizardKong_unkCol1_ColH = {
ARRAY_COUNT(LizardKong_unkCol1_ColV), ARRAY_COUNT(LizardKong_unkCol1_ColT), LizardKong_unkCol1_ColV, LizardKong_unkCol1_ColT, &LizardKong_unkCol1_ColS
};
Vec3f LizardKong_unkCol2_ColV[] = {
#include "assets/levelGroup/LizardKong/unkCol2/unkCol2.colV.inc.c"
};
Vec3w LizardKong_unkCol2_ColT[] = {
#include "assets/levelGroup/LizardKong/unkCol2/unkCol2.colT.inc.c"
};
Rect3D LizardKong_unkCol2_ColS = {
#include "assets/levelGroup/LizardKong/unkCol2/unkCol2.colS.inc.c"
};
ModelCollision LizardKong_unkCol2_ColH = {
ARRAY_COUNT(LizardKong_unkCol2_ColV), ARRAY_COUNT(LizardKong_unkCol2_ColT), LizardKong_unkCol2_ColV, LizardKong_unkCol2_ColT, &LizardKong_unkCol2_ColS
};
Mtx LizardKong_IMtx5 = IDENTITY;
Lights1 LizardKong_lkScope2_Light =
#include "assets/levelGroup/LizardKong/lkScope2/lkScope2.light.inc.c"
Vtx LizardKong_a_model1_Vtx[] = {
#include "assets/levelGroup/LizardKong/a_model1/a_model1.vtx.inc.c"
};
Mtx LizardKong_IMtx6 = IDENTITY;
unsigned char LizardKong_Pad3[] = FILEPAD;
unsigned char LizardKong_hair1_ci8_PNG[] = {
#include "build/assets/levelGroup/LizardKong/img/hair1.ci8.png.inc.c"
};
unsigned char LizardKong_Pad4[] = FILEPAD;
unsigned char LizardKong_hair1_ci8_PAL[] = {
#include "build/assets/levelGroup/LizardKong/img/hair1.ci8.pal.inc.c"
};
unsigned char LizardKong_Pad5[] = FILEPAD;
unsigned char LizardKong_color_ci4_PNG[] = {
#include "build/assets/levelGroup/LizardKong/img/color.ci4.png.inc.c"
};
unsigned char LizardKong_Pad6[] = FILEPAD;
unsigned char LizardKong_color_ci4_PAL[] = {
#include "build/assets/levelGroup/LizardKong/img/color.ci4.pal.inc.c"
};
unsigned char LizardKong_Pad7[] = FILEPAD;
unsigned char LizardKong_ear_ci4_PNG[] = {
#include "build/assets/levelGroup/LizardKong/img/ear.ci4.png.inc.c"
};
unsigned char LizardKong_Pad8[] = FILEPAD;
unsigned char LizardKong_ear_ci4_PAL[] = {
#include "build/assets/levelGroup/LizardKong/img/ear.ci4.pal.inc.c"
};
unsigned char LizardKong_Pad9[] = FILEPAD;
unsigned char LizardKong_hair2_ci8_PNG[] = {
#include "build/assets/levelGroup/LizardKong/img/hair2.ci8.png.inc.c"
};
unsigned char LizardKong_Pad10[] = FILEPAD;
unsigned char LizardKong_hair2_ci8_PAL[] = {
#include "build/assets/levelGroup/LizardKong/img/hair2.ci8.pal.inc.c"
};
unsigned char LizardKong_Pad11[] = FILEPAD;
unsigned char LizardKong_face_ci4_PNG[] = {
#include "build/assets/levelGroup/LizardKong/img/face.ci4.png.inc.c"
};
unsigned char LizardKong_Pad12[] = FILEPAD;
unsigned char LizardKong_face_ci4_PAL[] = {
#include "build/assets/levelGroup/LizardKong/img/face.ci4.pal.inc.c"
};
Gfx LizardKong_a_model1_Gfx[] = {
#include "assets/levelGroup/LizardKong/a_model1/a_model1.gfx.inc.c"
};
Vtx LizardKong_a_model2_Vtx[] = {
#include "assets/levelGroup/LizardKong/a_model2/a_model2.vtx.inc.c"
};
Mtx LizardKong_IMtx7 = IDENTITY;
unsigned char LizardKong_Pad13[] = FILEPAD;
unsigned char LizardKong_fur_ci4_PNG[] = {
#include "build/assets/levelGroup/LizardKong/img/fur.ci4.png.inc.c"
};
unsigned char LizardKong_Pad14[] = FILEPAD;
unsigned char LizardKong_fur_ci4_PAL[] = {
#include "build/assets/levelGroup/LizardKong/img/fur.ci4.pal.inc.c"
};
unsigned char LizardKong_Pad15[] = FILEPAD;
unsigned char LizardKong_arm_ci4_PNG[] = {
#include "build/assets/levelGroup/LizardKong/img/arm.ci4.png.inc.c"
};
unsigned char LizardKong_Pad16[] = FILEPAD;
unsigned char LizardKong_arm_ci4_PAL[] = {
#include "build/assets/levelGroup/LizardKong/img/arm.ci4.pal.inc.c"
};
Gfx LizardKong_a_model2_Gfx[] = {
#include "assets/levelGroup/LizardKong/a_model2/a_model2.gfx.inc.c"
};
Vtx LizardKong_a_model3_Vtx[] = {
#include "assets/levelGroup/LizardKong/a_model3/a_model3.vtx.inc.c"
};
Mtx LizardKong_IMtx8 = IDENTITY;
Gfx LizardKong_a_model3_Gfx[] = {
#include "assets/levelGroup/LizardKong/a_model3/a_model3.gfx.inc.c"
};
Vtx LizardKong_a_model4_Vtx[] = {
#include "assets/levelGroup/LizardKong/a_model4/a_model4.vtx.inc.c"
};
Mtx LizardKong_IMtx9 = IDENTITY;
Gfx LizardKong_a_model4_Gfx[] = {
#include "assets/levelGroup/LizardKong/a_model4/a_model4.gfx.inc.c"
};
Vtx LizardKong_a_model5_Vtx[] = {
#include "assets/levelGroup/LizardKong/a_model5/a_model5.vtx.inc.c"
};
Mtx LizardKong_IMtx10 = IDENTITY;
Gfx LizardKong_a_model5_Gfx[] = {
#include "assets/levelGroup/LizardKong/a_model5/a_model5.gfx.inc.c"
};
Vtx LizardKong_a_model6_Vtx[] = {
#include "assets/levelGroup/LizardKong/a_model6/a_model6.vtx.inc.c"
};
Mtx LizardKong_IMtx11 = IDENTITY;
Gfx LizardKong_a_model6_Gfx[] = {
#include "assets/levelGroup/LizardKong/a_model6/a_model6.gfx.inc.c"
};
Vtx LizardKong_a_model7_Vtx[] = {
#include "assets/levelGroup/LizardKong/a_model7/a_model7.vtx.inc.c"
};
Mtx LizardKong_IMtx12 = IDENTITY;
unsigned char LizardKong_Pad17[] = FILEPAD;
unsigned char LizardKong_fist1_ci4_PNG[] = {
#include "build/assets/levelGroup/LizardKong/img/fist1.ci4.png.inc.c"
};
unsigned char LizardKong_Pad18[] = FILEPAD;
unsigned char LizardKong_fist1_ci4_PAL[] = {
#include "build/assets/levelGroup/LizardKong/img/fist1.ci4.pal.inc.c"
};
unsigned char LizardKong_Pad19[] = FILEPAD;
unsigned char LizardKong_fist2_ci4_PNG[] = {
#include "build/assets/levelGroup/LizardKong/img/fist2.ci4.png.inc.c"
};
unsigned char LizardKong_Pad20[] = FILEPAD;
unsigned char LizardKong_fist2_ci4_PAL[] = {
#include "build/assets/levelGroup/LizardKong/img/fist2.ci4.pal.inc.c"
};
unsigned char LizardKong_Pad21[] = FILEPAD;
unsigned char LizardKong_fist3_ci4_PNG[] = {
#include "build/assets/levelGroup/LizardKong/img/fist3.ci4.png.inc.c"
};
unsigned char LizardKong_Pad22[] = FILEPAD;
unsigned char LizardKong_fist3_ci4_PAL[] = {
#include "build/assets/levelGroup/LizardKong/img/fist3.ci4.pal.inc.c"
};
unsigned char LizardKong_Pad23[] = FILEPAD;
unsigned char LizardKong_fist4_ci4_PNG[] = {
#include "build/assets/levelGroup/LizardKong/img/fist4.ci4.png.inc.c"
};
unsigned char LizardKong_Pad24[] = FILEPAD;
unsigned char LizardKong_fist4_ci4_PAL[] = {
#include "build/assets/levelGroup/LizardKong/img/fist4.ci4.pal.inc.c"
};
Gfx LizardKong_a_model7_Gfx[] = {
#include "assets/levelGroup/LizardKong/a_model7/a_model7.gfx.inc.c"
};
Vtx LizardKong_a_model8_Vtx[] = {
#include "assets/levelGroup/LizardKong/a_model8/a_model8.vtx.inc.c"
};
Mtx LizardKong_IMtx13 = IDENTITY;
Gfx LizardKong_a_model8_Gfx[] = {
#include "assets/levelGroup/LizardKong/a_model8/a_model8.gfx.inc.c"
};
Vtx LizardKong_a_model9_Vtx[] = {
#include "assets/levelGroup/LizardKong/a_model9/a_model9.vtx.inc.c"
};
Mtx LizardKong_IMtx14 = IDENTITY;
Gfx LizardKong_a_model9_Gfx[] = {
#include "assets/levelGroup/LizardKong/a_model9/a_model9.gfx.inc.c"
};
Vtx LizardKong_a_model10_Vtx[] = {
#include "assets/levelGroup/LizardKong/a_model10/a_model10.vtx.inc.c"
};
Mtx LizardKong_IMtx15 = IDENTITY;
Gfx LizardKong_a_model10_Gfx[] = {
#include "assets/levelGroup/LizardKong/a_model10/a_model10.gfx.inc.c"
};
Vtx LizardKong_a_model11_Vtx[] = {
#include "assets/levelGroup/LizardKong/a_model11/a_model11.vtx.inc.c"
};
Mtx LizardKong_IMtx16 = IDENTITY;
Gfx LizardKong_a_model11_Gfx[] = {
#include "assets/levelGroup/LizardKong/a_model11/a_model11.gfx.inc.c"
};
Mtx LizardKong_IMtx17 = IDENTITY;
Gfx LizardKong_a_model12_Gfx[] = {
#include "assets/levelGroup/LizardKong/a_model12/a_model12.gfx.inc.c"
};
Vtx LizardKong_a_model13_Vtx[] = {
#include "assets/levelGroup/LizardKong/a_model13/a_model13.vtx.inc.c"
};
Mtx LizardKong_IMtx18 = IDENTITY;
unsigned char LizardKong_Pad25[] = FILEPAD;
unsigned char LizardKong_boulder_ci8_PNG[] = {
#include "build/assets/levelGroup/LizardKong/img/boulder.ci8.png.inc.c"
};
unsigned char LizardKong_Pad26[] = FILEPAD;
unsigned char LizardKong_boulder_ci8_PAL[] = {
#include "build/assets/levelGroup/LizardKong/img/boulder.ci8.pal.inc.c"
};
unsigned char LizardKong_Pad27[] = FILEPAD;
unsigned char LizardKong_boulder2_ci8_PNG[] = {
#include "build/assets/levelGroup/LizardKong/img/boulder2.ci8.png.inc.c"
};
unsigned char LizardKong_Pad28[] = FILEPAD;
unsigned char LizardKong_boulder2_ci8_PAL[] = {
#include "build/assets/levelGroup/LizardKong/img/boulder2.ci8.pal.inc.c"
};
Gfx LizardKong_a_model13_Gfx[] = {
#include "assets/levelGroup/LizardKong/a_model13/a_model13.gfx.inc.c"
};
Mtx LizardKong_IMtx19 = IDENTITY;
Gfx LizardKong_a_model14_Gfx[] = {
#include "assets/levelGroup/LizardKong/a_model14/a_model14.gfx.inc.c"
};
Anim LizardKong_unk1Header_Animh = {
#include "assets/levelGroup/LizardKong/anim/unk1Header.animH.inc.c"
};
Mtx LizardKong_unk1_Animarr[80][11] = {
#include "assets/levelGroup/LizardKong/anim/unk1.animArr.inc.c"
};


AnimPointer LizardKong_unk1Pointers_Animp[1] = {
	{&LizardKong_unk1Header_Animh.frames, &LizardKong_unk1Header_Animh.objects, &LizardKong_unk1_Animarr[0][0]}
};
Anim LizardKong_unk2Header_Animh = {
#include "assets/levelGroup/LizardKong/anim/unk2Header.animH.inc.c"
};
Mtx LizardKong_unk2_Animarr[40][11] = {
#include "assets/levelGroup/LizardKong/anim/unk2.animArr.inc.c"
};


AnimPointer LizardKong_unk2Pointers_Animp[1] = {
	{&LizardKong_unk2Header_Animh.frames, &LizardKong_unk2Header_Animh.objects, &LizardKong_unk2_Animarr[0][0]}
};
Anim LizardKong_unk3Header_Animh = {
#include "assets/levelGroup/LizardKong/anim/unk3Header.animH.inc.c"
};
Mtx LizardKong_unk3_Animarr[30][11] = {
#include "assets/levelGroup/LizardKong/anim/unk3.animArr.inc.c"
};


AnimPointer LizardKong_unk3Pointers_Animp[1] = {
	{&LizardKong_unk3Header_Animh.frames, &LizardKong_unk3Header_Animh.objects, &LizardKong_unk3_Animarr[0][0]}
};
Anim LizardKong_unk4Header_Animh = {
#include "assets/levelGroup/LizardKong/anim/unk4Header.animH.inc.c"
};
Mtx LizardKong_unk4_Animarr[10][11] = {
#include "assets/levelGroup/LizardKong/anim/unk4.animArr.inc.c"
};


AnimPointer LizardKong_unk4Pointers_Animp[1] = {
	{&LizardKong_unk4Header_Animh.frames, &LizardKong_unk4Header_Animh.objects, &LizardKong_unk4_Animarr[0][0]}
};
Anim LizardKong_unk5Header_Animh = {
#include "assets/levelGroup/LizardKong/anim/unk5Header.animH.inc.c"
};
Mtx LizardKong_unk5_Animarr[5][11] = {
#include "assets/levelGroup/LizardKong/anim/unk5.animArr.inc.c"
};


AnimPointer LizardKong_unk5Pointers_Animp[1] = {
	{&LizardKong_unk5Header_Animh.frames, &LizardKong_unk5Header_Animh.objects, &LizardKong_unk5_Animarr[0][0]}
};
Anim LizardKong_unk6Header_Animh = {
#include "assets/levelGroup/LizardKong/anim/unk6Header.animH.inc.c"
};
Mtx LizardKong_unk6_Animarr[15][11] = {
#include "assets/levelGroup/LizardKong/anim/unk6.animArr.inc.c"
};


AnimPointer LizardKong_unk6Pointers_Animp[1] = {
	{&LizardKong_unk6Header_Animh.frames, &LizardKong_unk6Header_Animh.objects, &LizardKong_unk6_Animarr[0][0]}
};
Anim LizardKong_unk7Header_Animh = {
#include "assets/levelGroup/LizardKong/anim/unk7Header.animH.inc.c"
};
Mtx LizardKong_unk7_Animarr[5][11] = {
#include "assets/levelGroup/LizardKong/anim/unk7.animArr.inc.c"
};


AnimPointer LizardKong_unk7Pointers_Animp[1] = {
	{&LizardKong_unk7Header_Animh.frames, &LizardKong_unk7Header_Animh.objects, &LizardKong_unk7_Animarr[0][0]}
};
Anim LizardKong_unk8Header_Animh = {
#include "assets/levelGroup/LizardKong/anim/unk8Header.animH.inc.c"
};
Mtx LizardKong_unk8_Animarr[20][11] = {
#include "assets/levelGroup/LizardKong/anim/unk8.animArr.inc.c"
};


AnimPointer LizardKong_unk8Pointers_Animp[1] = {
	{&LizardKong_unk8Header_Animh.frames, &LizardKong_unk8Header_Animh.objects, &LizardKong_unk8_Animarr[0][0]}
};
Anim LizardKong_unk9Header_Animh = {
#include "assets/levelGroup/LizardKong/anim/unk9Header.animH.inc.c"
};
Mtx LizardKong_unk9_Animarr[1][1] = {
#include "assets/levelGroup/LizardKong/anim/unk9.animArr.inc.c"
};


AnimPointer LizardKong_unk9Pointers_Animp[1] = {
	{&LizardKong_unk9Header_Animh.frames, &LizardKong_unk9Header_Animh.objects, &LizardKong_unk9_Animarr[0][0]}
};
Anim LizardKong_unk10Header_Animh = {
#include "assets/levelGroup/LizardKong/anim/unk10Header.animH.inc.c"
};
Mtx LizardKong_unk10_Animarr[15][11] = {
#include "assets/levelGroup/LizardKong/anim/unk10.animArr.inc.c"
};


AnimPointer LizardKong_unk10Pointers_Animp[1] = {
	{&LizardKong_unk10Header_Animh.frames, &LizardKong_unk10Header_Animh.objects, &LizardKong_unk10_Animarr[0][0]}
};
Anim LizardKong_unk11Header_Animh = {
#include "assets/levelGroup/LizardKong/anim/unk11Header.animH.inc.c"
};
Mtx LizardKong_unk11_Animarr[15][11] = {
#include "assets/levelGroup/LizardKong/anim/unk11.animArr.inc.c"
};


AnimPointer LizardKong_unk11Pointers_Animp[1] = {
	{&LizardKong_unk11Header_Animh.frames, &LizardKong_unk11Header_Animh.objects, &LizardKong_unk11_Animarr[0][0]}
};
