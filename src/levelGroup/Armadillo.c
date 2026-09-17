#include "Armadillo.h"
Mtx Armadillo_IMtx1 = IDENTITY;

extern ModelCollision Global_BLDestructableTop_ColH;
extern Gfx Global_BLDestructableTop_Gfx[];
extern Gfx Global_BLLava_Gfx[];
extern ModelCollision Global_BLLava5_ColH;
extern Gfx Global_JLCaveDoor_Gfx[];
extern ModelCollision Global_JLCaveDoor_ColH;
extern Gfx Global_BLLavaFloor_Gfx[];
extern ModelCollision Global_ALSpinDoor_ColH;
extern Gfx Armadillo_model1_Gfx[];
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
extern ModelCollision Armadillo_unkCol2_ColH;
extern Gfx Global_pole_Gfx[];
extern Gfx Global_ALPole_Gfx[];
extern ModelCollision Global_ALPole_ColH;
extern Gfx Global_fallbackCube_Gfx[];
extern Gfx Global_exitShadowWest_Gfx[];
extern ModelCollision Global_BLLava_ColH;
extern ModelCollision Armadillo_unkCol1_ColH;
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
extern Gfx Armadillo_model2_Gfx[];
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

StageModel Armadillo_stageModels[] = {
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
	{        Armadillo_model1_Gfx,        &Armadillo_unkCol1_ColH},
	{        Armadillo_model2_Gfx,        &Armadillo_unkCol2_ColH},
	{             Global_pole_Gfx,              &Global_pole_ColH}
};

extern ModelCollision Global_unk1_ColH;

rabObject Armadillo_rabObjects[] = {
	{0, 100.0, 100.0, 100.0, &Global_unk1_ColH},
	{0, 100.0, 100.0, 100.0, &Global_unk1_ColH}
};


