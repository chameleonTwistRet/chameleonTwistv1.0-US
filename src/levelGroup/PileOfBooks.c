#include "PileOfBooks.h"
Mtx PileOfBooks_IMtx1 = IDENTITY;

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
extern ModelCollision PileOfBooks_unkCol2_ColH;
extern Gfx Global_KLDoor_Gfx[];
extern ModelCollision Global_exitShadowWest_ColH;
extern Gfx Global_sandPit_Gfx[];
extern ModelCollision PileOfBooks_unkCol1_ColH;
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
extern Gfx PileOfBooks_model1_Gfx[];
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
extern Gfx PileOfBooks_model2_Gfx[];
extern ModelCollision Global_exitShadowEast_ColH;
extern ModelCollision Global_pole_ColH;
extern Gfx Global_ALBLExit_Gfx[];

StageModel PileOfBooks_stageModels[] = {
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
	{      PileOfBooks_model1_Gfx,      &PileOfBooks_unkCol1_ColH},
	{      PileOfBooks_model2_Gfx,      &PileOfBooks_unkCol2_ColH},
	{             Global_pole_Gfx,              &Global_pole_ColH}
};

extern ModelCollision Global_unk1_ColH;

rabObject PileOfBooks_rabObjects[] = {
	{0, 100.0, 100.0, 100.0, &Global_unk1_ColH},
	{0, 100.0, 100.0, 100.0, &Global_unk1_ColH}
};