RoomObject Armadillo_roomMulti_objects[] = {
	{{-0.0, 0.0,    0.0}, {1.0, 1.0, 1.0}, ROT_NONE, 0, OBJU_NORMAL,       OBJM_NORMAL,    0.0,      0.0,     0.0, 0.0,       NULL,   0,  0,    0, 0, 0, 35, -1, -1, -1, NULL, NULL, NULL, 0, 7,  4, 4, 0, -1, 0, 0},
	{ {0.0, 0.0,    0.0}, {1.0, 1.0, 1.0}, ROT_NONE, 0, OBJU_NORMAL,       OBJM_NORMAL, 1400.0,   1000.0, -1000.0, 0.0,       NULL,  90,  0, 1000, 0, 0, 36, -1, 30, -1, NULL, NULL, NULL, 0, 3,  4, 4, 0, -1, 0, 0},
	{ {0.0, 0.0, 3300.0}, {1.0, 1.0, 1.0}, ROT_NONE, 0, OBJU_NORMAL, OBJM_FALLING_FLAG,    0.0, -20000.0,  3300.0, 0.0,         45, 300, -2,    0, 0, 0,  7, -1, -1, 30, NULL, NULL, NULL, 0, 7,  4, 4, 0, -1, 0, 0},
	{ {0.0, 0.0, 3100.0}, {1.0, 1.0, 1.0}, ROT_NONE, 0, OBJU_NORMAL, OBJM_FALLING_FLAG,    0.0, -20000.0,  3100.0, 0.0,         40, 300, -2,    0, 0, 0,  7, -1, -1, 30, NULL, NULL, NULL, 0, 7,  4, 4, 0, -1, 0, 0},
	{ {0.0, 0.0, 2900.0}, {1.0, 1.0, 1.0}, ROT_NONE, 0, OBJU_NORMAL, OBJM_FALLING_FLAG,    0.0, -20000.0,  2900.0, 0.0,         35, 300, -2,    0, 0, 0,  7, -1, -1, 30, NULL, NULL, NULL, 0, 7,  4, 4, 0, -1, 0, 0},
	{ {0.0, 0.0, 2700.0}, {1.0, 1.0, 1.0}, ROT_NONE, 0, OBJU_NORMAL, OBJM_FALLING_FLAG,    0.0, -20000.0,  2700.0, 0.0,         30, 300, -2,    0, 0, 0,  7, -1, -1, 30, NULL, NULL, NULL, 0, 7,  4, 4, 0, -1, 0, 0},
	{ {0.0, 0.0, 2500.0}, {1.0, 1.0, 1.0}, ROT_NONE, 0, OBJU_NORMAL, OBJM_FALLING_FLAG,    0.0, -20000.0,  2500.0, 0.0,         25, 300, -2,    0, 0, 0,  7, -1, -1, 30, NULL, NULL, NULL, 0, 7,  4, 4, 0, -1, 0, 0},
	{ {0.0, 0.0, 2300.0}, {1.0, 1.0, 1.0}, ROT_NONE, 0, OBJU_NORMAL, OBJM_FALLING_FLAG,    0.0, -20000.0,  2300.0, 0.0,         20, 300, -2,    0, 0, 0,  7, -1, -1, 30, NULL, NULL, NULL, 0, 7,  4, 4, 0, -1, 0, 0},
	{ {0.0, 0.0, 2100.0}, {1.0, 1.0, 1.0}, ROT_NONE, 0, OBJU_NORMAL, OBJM_FALLING_FLAG,    0.0, -20000.0,  2100.0, 0.0,         15, 300, -2,    0, 0, 0,  7, -1, -1, 30, NULL, NULL, NULL, 0, 7,  4, 4, 0, -1, 0, 0},
	{{-0.0, 0.0, 3600.0}, {1.0, 1.0, 1.0}, ROT_NONE, 0, OBJU_NORMAL,       OBJM_NORMAL,    0.0,      0.0,     0.0, 0.0,       NULL,   0,  0,    0, 0, 0, 24, -1, -1, -1, NULL, NULL, NULL, 0, 7,  4, 4, 0, -1, 0, 0},
	{{-0.0, 0.0, 3600.0}, {1.0, 1.0, 1.0}, ROT_NONE, 0, OBJU_NORMAL,       OBJM_NORMAL,    0.0,      0.0,     0.0, 0.0,       NULL,   0,  0,    0, 0, 0,  3, -1, -1, -1, NULL, NULL, NULL, 0, 0,  4, 4, 0, -1, 0, 0},
	{{-0.0, 0.0, 3600.0}, {1.0, 1.0, 1.0}, ROT_NONE, 0,   OBJU_ZONE,       OBJM_NORMAL,  400.0,    400.0,     0.0, 0.0, ZDIR_SOUTH,   1,  0,    0, 0, 0,  0, -1, -1, -1, NULL, NULL, NULL, 0, 7, -1, 1, 0, -1, 0, 0},
	{{-0.0, 0.0, 3600.0}, {4.0, 4.0, 4.0}, ROT_NONE, 0, OBJU_NORMAL,       OBJM_NORMAL, 1400.0,   1000.0, -1000.0, 0.0,       NULL,  90,  0, 1000, 0, 0,  0, -1, -1, -1, NULL, NULL, NULL, 0, 1,  0, 0, 0, -1, 0, 0},
	NULL_OBJECT
};


RoomActor Armadillo_room0_actors[] = {
	{ARMADILLO, {-0.0, 0.0, 0.0}, 270.0, -1500.0, 1500.0, -10000.0, 10000.0, -1500.0, 1500.0, 1, 48.0, 2.0, 100.0, 12.0, 600.0, 10.0, 512.0, 800.0, 4.0, 30.0, 5.0, 5.0},
	NULL_ACTOR
};


s32 Armadillo_spriteLib[3][16] = {
{ SPRITE_DESERTCASTLE_BG1,
  SPRITE_DESERTCASTLE_BG2,
  SPRITE_DESERTCASTLE_BG3,
  SPRITE_DESERTCASTLE_BG4,
  SPRITE_DESERTCASTLE_BG5,
          SPRITE_SANDCRAB,
      SPRITE_SANDCRAB_OUT,
           SPRITE_CONDOR}
};


RoomInstance Armadillo_room_instances[] = {
	{Armadillo_roomMulti_objects, Armadillo_room0_actors, NULL, NULL, 0, 1, 0, 0, -1, 0, 0.0, 5, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, {0,  0,  0}, {0,  0,  0}, {0,  0,  0}, {0,  0,  0}, -1500.0},
	NULL_ROOM
};


s32 Armadillo_map[1][3] = {
	{-1, 0, -1}
};


StageMapData Armadillo_map_data = {
3, 1, Armadillo_room_instances, Armadillo_map
};


RoomInstance Armadillo_ext_room_instances[] = {
	NULL_ROOM
};


LevelScope Armadillo_scope = {
{0, 0, 0}, 255, 25000, 60
};