RoomObject PileOfBooks_roomMulti_objects[] = {
	{{0.0,    0.0, 3300.0}, {1.0, 1.0, 1.0}, ROT_NONE, 0, OBJU_NORMAL, OBJM_FALLING_FLAG,    0.0, -20000.0,  3300.0, 0.0,         15, 300, -2,    0, 0, 0,  7, -1, -1, 30, NULL, NULL, NULL, 0, 7,  4, 4, 0, -1, 0, 0},
	{{0.0,    0.0, 3100.0}, {1.0, 1.0, 1.0}, ROT_NONE, 0, OBJU_NORMAL, OBJM_FALLING_FLAG,    0.0, -20000.0,  3100.0, 0.0,         20, 300, -2,    0, 0, 0,  7, -1, -1, 30, NULL, NULL, NULL, 0, 7,  4, 4, 0, -1, 0, 0},
	{{0.0,    0.0, 2900.0}, {1.0, 1.0, 1.0}, ROT_NONE, 0, OBJU_NORMAL, OBJM_FALLING_FLAG,    0.0, -20000.0,  2900.0, 0.0,         25, 300, -2,    0, 0, 0,  7, -1, -1, 30, NULL, NULL, NULL, 0, 7,  4, 4, 0, -1, 0, 0},
	{{0.0,    0.0, 2700.0}, {1.0, 1.0, 1.0}, ROT_NONE, 0, OBJU_NORMAL, OBJM_FALLING_FLAG,    0.0, -20000.0,  2700.0, 0.0,         30, 300, -2,    0, 0, 0,  7, -1, -1, 30, NULL, NULL, NULL, 0, 7,  4, 4, 0, -1, 0, 0},
	{{0.0,    0.0, 2500.0}, {1.0, 1.0, 1.0}, ROT_NONE, 0, OBJU_NORMAL, OBJM_FALLING_FLAG,    0.0, -20000.0,  2500.0, 0.0,         35, 300, -2,    0, 0, 0,  7, -1, -1, 30, NULL, NULL, NULL, 0, 7,  4, 4, 0, -1, 0, 0},
	{{0.0,    0.0, 2300.0}, {1.0, 1.0, 1.0}, ROT_NONE, 0, OBJU_NORMAL, OBJM_FALLING_FLAG,    0.0, -20000.0,  2300.0, 0.0,         40, 300, -2,    0, 0, 0,  7, -1, -1, 30, NULL, NULL, NULL, 0, 7,  4, 4, 0, -1, 0, 0},
	{{0.0,    0.0, 2100.0}, {1.0, 1.0, 1.0}, ROT_NONE, 0, OBJU_NORMAL, OBJM_FALLING_FLAG,    0.0, -20000.0,  2100.0, 0.0,         45, 300, -2,    0, 0, 0,  7, -1, -1, 30, NULL, NULL, NULL, 0, 7,  4, 4, 0, -1, 0, 0},
	{{0.0,    0.0,    0.0}, {1.0, 1.0, 1.0}, ROT_NONE, 0, OBJU_NORMAL,       OBJM_NORMAL,    0.0,      0.0,     0.0, 0.0,       NULL,   0,  0,    0, 0, 0, 35, -1, -1, -1, NULL, NULL, NULL, 0, 0,  4, 4, 0, -1, 0, 0},
	{{0.0,    0.0,    0.0}, {1.0, 1.0, 1.0}, ROT_NONE, 0, OBJU_NORMAL,       OBJM_NORMAL, 1400.0,   1000.0, -1000.0, 0.0,       NULL,  90,  0, 1000, 0, 0, 36, -1, 30, -1, NULL, NULL, NULL, 0, 3,  4, 4, 0, -1, 0, 0},
	{{0.0, 1000.0,    0.0}, {5.0, 0.0, 5.0}, ROT_NONE, 0, OBJU_NORMAL,       OBJM_NORMAL,    0.0,      0.0,     0.0, 0.0,       NULL,   0,  0,    0, 0, 0, 36, -1, -1, -1, NULL, NULL, NULL, 0, 0,  0, 4, 0, -1, 0, 0},
	{{0.0,    0.0, 3600.0}, {1.0, 1.0, 1.0}, ROT_NONE, 0, OBJU_NORMAL,       OBJM_NORMAL,    0.0,      0.0,     0.0, 0.0,       NULL,   0,  0,    0, 0, 0, 26, -1, -1, -1, NULL, NULL, NULL, 0, 7,  4, 4, 0, -1, 0, 0},
	{{0.0,    0.0, 3600.0}, {1.0, 1.0, 1.0}, ROT_NONE, 0, OBJU_NORMAL,       OBJM_NORMAL,    0.0,      0.0,     0.0, 0.0,       NULL,   0,  0,    0, 0, 0, 25, -1, -1, -1, NULL, NULL, NULL, 0, 0,  4, 4, 0, -1, 0, 0},
	{{0.0,    0.0, 3600.0}, {1.0, 1.0, 1.0}, ROT_NONE, 0,   OBJU_ZONE,       OBJM_NORMAL,  400.0,    400.0,     0.0, 0.0, ZDIR_SOUTH,   1,  0,    0, 0, 0,  0, -1, -1, -1, NULL, NULL, NULL, 0, 7, -1, 1, 0, -1, 0, 0},
	{{0.0,    0.0, 3600.0}, {4.0, 4.0, 4.0}, ROT_NONE, 0, OBJU_NORMAL,       OBJM_NORMAL, 1400.0,   1000.0, -1000.0, 0.0,       NULL,  90,  0, 1000, 0, 0,  0, -1, -1, -1, NULL, NULL, NULL, 0, 1,  0, 0, 0, -1, 0, 0},
	NULL_OBJECT
};


RoomActor PileOfBooks_room0_actors[] = {
	{PILE_OF_BOOKS, {0.0, 0.0, 0.0}, 270.0, -10000.0, 10000.0, 0.0, 0.0, -10000.0, 10000.0, 0, 2250000.0, 7.0, 3.0, 60.0, 0.0, 0.0, 0.0, 0.0, 4.0, 4.0, 12.0, 24.0},
	NULL_ACTOR
};


s32 PileOfBooks_spriteLib[2][16] = {
{         SPRITE_FIRE,
        SPRITE_KETTLE,
         SPRITE_PLATE,
  SPRITE_BALL_NUMBERS,
          SPRITE_BALL,
        SPRITE_CANDLE,
    SPRITE_CANDLE_LIT,
        SPRITE_UNK54}
};


RoomInstance PileOfBooks_room_instances[] = {
	{PileOfBooks_roomMulti_objects, PileOfBooks_room0_actors, NULL, NULL, 0, 1, 0, 0, -1, 0, 0.0, 15, -400.0, 200.0, 0.0, 0.0, 0.0, 65.0, 0.0, {0,  0,  0}, {0,  0,  0}, {0,  0,  0}, {0,  0,  0}, -1500.0},
	NULL_ROOM
};