StageData Armadillo_stageData = {
               &Armadillo_map_data,
                              NULL,
             Armadillo_stageModels,
ARRAY_COUNT(Armadillo_stageModels),
                                 0,
              Armadillo_rabObjects,
                           0x20000,
               Armadillo_spriteLib,
                  &Armadillo_scope
};
s32 Armadillo_alignment1[] = {0};
Mtx Armadillo_IMtx2 = IDENTITY;
Lights1 Armadillo_adScope1_Light =
#include "assets/levelGroup/Armadillo/adScope1/adScope1.light.inc.c"
Vtx Armadillo_model1_Vtx[] = {
#include "assets/levelGroup/Armadillo/model1/model1.vtx.inc.c"
};
Mtx Armadillo_IMtx3 = IDENTITY;
Gfx Armadillo_model1_Gfx[] = {
#include "assets/levelGroup/Armadillo/model1/model1.gfx.inc.c"
};
Vtx Armadillo_model2_Vtx[] = {
#include "assets/levelGroup/Armadillo/model2/model2.vtx.inc.c"
};
Mtx Armadillo_IMtx4 = IDENTITY;
Gfx Armadillo_model2_Gfx[] = {
#include "assets/levelGroup/Armadillo/model2/model2.gfx.inc.c"
};
Vec3f Armadillo_unkCol1_ColV[] = {
#include "assets/levelGroup/Armadillo/unkCol1/unkCol1.colV.inc.c"
};
Vec3w Armadillo_unkCol1_ColT[] = {
#include "assets/levelGroup/Armadillo/unkCol1/unkCol1.colT.inc.c"
};
Rect3D Armadillo_unkCol1_ColS = {
#include "assets/levelGroup/Armadillo/unkCol1/unkCol1.colS.inc.c"
};
ModelCollision Armadillo_unkCol1_ColH = {
ARRAY_COUNT(Armadillo_unkCol1_ColV), ARRAY_COUNT(Armadillo_unkCol1_ColT), Armadillo_unkCol1_ColV, Armadillo_unkCol1_ColT, &Armadillo_unkCol1_ColS
};
Vec3f Armadillo_unkCol2_ColV[] = {
#include "assets/levelGroup/Armadillo/unkCol2/unkCol2.colV.inc.c"
};
Vec3w Armadillo_unkCol2_ColT[] = {
#include "assets/levelGroup/Armadillo/unkCol2/unkCol2.colT.inc.c"
};
Rect3D Armadillo_unkCol2_ColS = {
#include "assets/levelGroup/Armadillo/unkCol2/unkCol2.colS.inc.c"
};
ModelCollision Armadillo_unkCol2_ColH = {
ARRAY_COUNT(Armadillo_unkCol2_ColV), ARRAY_COUNT(Armadillo_unkCol2_ColT), Armadillo_unkCol2_ColV, Armadillo_unkCol2_ColT, &Armadillo_unkCol2_ColS
};
s32 Armadillo_alignment2[] = {0,0,0};
Mtx Armadillo_IMtx5 = IDENTITY;
Lights1 Armadillo_adScope2_Light =
#include "assets/levelGroup/Armadillo/adScope2/adScope2.light.inc.c"
Vtx Armadillo_a_model1_Vtx[] = {
#include "assets/levelGroup/Armadillo/a_model1/a_model1.vtx.inc.c"
};
Mtx Armadillo_IMtx6 = IDENTITY;
unsigned char Armadillo_Pad1[] = FILEPAD;
unsigned char Armadillo_skin_ci8_PNG[] = {
#include "build/assets/levelGroup/Armadillo/img/skin.ci8.png.inc.c"
};
unsigned char Armadillo_Pad2[] = FILEPAD;
unsigned char Armadillo_skin_ci8_PAL[] = {
#include "build/assets/levelGroup/Armadillo/img/skin.ci8.pal.inc.c"
};
unsigned char Armadillo_Pad3[] = FILEPAD;
unsigned char Armadillo_shell_ci8_PNG[] = {
#include "build/assets/levelGroup/Armadillo/img/shell.ci8.png.inc.c"
};
unsigned char Armadillo_Pad4[] = FILEPAD;
unsigned char Armadillo_shell_ci8_PAL[] = {
#include "build/assets/levelGroup/Armadillo/img/shell.ci8.pal.inc.c"
};
Gfx Armadillo_a_model1_Gfx[] = {
#include "assets/levelGroup/Armadillo/a_model1/a_model1.gfx.inc.c"
};
Vtx Armadillo_a_model2_Vtx[] = {
#include "assets/levelGroup/Armadillo/a_model2/a_model2.vtx.inc.c"
};
Mtx Armadillo_IMtx7 = IDENTITY;
Gfx Armadillo_a_model2_Gfx[] = {
#include "assets/levelGroup/Armadillo/a_model2/a_model2.gfx.inc.c"
};
Vtx Armadillo_a_model3_Vtx[] = {
#include "assets/levelGroup/Armadillo/a_model3/a_model3.vtx.inc.c"
};
Mtx Armadillo_IMtx8 = IDENTITY;
Gfx Armadillo_a_model3_Gfx[] = {
#include "assets/levelGroup/Armadillo/a_model3/a_model3.gfx.inc.c"
};
Vtx Armadillo_a_model4_Vtx[] = {
#include "assets/levelGroup/Armadillo/a_model4/a_model4.vtx.inc.c"
};
Mtx Armadillo_IMtx9 = IDENTITY;
Gfx Armadillo_a_model4_Gfx[] = {
#include "assets/levelGroup/Armadillo/a_model4/a_model4.gfx.inc.c"
};
Vtx Armadillo_a_model5_Vtx[] = {
#include "assets/levelGroup/Armadillo/a_model5/a_model5.vtx.inc.c"
};
Mtx Armadillo_IMtx10 = IDENTITY;
Gfx Armadillo_a_model5_Gfx[] = {
#include "assets/levelGroup/Armadillo/a_model5/a_model5.gfx.inc.c"
};
Vtx Armadillo_a_model6_Vtx[] = {
#include "assets/levelGroup/Armadillo/a_model6/a_model6.vtx.inc.c"
};
Mtx Armadillo_IMtx11 = IDENTITY;
Gfx Armadillo_a_model6_Gfx[] = {
#include "assets/levelGroup/Armadillo/a_model6/a_model6.gfx.inc.c"
};
Vtx Armadillo_a_model7_Vtx[] = {
#include "assets/levelGroup/Armadillo/a_model7/a_model7.vtx.inc.c"
};
Mtx Armadillo_IMtx12 = IDENTITY;
unsigned char Armadillo_Pad5[] = FILEPAD;
unsigned char Armadillo_face_ci8_PNG[] = {
#include "build/assets/levelGroup/Armadillo/img/face.ci8.png.inc.c"
};
unsigned char Armadillo_Pad6[] = FILEPAD;
unsigned char Armadillo_face_ci8_PAL[] = {
#include "build/assets/levelGroup/Armadillo/img/face.ci8.pal.inc.c"
};
unsigned char Armadillo_Pad7[] = FILEPAD;
unsigned char Armadillo_skin2_ci8_PNG[] = {
#include "build/assets/levelGroup/Armadillo/img/skin2.ci8.png.inc.c"
};
unsigned char Armadillo_Pad8[] = FILEPAD;
unsigned char Armadillo_skin2_ci8_PAL[] = {
#include "build/assets/levelGroup/Armadillo/img/skin2.ci8.pal.inc.c"
};
unsigned char Armadillo_Pad9[] = FILEPAD;
unsigned char Armadillo_shineThing_ci8_PNG[] = {
#include "build/assets/levelGroup/Armadillo/img/shineThing.ci8.png.inc.c"
};
unsigned char Armadillo_Pad10[] = FILEPAD;
unsigned char Armadillo_shineThing_ci8_PAL[] = {
#include "build/assets/levelGroup/Armadillo/img/shineThing.ci8.pal.inc.c"
};
Gfx Armadillo_a_model7_Gfx[] = {
#include "assets/levelGroup/Armadillo/a_model7/a_model7.gfx.inc.c"
};
Vtx Armadillo_a_model8_Vtx[] = {
#include "assets/levelGroup/Armadillo/a_model8/a_model8.vtx.inc.c"
};
Mtx Armadillo_IMtx13 = IDENTITY;
unsigned char Armadillo_Pad11[] = FILEPAD;
unsigned char Armadillo_foot_ci8_PNG[] = {
#include "build/assets/levelGroup/Armadillo/img/foot.ci8.png.inc.c"
};
unsigned char Armadillo_Pad12[] = FILEPAD;
unsigned char Armadillo_foot_ci8_PAL[] = {
#include "build/assets/levelGroup/Armadillo/img/foot.ci8.pal.inc.c"
};
Gfx Armadillo_a_model8_Gfx[] = {
#include "assets/levelGroup/Armadillo/a_model8/a_model8.gfx.inc.c"
};
Vtx Armadillo_a_model9_Vtx[] = {
#include "assets/levelGroup/Armadillo/a_model9/a_model9.vtx.inc.c"
};
Mtx Armadillo_IMtx14 = IDENTITY;
unsigned char Armadillo_Pad13[] = FILEPAD;
unsigned char Armadillo_skin2Compressed_ci4_PNG[] = {
#include "build/assets/levelGroup/Armadillo/img/skin2Compressed.ci4.png.inc.c"
};
unsigned char Armadillo_Pad14[] = FILEPAD;
unsigned char Armadillo_skin2Compressed_ci4_PAL[] = {
#include "build/assets/levelGroup/Armadillo/img/skin2Compressed.ci4.pal.inc.c"
};
Gfx Armadillo_a_model9_Gfx[] = {
#include "assets/levelGroup/Armadillo/a_model9/a_model9.gfx.inc.c"
};
Vtx Armadillo_a_model10_Vtx[] = {
#include "assets/levelGroup/Armadillo/a_model10/a_model10.vtx.inc.c"
};
Mtx Armadillo_IMtx15 = IDENTITY;
Gfx Armadillo_a_model10_Gfx[] = {
#include "assets/levelGroup/Armadillo/a_model10/a_model10.gfx.inc.c"
};
Vtx Armadillo_a_model11_Vtx[] = {
#include "assets/levelGroup/Armadillo/a_model11/a_model11.vtx.inc.c"
};
Mtx Armadillo_IMtx16 = IDENTITY;
Gfx Armadillo_a_model11_Gfx[] = {
#include "assets/levelGroup/Armadillo/a_model11/a_model11.gfx.inc.c"
};
Vtx Armadillo_a_model12_Vtx[] = {
#include "assets/levelGroup/Armadillo/a_model12/a_model12.vtx.inc.c"
};
Mtx Armadillo_IMtx17 = IDENTITY;
Gfx Armadillo_a_model12_Gfx[] = {
#include "assets/levelGroup/Armadillo/a_model12/a_model12.gfx.inc.c"
};
Vtx Armadillo_a_model13_Vtx[] = {
#include "assets/levelGroup/Armadillo/a_model13/a_model13.vtx.inc.c"
};
Mtx Armadillo_IMtx18 = IDENTITY;
Gfx Armadillo_a_model13_Gfx[] = {
#include "assets/levelGroup/Armadillo/a_model13/a_model13.gfx.inc.c"
};
Vtx Armadillo_a_model14_Vtx[] = {
#include "assets/levelGroup/Armadillo/a_model14/a_model14.vtx.inc.c"
};
Mtx Armadillo_IMtx19 = IDENTITY;
Gfx Armadillo_a_model14_Gfx[] = {
#include "assets/levelGroup/Armadillo/a_model14/a_model14.gfx.inc.c"
};
Vtx Armadillo_a_model15_Vtx[] = {
#include "assets/levelGroup/Armadillo/a_model15/a_model15.vtx.inc.c"
};
Mtx Armadillo_IMtx20 = IDENTITY;
Gfx Armadillo_a_model15_Gfx[] = {
#include "assets/levelGroup/Armadillo/a_model15/a_model15.gfx.inc.c"
};
Vtx Armadillo_a_model16_Vtx[] = {
#include "assets/levelGroup/Armadillo/a_model16/a_model16.vtx.inc.c"
};
Mtx Armadillo_IMtx21 = IDENTITY;
Gfx Armadillo_a_model16_Gfx[] = {
#include "assets/levelGroup/Armadillo/a_model16/a_model16.gfx.inc.c"
};
Vtx Armadillo_a_model17_Vtx[] = {
#include "assets/levelGroup/Armadillo/a_model17/a_model17.vtx.inc.c"
};
Mtx Armadillo_IMtx22 = IDENTITY;
Gfx Armadillo_a_model17_Gfx[] = {
#include "assets/levelGroup/Armadillo/a_model17/a_model17.gfx.inc.c"
};
Vtx Armadillo_a_model18_Vtx[] = {
#include "assets/levelGroup/Armadillo/a_model18/a_model18.vtx.inc.c"
};
Mtx Armadillo_IMtx23 = IDENTITY;
Gfx Armadillo_a_model18_Gfx[] = {
#include "assets/levelGroup/Armadillo/a_model18/a_model18.gfx.inc.c"
};
Vtx Armadillo_a_model19_Vtx[] = {
#include "assets/levelGroup/Armadillo/a_model19/a_model19.vtx.inc.c"
};
Mtx Armadillo_IMtx24 = IDENTITY;
Gfx Armadillo_a_model19_Gfx[] = {
#include "assets/levelGroup/Armadillo/a_model19/a_model19.gfx.inc.c"
};
Vtx Armadillo_a_model20_Vtx[] = {
#include "assets/levelGroup/Armadillo/a_model20/a_model20.vtx.inc.c"
};
Mtx Armadillo_IMtx25 = IDENTITY;
Gfx Armadillo_a_model20_Gfx[] = {
#include "assets/levelGroup/Armadillo/a_model20/a_model20.gfx.inc.c"
};
Mtx Armadillo_IMtx26 = IDENTITY;
Gfx Armadillo_a_model21_Gfx[] = {
#include "assets/levelGroup/Armadillo/a_model21/a_model21.gfx.inc.c"
};
Anim Armadillo_unk1Header_Animh = {
#include "assets/levelGroup/Armadillo/anim/unk1Header.animH.inc.c"
};
Mtx Armadillo_unk1_Animarr[25][20] = {
#include "assets/levelGroup/Armadillo/anim/unk1.animArr.inc.c"
};
Anim Armadillo_unk2Header_Animh = {
#include "assets/levelGroup/Armadillo/anim/unk2Header.animH.inc.c"
};
Mtx Armadillo_unk2_Animarr[21][20] = {
#include "assets/levelGroup/Armadillo/anim/unk2.animArr.inc.c"
};


AnimPointer Armadillo_unk1Pointers_Animp[1] = {
	{&Armadillo_unk1Header_Animh.frames, &Armadillo_unk1Header_Animh.objects, &Armadillo_unk1_Animarr[0][0]}
};


AnimPointer Armadillo_unk2Pointers_Animp[1] = {
	{&Armadillo_unk2Header_Animh.frames, &Armadillo_unk2Header_Animh.objects, &Armadillo_unk2_Animarr[0][0]}
};
Anim Armadillo_unk3Header_Animh = {
#include "assets/levelGroup/Armadillo/anim/unk3Header.animH.inc.c"
};
Mtx Armadillo_unk3_Animarr[10][20] = {
#include "assets/levelGroup/Armadillo/anim/unk3.animArr.inc.c"
};


AnimPointer Armadillo_unk3Pointers_Animp[1] = {
	{&Armadillo_unk3Header_Animh.frames, &Armadillo_unk3Header_Animh.objects, &Armadillo_unk3_Animarr[0][0]}
};
Anim Armadillo_unk4Header_Animh = {
#include "assets/levelGroup/Armadillo/anim/unk4Header.animH.inc.c"
};
Mtx Armadillo_unk4_Animarr[10][20] = {
#include "assets/levelGroup/Armadillo/anim/unk4.animArr.inc.c"
};