s32 PileOfBooks_map[1][3] = {
	{-1, 0, -1}
};


StageMapData PileOfBooks_map_data = {
3, 1, PileOfBooks_room_instances, PileOfBooks_map
};


SpriteActor PileOfBooks_roomUnk_sprites[] = {
	NULL_SPRITE
};


RoomInstance PileOfBooks_ext_room_instances[] = {
	NULL_ROOM
};


LevelScope PileOfBooks_scope = {
{0, 0, 0}, 255, 10000, 60
};


StageData PileOfBooks_stageData = {
               &PileOfBooks_map_data,
                                NULL,
             PileOfBooks_stageModels,
ARRAY_COUNT(PileOfBooks_stageModels),
                                   0,
              PileOfBooks_rabObjects,
                             0x20000,
               PileOfBooks_spriteLib,
                  &PileOfBooks_scope
};
s32 PileOfBooks_alignment1[] = {0,0};
Mtx PileOfBooks_IMtx2 = IDENTITY;
Lights1 PileOfBooks_pobScope_Light =
#include "assets/levelGroup/PileOfBooks/pobScope/pobScope.light.inc.c"
Vtx PileOfBooks_model1_Vtx[] = {
#include "assets/levelGroup/PileOfBooks/model1/model1.vtx.inc.c"
};
Mtx PileOfBooks_IMtx3 = IDENTITY;
Gfx PileOfBooks_model1_Gfx[] = {
#include "assets/levelGroup/PileOfBooks/model1/model1.gfx.inc.c"
};
Vtx PileOfBooks_model2_Vtx[] = {
#include "assets/levelGroup/PileOfBooks/model2/model2.vtx.inc.c"
};
Mtx PileOfBooks_IMtx4 = IDENTITY;
Gfx PileOfBooks_model2_Gfx[] = {
#include "assets/levelGroup/PileOfBooks/model2/model2.gfx.inc.c"
};
Vec3f PileOfBooks_unkCol1_ColV[] = {
#include "assets/levelGroup/PileOfBooks/unkCol1/unkCol1.colV.inc.c"
};
Vec3w PileOfBooks_unkCol1_ColT[] = {
#include "assets/levelGroup/PileOfBooks/unkCol1/unkCol1.colT.inc.c"
};
Rect3D PileOfBooks_unkCol1_ColS = {
#include "assets/levelGroup/PileOfBooks/unkCol1/unkCol1.colS.inc.c"
};
ModelCollision PileOfBooks_unkCol1_ColH = {
ARRAY_COUNT(PileOfBooks_unkCol1_ColV), ARRAY_COUNT(PileOfBooks_unkCol1_ColT), PileOfBooks_unkCol1_ColV, PileOfBooks_unkCol1_ColT, &PileOfBooks_unkCol1_ColS
};
Vec3f PileOfBooks_unkCol2_ColV[] = {
#include "assets/levelGroup/PileOfBooks/unkCol2/unkCol2.colV.inc.c"
};
Vec3w PileOfBooks_unkCol2_ColT[] = {
#include "assets/levelGroup/PileOfBooks/unkCol2/unkCol2.colT.inc.c"
};
Rect3D PileOfBooks_unkCol2_ColS = {
#include "assets/levelGroup/PileOfBooks/unkCol2/unkCol2.colS.inc.c"
};
ModelCollision PileOfBooks_unkCol2_ColH = {
ARRAY_COUNT(PileOfBooks_unkCol2_ColV), ARRAY_COUNT(PileOfBooks_unkCol2_ColT), PileOfBooks_unkCol2_ColV, PileOfBooks_unkCol2_ColT, &PileOfBooks_unkCol2_ColS
};
s32 PileOfBooks_alignment2[] = {0,0};
Mtx PileOfBooks_IMtx5 = IDENTITY;
Lights1 PileOfBooks_pobScope2_Light =
#include "assets/levelGroup/PileOfBooks/pobScope2/pobScope2.light.inc.c"
Vtx PileOfBooks_a_model1_Vtx[] = {
#include "assets/levelGroup/PileOfBooks/a_model1/a_model1.vtx.inc.c"
};
Mtx PileOfBooks_IMtx6 = IDENTITY;
unsigned char PileOfBooks_Pad1[] = FILEPAD;
unsigned char PileOfBooks_cTbarrel_ci4_PNG[] = {
#include "build/assets/levelGroup/PileOfBooks/img/cTbarrel.ci4.png.inc.c"
};
unsigned char PileOfBooks_Pad2[] = FILEPAD;
unsigned char PileOfBooks_cTbarrel_ci4_PAL[] = {
#include "build/assets/levelGroup/PileOfBooks/img/cTbarrel.ci4.pal.inc.c"
};
unsigned char PileOfBooks_Pad3[] = FILEPAD;
unsigned char PileOfBooks_barrelSide_ci4_PNG[] = {
#include "build/assets/levelGroup/PileOfBooks/img/barrelSide.ci4.png.inc.c"
};
unsigned char PileOfBooks_Pad4[] = FILEPAD;
unsigned char PileOfBooks_barrelSide_ci4_PAL[] = {
#include "build/assets/levelGroup/PileOfBooks/img/barrelSide.ci4.pal.inc.c"
};
Gfx PileOfBooks_a_model1_Gfx[] = {
#include "assets/levelGroup/PileOfBooks/a_model1/a_model1.gfx.inc.c"
};
Vtx PileOfBooks_a_model2_Vtx[] = {
#include "assets/levelGroup/PileOfBooks/a_model2/a_model2.vtx.inc.c"
};
Mtx PileOfBooks_IMtx7 = IDENTITY;
Gfx PileOfBooks_a_model2_Gfx[] = {
#include "assets/levelGroup/PileOfBooks/a_model2/a_model2.gfx.inc.c"
};
Vtx PileOfBooks_a_model3_Vtx[] = {
#include "assets/levelGroup/PileOfBooks/a_model3/a_model3.vtx.inc.c"
};
Mtx PileOfBooks_IMtx8 = IDENTITY;
Gfx PileOfBooks_a_model3_Gfx[] = {
#include "assets/levelGroup/PileOfBooks/a_model3/a_model3.gfx.inc.c"
};
Vtx PileOfBooks_a_model4_Vtx[] = {
#include "assets/levelGroup/PileOfBooks/a_model4/a_model4.vtx.inc.c"
};
Mtx PileOfBooks_IMtx9 = IDENTITY;
unsigned char PileOfBooks_Pad5[] = FILEPAD;
unsigned char PileOfBooks_painting_ci4_PNG[] = {
#include "build/assets/levelGroup/PileOfBooks/img/painting.ci4.png.inc.c"
};
unsigned char PileOfBooks_Pad6[] = FILEPAD;
unsigned char PileOfBooks_painting_ci4_PAL[] = {
#include "build/assets/levelGroup/PileOfBooks/img/painting.ci4.pal.inc.c"
};
unsigned char PileOfBooks_Pad7[] = FILEPAD;
unsigned char PileOfBooks_color_ci4_PNG[] = {
#include "build/assets/levelGroup/PileOfBooks/img/color.ci4.png.inc.c"
};
unsigned char PileOfBooks_Pad8[] = FILEPAD;
unsigned char PileOfBooks_color_ci4_PAL[] = {
#include "build/assets/levelGroup/PileOfBooks/img/color.ci4.pal.inc.c"
};
Gfx PileOfBooks_a_model4_Gfx[] = {
#include "assets/levelGroup/PileOfBooks/a_model4/a_model4.gfx.inc.c"
};
Vtx PileOfBooks_a_model5_Vtx[] = {
#include "assets/levelGroup/PileOfBooks/a_model5/a_model5.vtx.inc.c"
};
Mtx PileOfBooks_IMtx10 = IDENTITY;
unsigned char PileOfBooks_Pad9[] = FILEPAD;
unsigned char PileOfBooks_crate_ci4_PNG[] = {
#include "build/assets/levelGroup/PileOfBooks/img/crate.ci4.png.inc.c"
};
unsigned char PileOfBooks_Pad10[] = FILEPAD;
unsigned char PileOfBooks_crate_ci4_PAL[] = {
#include "build/assets/levelGroup/PileOfBooks/img/crate.ci4.pal.inc.c"
};
unsigned char PileOfBooks_Pad11[] = FILEPAD;
unsigned char PileOfBooks_wood_ci4_PNG[] = {
#include "build/assets/levelGroup/PileOfBooks/img/wood.ci4.png.inc.c"
};
unsigned char PileOfBooks_Pad12[] = FILEPAD;
unsigned char PileOfBooks_wood_ci4_PAL[] = {
#include "build/assets/levelGroup/PileOfBooks/img/wood.ci4.pal.inc.c"
};
Gfx PileOfBooks_a_model5_Gfx[] = {
#include "assets/levelGroup/PileOfBooks/a_model5/a_model5.gfx.inc.c"
};
Vtx PileOfBooks_a_model6_Vtx[] = {
#include "assets/levelGroup/PileOfBooks/a_model6/a_model6.vtx.inc.c"
};
Mtx PileOfBooks_IMtx11 = IDENTITY;
Gfx PileOfBooks_a_model6_Gfx[] = {
#include "assets/levelGroup/PileOfBooks/a_model6/a_model6.gfx.inc.c"
};
Vtx PileOfBooks_a_model7_Vtx[] = {
#include "assets/levelGroup/PileOfBooks/a_model7/a_model7.vtx.inc.c"
};
Mtx PileOfBooks_IMtx12 = IDENTITY;
Gfx PileOfBooks_a_model7_Gfx[] = {
#include "assets/levelGroup/PileOfBooks/a_model7/a_model7.gfx.inc.c"
};
Vtx PileOfBooks_a_model8_Vtx[] = {
#include "assets/levelGroup/PileOfBooks/a_model8/a_model8.vtx.inc.c"
};
Mtx PileOfBooks_IMtx13 = IDENTITY;
Gfx PileOfBooks_a_model8_Gfx[] = {
#include "assets/levelGroup/PileOfBooks/a_model8/a_model8.gfx.inc.c"
};
Vtx PileOfBooks_a_model9_Vtx[] = {
#include "assets/levelGroup/PileOfBooks/a_model9/a_model9.vtx.inc.c"
};
Mtx PileOfBooks_IMtx14 = IDENTITY;
unsigned char PileOfBooks_Pad13[] = FILEPAD;
unsigned char PileOfBooks_drawer_ci4_PNG[] = {
#include "build/assets/levelGroup/PileOfBooks/img/drawer.ci4.png.inc.c"
};
unsigned char PileOfBooks_Pad14[] = FILEPAD;
unsigned char PileOfBooks_drawer_ci4_PAL[] = {
#include "build/assets/levelGroup/PileOfBooks/img/drawer.ci4.pal.inc.c"
};
Gfx PileOfBooks_a_model9_Gfx[] = {
#include "assets/levelGroup/PileOfBooks/a_model9/a_model9.gfx.inc.c"
};
Vtx PileOfBooks_a_model19_Vtx[] = {
#include "assets/levelGroup/PileOfBooks/a_model19/a_model19.vtx.inc.c"
};
Mtx PileOfBooks_IMtx15 = IDENTITY;
Gfx PileOfBooks_a_model19_Gfx[] = {
#include "assets/levelGroup/PileOfBooks/a_model19/a_model19.gfx.inc.c"
};
Vtx PileOfBooks_a_model10_Vtx[] = {
#include "assets/levelGroup/PileOfBooks/a_model10/a_model10.vtx.inc.c"
};
Mtx PileOfBooks_IMtx16 = IDENTITY;
unsigned char PileOfBooks_Pad15[] = FILEPAD;
unsigned char PileOfBooks_color2_ci4_PNG[] = {
#include "build/assets/levelGroup/PileOfBooks/img/color2.ci4.png.inc.c"
};
unsigned char PileOfBooks_Pad16[] = FILEPAD;
unsigned char PileOfBooks_color2_ci4_PAL[] = {
#include "build/assets/levelGroup/PileOfBooks/img/color2.ci4.pal.inc.c"
};
unsigned char PileOfBooks_Pad17[] = FILEPAD;
unsigned char PileOfBooks_scroll_ci4_PNG[] = {
#include "build/assets/levelGroup/PileOfBooks/img/scroll.ci4.png.inc.c"
};
unsigned char PileOfBooks_Pad18[] = FILEPAD;
unsigned char PileOfBooks_scroll_ci4_PAL[] = {
#include "build/assets/levelGroup/PileOfBooks/img/scroll.ci4.pal.inc.c"
};
Gfx PileOfBooks_a_model10_Gfx[] = {
#include "assets/levelGroup/PileOfBooks/a_model10/a_model10.gfx.inc.c"
};
Vtx PileOfBooks_a_model11_Vtx[] = {
#include "assets/levelGroup/PileOfBooks/a_model11/a_model11.vtx.inc.c"
};
Mtx PileOfBooks_IMtx17 = IDENTITY;
Gfx PileOfBooks_a_model11_Gfx[] = {
#include "assets/levelGroup/PileOfBooks/a_model11/a_model11.gfx.inc.c"
};
Vtx PileOfBooks_a_model12_Vtx[] = {
#include "assets/levelGroup/PileOfBooks/a_model12/a_model12.vtx.inc.c"
};
Mtx PileOfBooks_IMtx18 = IDENTITY;
Gfx PileOfBooks_a_model12_Gfx[] = {
#include "assets/levelGroup/PileOfBooks/a_model12/a_model12.gfx.inc.c"
};
Vtx PileOfBooks_a_model13_Vtx[] = {
#include "assets/levelGroup/PileOfBooks/a_model13/a_model13.vtx.inc.c"
};
Mtx PileOfBooks_IMtx19 = IDENTITY;
Gfx PileOfBooks_a_model13_Gfx[] = {
#include "assets/levelGroup/PileOfBooks/a_model13/a_model13.gfx.inc.c"
};
Vtx PileOfBooks_a_model14_Vtx[] = {
#include "assets/levelGroup/PileOfBooks/a_model14/a_model14.vtx.inc.c"
};
Mtx PileOfBooks_IMtx20 = IDENTITY;
Gfx PileOfBooks_a_model14_Gfx[] = {
#include "assets/levelGroup/PileOfBooks/a_model14/a_model14.gfx.inc.c"
};
Mtx PileOfBooks_IMtx21 = IDENTITY;
Gfx PileOfBooks_a_model15_Gfx[] = {
#include "assets/levelGroup/PileOfBooks/a_model15/a_model15.gfx.inc.c"
};
Vtx PileOfBooks_a_model16_Vtx[] = {
#include "assets/levelGroup/PileOfBooks/a_model16/a_model16.vtx.inc.c"
};
Mtx PileOfBooks_IMtx22 = IDENTITY;
unsigned char PileOfBooks_Pad19[] = FILEPAD;
unsigned char PileOfBooks_sandal_ci8_PNG[] = {
#include "build/assets/levelGroup/PileOfBooks/img/sandal.ci8.png.inc.c"
};
unsigned char PileOfBooks_Pad20[] = FILEPAD;
unsigned char PileOfBooks_sandal_ci8_PAL[] = {
#include "build/assets/levelGroup/PileOfBooks/img/sandal.ci8.pal.inc.c"
};
unsigned char PileOfBooks_Pad21[] = FILEPAD;
unsigned char PileOfBooks_fireSpitter_face_ci8_PNG[] = {
#include "build/assets/levelGroup/PileOfBooks/img/fireSpitter_face.ci8.png.inc.c"
};
unsigned char PileOfBooks_Pad22[] = FILEPAD;
unsigned char PileOfBooks_fireSpitter_face_ci8_PAL[] = {
#include "build/assets/levelGroup/PileOfBooks/img/fireSpitter_face.ci8.pal.inc.c"
};
unsigned char PileOfBooks_Pad23[] = FILEPAD;
unsigned char PileOfBooks_fireSpitter_side_ci8_PNG[] = {
#include "build/assets/levelGroup/PileOfBooks/img/fireSpitter_side.ci8.png.inc.c"
};
unsigned char PileOfBooks_Pad24[] = FILEPAD;
unsigned char PileOfBooks_fireSpitter_side_ci8_PAL[] = {
#include "build/assets/levelGroup/PileOfBooks/img/fireSpitter_side.ci8.pal.inc.c"
};
Gfx PileOfBooks_a_model16_Gfx[] = {
#include "assets/levelGroup/PileOfBooks/a_model16/a_model16.gfx.inc.c"
};
Vtx PileOfBooks_a_model17_Vtx[] = {
#include "assets/levelGroup/PileOfBooks/a_model17/a_model17.vtx.inc.c"
};
Mtx PileOfBooks_IMtx23 = IDENTITY;
unsigned char PileOfBooks_Pad25[] = FILEPAD;
unsigned char PileOfBooks_thing_ci8_PNG[] = {
#include "build/assets/levelGroup/PileOfBooks/img/thing.ci8.png.inc.c"
};
unsigned char PileOfBooks_Pad26[] = FILEPAD;
unsigned char PileOfBooks_thing_ci8_PAL[] = {
#include "build/assets/levelGroup/PileOfBooks/img/thing.ci8.pal.inc.c"
};
Gfx PileOfBooks_a_model17_Gfx[] = {
#include "assets/levelGroup/PileOfBooks/a_model17/a_model17.gfx.inc.c"
};
Mtx PileOfBooks_IMtx24 = IDENTITY;
Gfx PileOfBooks_a_model18_Gfx[] = {
#include "assets/levelGroup/PileOfBooks/a_model18/a_model18.gfx.inc.c"
};
Anim PileOfBooks_unk1Header_Animh = {
#include "assets/levelGroup/PileOfBooks/anim/unk1Header.animH.inc.c"
};
Mtx PileOfBooks_unk1_Animarr[90][15] = {
#include "assets/levelGroup/PileOfBooks/anim/unk1.animArr.inc.c"
};