AnimPointer Armadillo_unk4Pointers_Animp[1] = {
	{&Armadillo_unk4Header_Animh.frames, &Armadillo_unk4Header_Animh.objects, &Armadillo_unk4_Animarr[0][0]}
};
Anim Armadillo_unk5Header_Animh = {
#include "assets/levelGroup/Armadillo/anim/unk5Header.animH.inc.c"
};
Mtx Armadillo_unk5_Animarr[15][20] = {
#include "assets/levelGroup/Armadillo/anim/unk5.animArr.inc.c"
};


AnimPointer Armadillo_unk5Pointers_Animp[1] = {
	{&Armadillo_unk5Header_Animh.frames, &Armadillo_unk5Header_Animh.objects, &Armadillo_unk5_Animarr[0][0]}
};
Anim Armadillo_unk6Header_Animh = {
#include "assets/levelGroup/Armadillo/anim/unk6Header.animH.inc.c"
};
Mtx Armadillo_unk6_Animarr[15][20] = {
#include "assets/levelGroup/Armadillo/anim/unk6.animArr.inc.c"
};


AnimPointer Armadillo_unk6Pointers_Animp[1] = {
	{&Armadillo_unk6Header_Animh.frames, &Armadillo_unk6Header_Animh.objects, &Armadillo_unk6_Animarr[0][0]}
};