AnimPointer PileOfBooks_unk1Pointers_Animp[1] = {
	{&PileOfBooks_unk1Header_Animh.frames, &PileOfBooks_unk1Header_Animh.objects, &PileOfBooks_unk1_Animarr[0][0]}
};
Anim PileOfBooks_unk2Header_Animh = {
#include "assets/levelGroup/PileOfBooks/anim/unk2Header.animH.inc.c"
};
Mtx PileOfBooks_unk2_Animarr[100][15] = {
#include "assets/levelGroup/PileOfBooks/anim/unk2.animArr.inc.c"
};


AnimPointer PileOfBooks_unk2Pointers_Animp[1] = {
	{&PileOfBooks_unk2Header_Animh.frames, &PileOfBooks_unk2Header_Animh.objects, &PileOfBooks_unk2_Animarr[0][0]}
};
Anim PileOfBooks_unk3Header_Animh = {
#include "assets/levelGroup/PileOfBooks/anim/unk3Header.animH.inc.c"
};
Mtx PileOfBooks_unk3_Animarr[12][15] = {
#include "assets/levelGroup/PileOfBooks/anim/unk3.animArr.inc.c"
};


AnimPointer PileOfBooks_unk3Pointers_Animp[1] = {
	{&PileOfBooks_unk3Header_Animh.frames, &PileOfBooks_unk3Header_Animh.objects, &PileOfBooks_unk3_Animarr[0][0]}
};
Anim PileOfBooks_unk4Header_Animh = {
#include "assets/levelGroup/PileOfBooks/anim/unk4Header.animH.inc.c"
};
Mtx PileOfBooks_unk4_Animarr[40][15] = {
#include "assets/levelGroup/PileOfBooks/anim/unk4.animArr.inc.c"
};


AnimPointer PileOfBooks_unk4Pointers_Animp[1] = {
	{&PileOfBooks_unk4Header_Animh.frames, &PileOfBooks_unk4Header_Animh.objects, &PileOfBooks_unk4_Animarr[0][0]}
};
Anim PileOfBooks_unk5Header_Animh = {
#include "assets/levelGroup/PileOfBooks/anim/unk5Header.animH.inc.c"
};
Mtx PileOfBooks_unk5_Animarr[10][2] = {
#include "assets/levelGroup/PileOfBooks/anim/unk5.animArr.inc.c"
};


AnimPointer PileOfBooks_unk5Pointers_Animp[1] = {
	{&PileOfBooks_unk5Header_Animh.frames, &PileOfBooks_unk5Header_Animh.objects, &PileOfBooks_unk5_Animarr[0][0]}
};
