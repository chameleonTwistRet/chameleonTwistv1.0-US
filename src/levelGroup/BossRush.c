#include "BossRush.h"
Mtx BossRush_IMtx1 = IDENTITY;

extern Gfx Global_JLCaveDoor_Gfx[];
extern ModelCollision BossRush_unkCol1_ColH;
extern ModelCollision Global_BossBridge_ColH;
extern Gfx Global_JLCaveExit1_Gfx[];
extern ModelCollision Global_ALBLExit_ColH;
extern ModelCollision Global_exitShadowWest_ColH;
extern ModelCollision Global_JLCaveExit1_ColH;
extern Gfx Global_pole_Gfx[];
extern ModelCollision BossRush_unkCol3_ColH;
extern Gfx Global_ALPole_Gfx[];
extern ModelCollision Global_ALPole_ColH;
extern Gfx Global_BossBridge_Gfx[];
extern ModelCollision Global_BLMetalBridge_ColH;
extern ModelCollision Global_exitShadowNorth_ColH;
extern Gfx Global_JLCaveExit2_Gfx[];
extern Gfx Global_JLFxCamPillar_Gfx[];
extern ModelCollision Global_JLFxCamPillar_ColH;
extern Gfx Global_BLLava3_Gfx[];
extern Gfx Global_exitShadowNorth_Gfx[];
extern Gfx Global_ALBLDoor_Gfx[];
extern ModelCollision Global_KLDoor_ColH;
extern Gfx Global_BLLava8_Gfx[];
extern ModelCollision Global_pole_ColH;
extern Gfx Global_ALBLExit_Gfx[];
extern Gfx Global_BLDestructableTop_Gfx[];
extern Gfx Global_BLLava_Gfx[];
extern ModelCollision Global_BLLava5_ColH;
extern Gfx Global_BLLavaFloor_Gfx[];
extern Gfx Global_BLLava6_Gfx[];
extern Gfx Global_KLDoor_Gfx[];
extern Gfx Global_sandPit_Gfx[];
extern Gfx Global_exitShadowEast_Gfx[];
extern ModelCollision Global_trainingRoomLight_ColH;
extern Gfx Global_DCExit_Gfx[];
extern Gfx BossRush_model8_Gfx[];
extern Gfx BossRush_model1_Gfx[];
extern Gfx Global_BLMetalBridge_Gfx[];
extern ModelCollision Global_BLLava2_ColH;
extern Gfx Global_JLCaveExit3_Gfx[];
extern Gfx Global_JLCaveExit4_Gfx[];
extern ModelCollision Global_BLLavaFloor_ColH;
extern Gfx BossRush_model9_Gfx[];
extern ModelCollision BossRush_unkCol7_ColH;
extern Gfx BossRush_model6_Gfx[];
extern ModelCollision Global_TallExitShadow2_ColH;
extern ModelCollision Global_DCExit_ColH;
extern ModelCollision Global_BLLava8_ColH;
extern Gfx BossRush_model7_Gfx[];
extern Gfx Global_exitShadowSouth_Gfx[];
extern ModelCollision Global_KLExit_ColH;
extern Gfx BossRush_model2_Gfx[];
extern ModelCollision Global_ALSpinDoor_ColH;
extern Gfx Global_trainingRoomLight_Gfx[];
extern ModelCollision Global_BLLava3_ColH;
extern Gfx Global_BLLava7_Gfx[];
extern Gfx BossRush_model3_Gfx[];
extern ModelCollision BossRush_unkCol6_ColH;
extern ModelCollision BossRush_unkCol4_ColH;
extern Gfx Global_fallbackCube_Gfx[];
extern Gfx Global_exitShadowWest_Gfx[];
extern ModelCollision Global_BLLava_ColH;
extern Gfx BossRush_model4_Gfx[];
extern ModelCollision Global_ALBLDoor_ColH;
extern Gfx Global_TallExitShadow2_Gfx[];
extern ModelCollision Global_JLOutsideEntrance_ColH;
extern ModelCollision Global_JLCaveExit4_ColH;
extern ModelCollision Global_BLLava6_ColH;
extern ModelCollision Global_fallbackCube_ColH;
extern ModelCollision Global_BLLava4_ColH;
extern ModelCollision BossRush_unkCol8_ColH;
extern ModelCollision Global_GCExit1_ColH;
extern Gfx Global_BLLava5_Gfx[];
extern ModelCollision Global_sandPit_ColH;
extern ModelCollision Global_JLCaveDoor_ColH;
extern ModelCollision Global_JLCaveExit3_ColH;
extern Gfx Global_BLLava4_Gfx[];
extern ModelCollision Global_exitShadowEast_ColH;
extern ModelCollision Global_BLDestructableTop_ColH;
extern Gfx BossRush_model5_Gfx[];
extern ModelCollision BossRush_unkCol2_ColH;
extern Gfx Global_ALSpinDoor_Gfx[];
extern ModelCollision Global_BLLava7_ColH;
extern Gfx Global_BLLava2_Gfx[];
extern ModelCollision BossRush_unkCol9_ColH;
extern Gfx Global_GCExit1_Gfx[];
extern Gfx Global_KLExit_Gfx[];
extern Gfx Global_JLOutsideEntrance_Gfx[];
extern ModelCollision Global_exitShadowSouth_ColH;
extern ModelCollision BossRush_unkCol5_ColH;
extern ModelCollision Global_JLCaveExit2_ColH;

StageModel BossRush_stageModels[] = {
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
	{         BossRush_model1_Gfx,         &BossRush_unkCol1_ColH},
	{         BossRush_model2_Gfx,         &BossRush_unkCol2_ColH},
	{         BossRush_model3_Gfx,         &BossRush_unkCol3_ColH},
	{         BossRush_model4_Gfx,         &BossRush_unkCol4_ColH},
	{         BossRush_model5_Gfx,         &BossRush_unkCol5_ColH},
	{         BossRush_model6_Gfx,         &BossRush_unkCol6_ColH},
	{         BossRush_model7_Gfx,         &BossRush_unkCol7_ColH},
	{         BossRush_model8_Gfx,         &BossRush_unkCol8_ColH},
	{         BossRush_model9_Gfx,         &BossRush_unkCol9_ColH},
	{             Global_pole_Gfx,              &Global_pole_ColH}
};

extern ModelCollision Global_unk1_ColH;

rabObject BossRush_rabObjects[] = {
	{0, 100.0, 100.0, 100.0, &Global_unk1_ColH},
	{0, 100.0, 100.0, 100.0, &Global_unk1_ColH}
};


RoomObject BossRush_room0_objects[] = {
	{    {0.0,     0.0,     0.0},  {1.0, 1.0,  1.0}, ROT_NONE,                              0, OBJU_NORMAL, OBJM_NORMAL,    0.0,    0.0,     0.0, 0.0,       NULL,  0, 0,    0, 0, 0, 35, -1, -1, -1, NULL, NULL, NULL, 0, 7,  4, 4, 0, -1, 0, 0},
	{    {0.0,     0.0,     0.0},  {1.0, 1.0,  1.0}, ROT_NONE,                              0, OBJU_NORMAL, OBJM_NORMAL,    0.0,    0.0,     0.0, 0.0,       NULL,  0, 0,    0, 0, 0, 36, -1, -1, -1, NULL, NULL, NULL, 0, 7,  4, 4, 0, -1, 0, 0},
	{    {0.0,     0.0,     0.0},  {1.0, 4.0,  1.0}, ROT_NONE,                              0, OBJU_NORMAL, OBJM_NORMAL,    0.0,    0.0,     0.0, 0.0,       NULL,  0, 0,    0, 0, 0, 41, -1, -1, -1, NULL, NULL, NULL, 0, 2,  4, 4, 0, -1, 0, 0},
	{ {1000.0,     0.0,   400.0},  {1.0, 1.0,  1.0},    ROT_Y, DEGREES_TO_RADIANS_2PI(-112.0), OBJU_NORMAL, OBJM_NORMAL,    0.0,    0.0,     0.0, 0.0,       NULL,  0, 0,    0, 0, 0, 40, -1, -1, -1, NULL, NULL, NULL, 0, 0,  4, 4, 0, -1, 0, 0},
	{ {1000.0,     0.0,  -400.0},  {1.0, 1.0,  1.0},    ROT_Y,  DEGREES_TO_RADIANS_2PI(-68.0), OBJU_NORMAL, OBJM_NORMAL,    0.0,    0.0,     0.0, 0.0,       NULL,  0, 0,    0, 0, 0, 40, -1, -1, -1, NULL, NULL, NULL, 0, 0,  4, 4, 0, -1, 0, 0},
	{  {400.0,     0.0, -1000.0},  {1.0, 1.0,  1.0},    ROT_Y,  DEGREES_TO_RADIANS_2PI(-22.0), OBJU_NORMAL, OBJM_NORMAL,    0.0,    0.0,     0.0, 0.0,       NULL,  0, 0,    0, 0, 0, 40, -1, -1, -1, NULL, NULL, NULL, 0, 0,  4, 4, 0, -1, 0, 0},
	{ {-400.0,     0.0, -1000.0},  {1.0, 1.0,  1.0},    ROT_Y,   DEGREES_TO_RADIANS_2PI(22.0), OBJU_NORMAL, OBJM_NORMAL,    0.0,    0.0,     0.0, 0.0,       NULL,  0, 0,    0, 0, 0, 40, -1, -1, -1, NULL, NULL, NULL, 0, 0,  4, 4, 0, -1, 0, 0},
	{{-1000.0,     0.0,  -400.0},  {1.0, 1.0,  1.0},    ROT_Y,   DEGREES_TO_RADIANS_2PI(68.0), OBJU_NORMAL, OBJM_NORMAL,    0.0,    0.0,     0.0, 0.0,       NULL,  0, 0,    0, 0, 0, 40, -1, -1, -1, NULL, NULL, NULL, 0, 0,  4, 4, 0, -1, 0, 0},
	{{-1000.0,     0.0,   400.0},  {1.0, 1.0,  1.0},    ROT_Y,  DEGREES_TO_RADIANS_2PI(112.0), OBJU_NORMAL, OBJM_NORMAL,    0.0,    0.0,     0.0, 0.0,       NULL,  0, 0,    0, 0, 0, 40, -1, -1, -1, NULL, NULL, NULL, 0, 0,  4, 4, 0, -1, 0, 0},
	{    {0.0,     0.0,  2000.0},  {1.0, 1.0,  1.0}, ROT_NONE,                              0,   OBJU_ZONE, OBJM_NORMAL, 1200.0, 1200.0,     0.0, 0.0, ZDIR_SOUTH,  1, 0,    0, 0, 0,  0, -1, -1, -1, NULL, NULL, NULL, 0, 7, -1, 1, 0, -1, 0, 0},
	{    {0.0,     0.0,  2000.0},  {4.0, 4.0,  4.0}, ROT_NONE,                              0, OBJU_NORMAL, OBJM_NORMAL, 1400.0, 1000.0, -1000.0, 0.0,       NULL, 90, 0, 1000, 0, 0,  0, -1, -1, -1, NULL, NULL, NULL, 0, 1,  0, 0, 0, -1, 0, 0},
	{ {1000.0,   -10.0,   400.0},  {1.0, 1.0,  1.0},    ROT_Y, DEGREES_TO_RADIANS_2PI(-112.0), OBJU_NORMAL, OBJM_NORMAL,    0.0,    0.0,     0.0, 0.0,       NULL,  0, 0,    0, 0, 0, 42, -1, -1, -1, NULL, NULL, NULL, 0, 2,  4, 4, 0, -1, 0, 0},
	{ {1000.0,   -10.0,  -400.0},  {1.0, 1.0,  1.0},    ROT_Y,  DEGREES_TO_RADIANS_2PI(-68.0), OBJU_NORMAL, OBJM_NORMAL,    0.0,    0.0,     0.0, 0.0,       NULL,  0, 0,    0, 0, 0, 42, -1, -1, -1, NULL, NULL, NULL, 0, 2,  4, 4, 0, -1, 0, 0},
	{  {400.0,   -10.0, -1000.0},  {1.0, 1.0,  1.0},    ROT_Y,  DEGREES_TO_RADIANS_2PI(-22.0), OBJU_NORMAL, OBJM_NORMAL,    0.0,    0.0,     0.0, 0.0,       NULL,  0, 0,    0, 0, 0, 42, -1, -1, -1, NULL, NULL, NULL, 0, 2,  4, 4, 0, -1, 0, 0},
	{ {-400.0,   -10.0, -1000.0},  {1.0, 1.0,  1.0},    ROT_Y,   DEGREES_TO_RADIANS_2PI(22.0), OBJU_NORMAL, OBJM_NORMAL,    0.0,    0.0,     0.0, 0.0,       NULL,  0, 0,    0, 0, 0, 42, -1, -1, -1, NULL, NULL, NULL, 0, 2,  4, 4, 0, -1, 0, 0},
	{{-1000.0,   -10.0,  -400.0},  {1.0, 1.0,  1.0},    ROT_Y,   DEGREES_TO_RADIANS_2PI(68.0), OBJU_NORMAL, OBJM_NORMAL,    0.0,    0.0,     0.0, 0.0,       NULL,  0, 0,    0, 0, 0, 42, -1, -1, -1, NULL, NULL, NULL, 0, 2,  4, 4, 0, -1, 0, 0},
	{{-1000.0,   -10.0,   400.0},  {1.0, 1.0,  1.0},    ROT_Y,  DEGREES_TO_RADIANS_2PI(112.0), OBJU_NORMAL, OBJM_NORMAL,    0.0,    0.0,     0.0, 0.0,       NULL,  0, 0,    0, 0, 0, 42, -1, -1, -1, NULL, NULL, NULL, 0, 2,  4, 4, 0, -1, 0, 0},
	{ {1000.0,   -10.0,   400.0},  {1.0, 1.0,  1.0},    ROT_Y, DEGREES_TO_RADIANS_2PI(-112.0), OBJU_NORMAL, OBJM_NORMAL,    0.0,    0.0,     0.0, 0.0,       NULL,  0, 0,    0, 0, 0, 38, -1, -1, -1, NULL, NULL, NULL, 0, 2,  4, 4, 0, -1, 0, 0},
	{ {1000.0,   -10.0,  -400.0},  {1.0, 1.0,  1.0},    ROT_Y,  DEGREES_TO_RADIANS_2PI(-68.0), OBJU_NORMAL, OBJM_NORMAL,    0.0,    0.0,     0.0, 0.0,       NULL,  0, 0,    0, 0, 0, 38, -1, -1, -1, NULL, NULL, NULL, 0, 2,  4, 4, 0, -1, 0, 0},
	{  {400.0,   -10.0, -1000.0},  {1.0, 1.0,  1.0},    ROT_Y,  DEGREES_TO_RADIANS_2PI(-22.0), OBJU_NORMAL, OBJM_NORMAL,    0.0,    0.0,     0.0, 0.0,       NULL,  0, 0,    0, 0, 0, 38, -1, -1, -1, NULL, NULL, NULL, 0, 2,  4, 4, 0, -1, 0, 0},
	{ {-400.0,   -10.0, -1000.0},  {1.0, 1.0,  1.0},    ROT_Y,   DEGREES_TO_RADIANS_2PI(22.0), OBJU_NORMAL, OBJM_NORMAL,    0.0,    0.0,     0.0, 0.0,       NULL,  0, 0,    0, 0, 0, 38, -1, -1, -1, NULL, NULL, NULL, 0, 2,  4, 4, 0, -1, 0, 0},
	{{-1000.0,   -10.0,  -400.0},  {1.0, 1.0,  1.0},    ROT_Y,   DEGREES_TO_RADIANS_2PI(68.0), OBJU_NORMAL, OBJM_NORMAL,    0.0,    0.0,     0.0, 0.0,       NULL,  0, 0,    0, 0, 0, 38, -1, -1, -1, NULL, NULL, NULL, 0, 2,  4, 4, 0, -1, 0, 0},
	{{-1000.0,   -10.0,   400.0},  {1.0, 1.0,  1.0},    ROT_Y,  DEGREES_TO_RADIANS_2PI(112.0), OBJU_NORMAL, OBJM_NORMAL,    0.0,    0.0,     0.0, 0.0,       NULL,  0, 0,    0, 0, 0, 38, -1, -1, -1, NULL, NULL, NULL, 0, 2,  4, 4, 0, -1, 0, 0},
	{ {1000.0,   -10.0,   400.0},  {1.0, 1.0,  1.0},    ROT_Y, DEGREES_TO_RADIANS_2PI(-112.0), OBJU_NORMAL, OBJM_NORMAL,    0.0,    0.0,     0.0, 0.0,       NULL,  0, 0,    0, 0, 0, 37, -1, -1, -1, NULL, NULL, NULL, 0, 2,  4, 4, 0, -1, 0, 0},
	{ {1000.0,   -10.0,  -400.0},  {1.0, 1.0,  1.0},    ROT_Y,  DEGREES_TO_RADIANS_2PI(-68.0), OBJU_NORMAL, OBJM_NORMAL,    0.0,    0.0,     0.0, 0.0,       NULL,  0, 0,    0, 0, 0, 37, -1, -1, -1, NULL, NULL, NULL, 0, 2,  4, 4, 0, -1, 0, 0},
	{  {400.0,   -10.0, -1000.0},  {1.0, 1.0,  1.0},    ROT_Y,  DEGREES_TO_RADIANS_2PI(-22.0), OBJU_NORMAL, OBJM_NORMAL,    0.0,    0.0,     0.0, 0.0,       NULL,  0, 0,    0, 0, 0, 37, -1, -1, -1, NULL, NULL, NULL, 0, 2,  4, 4, 0, -1, 0, 0},
	{ {-400.0,   -10.0, -1000.0},  {1.0, 1.0,  1.0},    ROT_Y,   DEGREES_TO_RADIANS_2PI(22.0), OBJU_NORMAL, OBJM_NORMAL,    0.0,    0.0,     0.0, 0.0,       NULL,  0, 0,    0, 0, 0, 37, -1, -1, -1, NULL, NULL, NULL, 0, 2,  4, 4, 0, -1, 0, 0},
	{{-1000.0,   -10.0,  -400.0},  {1.0, 1.0,  1.0},    ROT_Y,   DEGREES_TO_RADIANS_2PI(68.0), OBJU_NORMAL, OBJM_NORMAL,    0.0,    0.0,     0.0, 0.0,       NULL,  0, 0,    0, 0, 0, 37, -1, -1, -1, NULL, NULL, NULL, 0, 2,  4, 4, 0, -1, 0, 0},
	{{-1000.0,   -10.0,   400.0},  {1.0, 1.0,  1.0},    ROT_Y,  DEGREES_TO_RADIANS_2PI(112.0), OBJU_NORMAL, OBJM_NORMAL,    0.0,    0.0,     0.0, 0.0,       NULL,  0, 0,    0, 0, 0, 37, -1, -1, -1, NULL, NULL, NULL, 0, 2,  4, 4, 0, -1, 0, 0},
	{    {0.0,     0.0,     0.0},  {1.0, 1.0,  1.0}, ROT_NONE,                              0, OBJU_NORMAL, OBJM_NORMAL,    0.0,    0.0,     0.0, 0.0,       NULL,  0, 0,    0, 0, 0, 39, -1, -1, -1, NULL, NULL, NULL, 0, 7,  4, 4, 0, -1, 0, 0},
	{    {0.0, 10000.0,     0.0}, {10.0, 1.0, 30.0}, ROT_NONE,                              0, OBJU_NORMAL, OBJM_NORMAL,    0.0,    0.0,     0.0, 0.0,       NULL,  0, 0,    0, 0, 0, 35, -1, -1, -1, NULL, NULL, NULL, 0, 7,  0, 4, 0, -1, 0, 0},
	{{-1957.3,   -10.0,   795.8},  {1.0, 1.0,  1.0}, ROT_NONE,                              0,   OBJU_ZONE, OBJM_NORMAL, 1200.0, 1200.0,     0.0, 0.0,  ZDIR_WEST,  1, 0,    0, 0, 0,  0, -1, -1, -1, NULL, NULL, NULL, 0, 7, -1, 1, 0, -1, 0, 0},
	{{-1957.3,   -10.0,   795.8},  {4.0, 4.0,  4.0}, ROT_NONE,                              0, OBJU_NORMAL, OBJM_NORMAL, 1400.0, 1000.0, -1000.0, 0.0,       NULL, 90, 0, 1000, 0, 0,  0, -1, -1, -1, NULL, NULL, NULL, 0, 1,  0, 0, 0, -1, 0, 0},
	{{-1973.4,   -10.0, -769.35},  {1.0, 1.0,  1.0}, ROT_NONE,                              0,   OBJU_ZONE, OBJM_NORMAL, 1200.0, 1200.0,     0.0, 0.0,  ZDIR_WEST,  1, 0,    0, 0, 0,  0, -1, -1, -1, NULL, NULL, NULL, 0, 7, -1, 1, 0, -1, 0, 0},
	{{-1973.4,   -10.0, -769.35},  {4.0, 4.0,  4.0}, ROT_NONE,                              0, OBJU_NORMAL, OBJM_NORMAL, 1400.0, 1000.0, -1000.0, 0.0,       NULL, 90, 0, 1000, 0, 0,  0, -1, -1, -1, NULL, NULL, NULL, 0, 1,  0, 0, 0, -1, 0, 0},
	{ {-779.7,   -10.0, -1941.2},  {1.0, 1.0,  1.0}, ROT_NONE,                              0,   OBJU_ZONE, OBJM_NORMAL, 1200.0, 1200.0,     0.0, 0.0, ZDIR_NORTH,  1, 0,    0, 0, 0,  0, -1, -1, -1, NULL, NULL, NULL, 0, 7, -1, 1, 0, -1, 0, 0},
	{ {-779.7,   -10.0, -1941.2},  {4.0, 4.0,  4.0}, ROT_NONE,                              0, OBJU_NORMAL, OBJM_NORMAL, 1400.0, 1000.0, -1000.0, 0.0,       NULL, 90, 0, 1000, 0, 0,  0, -1, -1, -1, NULL, NULL, NULL, 0, 1,  0, 0, 0, -1, 0, 0},
	{ {1957.3,   -10.0,   795.8},  {1.0, 1.0,  1.0}, ROT_NONE,                              0,   OBJU_ZONE, OBJM_NORMAL, 1200.0, 1200.0,     0.0, 0.0,  ZDIR_EAST,  1, 0,    0, 0, 0,  0, -1, -1, -1, NULL, NULL, NULL, 0, 7, -1, 1, 0, -1, 0, 0},
	{ {1957.3,   -10.0,   795.8},  {4.0, 4.0,  4.0}, ROT_NONE,                              0, OBJU_NORMAL, OBJM_NORMAL, 1400.0, 1000.0, -1000.0, 0.0,       NULL, 90, 0, 1000, 0, 0,  0, -1, -1, -1, NULL, NULL, NULL, 0, 1,  0, 0, 0, -1, 0, 0},
	{ {1973.4,   -10.0, -769.35},  {1.0, 1.0,  1.0}, ROT_NONE,                              0,   OBJU_ZONE, OBJM_NORMAL, 1200.0, 1200.0,     0.0, 0.0,  ZDIR_EAST,  1, 0,    0, 0, 0,  0, -1, -1, -1, NULL, NULL, NULL, 0, 7, -1, 1, 0, -1, 0, 0},
	{ {1973.4,   -10.0, -769.35},  {4.0, 4.0,  4.0}, ROT_NONE,                              0, OBJU_NORMAL, OBJM_NORMAL, 1400.0, 1000.0, -1000.0, 0.0,       NULL, 90, 0, 1000, 0, 0,  0, -1, -1, -1, NULL, NULL, NULL, 0, 1,  0, 0, 0, -1, 0, 0},
	{  {779.7,   -10.0, -1941.2},  {1.0, 1.0,  1.0}, ROT_NONE,                              0,   OBJU_ZONE, OBJM_NORMAL, 1200.0, 1200.0,     0.0, 0.0, ZDIR_NORTH,  1, 0,    0, 0, 0,  0, -1, -1, -1, NULL, NULL, NULL, 0, 7, -1, 1, 0, -1, 0, 0},
	{  {779.7,   -10.0, -1941.2},  {4.0, 4.0,  4.0}, ROT_NONE,                              0, OBJU_NORMAL, OBJM_NORMAL, 1400.0, 1000.0, -1000.0, 0.0,       NULL, 90, 0, 1000, 0, 0,  0, -1, -1, -1, NULL, NULL, NULL, 0, 1,  0, 0, 0, -1, 0, 0},
	NULL_OBJECT
};


SpriteActor BossRush_roomMulti_sprites[] = {
	{2, SPRITE_PORCUPINE, {-2200.0, 0.0,   920.0}, {128.0, 512.0, 480.0}, 1, 0.0, 1.0, 0, 0.0, 0.0, 0.0, 0, {255, 128, 128, 255}},
	{2,   SPRITE_MISSILE, {-1900.0, 0.0,  -750.0}, {128.0, 512.0, 480.0}, 1, 0.0, 1.0, 0, 0.0, 0.0, 0.0, 0, {255, 128, 128, 255}},
	{2,   SPRITE_GRAYANT,  {-780.0, 0.0, -2000.0}, {128.0, 512.0, 480.0}, 1, 0.0, 1.0, 0, 0.0, 0.0, 0.0, 0, {255, 128, 128, 255}},
	{2,  SPRITE_SANDCRAB,   {780.0, 0.0, -2000.0}, {128.0, 512.0, 480.0}, 1, 0.0, 1.0, 0, 0.0, 0.0, 0.0, 0, {255, 128, 128, 255}},
	{2,  SPRITE_CHOCOKID,  {1900.0, 0.0,  -750.0}, {128.0, 512.0, 480.0}, 1, 0.0, 1.0, 0, 0.0, 0.0, 0.0, 0, {255, 128, 128, 255}},
	{2,      SPRITE_FIRE,  {2200.0, 0.0,   920.0}, {128.0, 512.0, 480.0}, 1, 0.0, 1.0, 0, 0.0, 0.0, 0.0, 0, {255, 128, 128, 255}},
	NULL_SPRITE
};


RoomObject BossRush_room1_objects[] = {
	{{0.0, 0.0, 0.0},  {1.0, 1.0,  1.0}, ROT_NONE, 0,   OBJU_ZONE, OBJM_NORMAL, 1200.0, 1200.0,     0.0, 0.0, ZDIR_EAST,  1, 0,    0, 0, 0,  0, -1, -1, -1, NULL, NULL, NULL, 0, 7, -1, 1, 0, -1, 0, 0},
	{{0.0, 0.0, 0.0},  {4.0, 4.0,  4.0}, ROT_NONE, 0, OBJU_NORMAL, OBJM_NORMAL, 1400.0, 1000.0, -1000.0, 0.0,      NULL, 90, 0, 1000, 0, 0,  0, -1, -1, -1, NULL, NULL, NULL, 0, 1,  0, 0, 0, -1, 0, 0},
	{{0.0, 0.0, 0.0}, {10.0, 1.0, 30.0}, ROT_NONE, 0, OBJU_NORMAL, OBJM_NORMAL,    0.0,    0.0,     0.0, 0.0,      NULL,  0, 0,    0, 0, 0, 35, -1, -1, -1, NULL, NULL, NULL, 0, 7,  0, 4, 0, -1, 0, 0},
	NULL_OBJECT
};


RoomObject BossRush_roomMulti2_objects[] = {
	{{0.0, 0.0, 0.0},  {1.0, 1.0,  1.0}, ROT_NONE, 0,   OBJU_ZONE, OBJM_NORMAL, 1200.0, 1200.0,     0.0, 0.0, ZDIR_SOUTH,  1, 0,    0, 0, 0,  0, -1, -1, -1, NULL, NULL, NULL, 0, 7, -1, 1, 0, -1, 0, 0},
	{{0.0, 0.0, 0.0},  {4.0, 4.0,  4.0}, ROT_NONE, 0, OBJU_NORMAL, OBJM_NORMAL, 1400.0, 1000.0, -1000.0, 0.0,       NULL, 90, 0, 1000, 0, 0,  0, -1, -1, -1, NULL, NULL, NULL, 0, 1,  0, 0, 0, -1, 0, 0},
	{{0.0, 0.0, 0.0}, {10.0, 1.0, 30.0}, ROT_NONE, 0, OBJU_NORMAL, OBJM_NORMAL,    0.0,    0.0,     0.0, 0.0,       NULL,  0, 0,    0, 0, 0, 35, -1, -1, -1, NULL, NULL, NULL, 0, 7,  0, 4, 0, -1, 0, 0},
	NULL_OBJECT
};


RoomObject BossRush_roomMulti3_objects[] = {
	{{0.0, 0.0, 0.0},  {1.0, 1.0,  1.0}, ROT_NONE, 0,   OBJU_ZONE, OBJM_NORMAL, 1200.0, 1200.0,     0.0, 0.0, ZDIR_WEST,  1, 0,    0, 0, 0,  0, -1, -1, -1, NULL, NULL, NULL, 0, 7, -1, 1, 0, -1, 0, 0},
	{{0.0, 0.0, 0.0},  {4.0, 4.0,  4.0}, ROT_NONE, 0, OBJU_NORMAL, OBJM_NORMAL, 1400.0, 1000.0, -1000.0, 0.0,      NULL, 90, 0, 1000, 0, 0,  0, -1, -1, -1, NULL, NULL, NULL, 0, 1,  0, 0, 0, -1, 0, 0},
	{{0.0, 0.0, 0.0}, {10.0, 1.0, 30.0}, ROT_NONE, 0, OBJU_NORMAL, OBJM_NORMAL,    0.0,    0.0,     0.0, 0.0,      NULL,  0, 0,    0, 0, 0, 35, -1, -1, -1, NULL, NULL, NULL, 0, 7,  0, 4, 0, -1, 0, 0},
	NULL_OBJECT
};


RoomObject BossRush_roomMulti4_objects[] = {
	{{0.0, 0.0, 0.0},  {1.0, 1.0,  1.0}, ROT_NONE, 0,   OBJU_ZONE, OBJM_NORMAL, 1200.0, 1200.0,     0.0, 0.0, ZDIR_NORTH,  1, 0,    0, 0, 0,  0, -1, -1, -1, NULL, NULL, NULL, 0, 7, -1, 1, 0, -1, 0, 0},
	{{0.0, 0.0, 0.0},  {4.0, 4.0,  4.0}, ROT_NONE, 0, OBJU_NORMAL, OBJM_NORMAL, 1400.0, 1000.0, -1000.0, 0.0,       NULL, 90, 0, 1000, 0, 0,  0, -1, -1, -1, NULL, NULL, NULL, 0, 1,  0, 0, 0, -1, 0, 0},
	{{0.0, 0.0, 0.0}, {10.0, 1.0, 30.0}, ROT_NONE, 0, OBJU_NORMAL, OBJM_NORMAL,    0.0,    0.0,     0.0, 0.0,       NULL,  0, 0,    0, 0, 0, 35, -1, -1, -1, NULL, NULL, NULL, 0, 7,  0, 4, 0, -1, 0, 0},
	NULL_OBJECT
};


s32 BossRush_spriteLib[1][16] = {
{  SPRITE_GRAYANT,
  SPRITE_CHOCOKID,
  SPRITE_SANDCRAB,
      SPRITE_FIRE,
   SPRITE_MISSILE,
SPRITE_PORCUPINE}
};


RoomInstance BossRush_room_instances[] = {
	{     BossRush_room0_objects, NULL, NULL, BossRush_roomMulti_sprites, 0, 0, 0, 0, -1, 0, 0.0, 1, 0.0, 800.0,    10.0, 0.0, 0.0, 0.0, 0.0, {0,  0,  0}, {0,  0,  0}, {0,  0,  0}, {0,  0,  0}, -1.0},
	{     BossRush_room1_objects, NULL, NULL,                       NULL, 0, 1, 0, 0, -1, 0, 0.0, 1, 0.0, 800.0, -1600.0, 0.0, 0.0, 0.0, 0.0, {0,  0,  0}, {0,  0,  0}, {0,  0,  0}, {0,  0,  0}, -1.0},
	{     BossRush_room1_objects, NULL, NULL,                       NULL, 0, 1, 0, 0, -1, 0, 0.0, 1, 0.0, 800.0, -1600.0, 0.0, 0.0, 0.0, 0.0, {0,  0,  0}, {0,  0,  0}, {0,  0,  0}, {0,  0,  0}, -1.0},
	{BossRush_roomMulti2_objects, NULL, NULL,                       NULL, 0, 1, 0, 0, -1, 0, 0.0, 1, 0.0, 800.0, -1600.0, 0.0, 0.0, 0.0, 0.0, {0,  0,  0}, {0,  0,  0}, {0,  0,  0}, {0,  0,  0}, -1.0},
	{BossRush_roomMulti2_objects, NULL, NULL,                       NULL, 0, 1, 0, 0, -1, 0, 0.0, 1, 0.0, 800.0, -1600.0, 0.0, 0.0, 0.0, 0.0, {0,  0,  0}, {0,  0,  0}, {0,  0,  0}, {0,  0,  0}, -1.0},
	{BossRush_roomMulti3_objects, NULL, NULL,                       NULL, 0, 1, 0, 0, -1, 0, 0.0, 1, 0.0, 800.0, -1600.0, 0.0, 0.0, 0.0, 0.0, {0,  0,  0}, {0,  0,  0}, {0,  0,  0}, {0,  0,  0}, -1.0},
	{BossRush_roomMulti3_objects, NULL, NULL,                       NULL, 0, 1, 0, 0, -1, 0, 0.0, 1, 0.0, 800.0, -1600.0, 0.0, 0.0, 0.0, 0.0, {0,  0,  0}, {0,  0,  0}, {0,  0,  0}, {0,  0,  0}, -1.0},
	{BossRush_roomMulti4_objects, NULL, NULL,                       NULL, 0, 0, 0, 0, -1, 0, 0.0, 1, 0.0, 800.0, -1600.0, 0.0, 0.0, 0.0, 0.0, {0,  0,  0}, {0,  0,  0}, {0,  0,  0}, {0,  0,  0}, -1.0},
	{BossRush_roomMulti4_objects, NULL, NULL,                       NULL, 0, 0, 0, 0, -1, 0, 0.0, 1, 0.0, 800.0, -1600.0, 0.0, 0.0, 0.0, 0.0, {0,  0,  0}, {0,  0,  0}, {0,  0,  0}, {0,  0,  0}, -1.0},
	NULL_ROOM
};


s32 BossRush_map[4][4] = {
	{-1, 3, 4, -1},
	{ 2, 0, 0,  5},
	{ 1, 0, 0,  6},
	{-1, 7, 8, -1}
};


StageMapData BossRush_map_data = {
4, 4, BossRush_room_instances, BossRush_map
};


RoomInstance BossRush_ext_room_instances[] = {
	{BossRush_room0_objects, NULL, NULL, BossRush_roomMulti_sprites, 0, 0, 0, 0, 0, 0, 45.0, 0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, {0,  0,  0}, {0,  0,  0}, {0,  0,  0}, {0,  0,  0}, -1.0},
	NULL_ROOM
};


LevelScope BossRush_scope = {
{0, 0, 0}, -1, 25000, 60
};


StageData BossRush_stageData = {
               &BossRush_map_data,
                             NULL,
             BossRush_stageModels,
ARRAY_COUNT(BossRush_stageModels),
                                0,
              BossRush_rabObjects,
                          0x20000,
               BossRush_spriteLib,
                  &BossRush_scope
};
Mtx BossRush_IMtx2 = IDENTITY;
Lights1 BossRush_bossScope1_Light =
#include "assets/levelGroup/BossRush/bossScope1/bossScope1.light.inc.c"
Vtx BossRush_model1_Vtx[] = {
#include "assets/levelGroup/BossRush/model1/model1.vtx.inc.c"
};
Mtx BossRush_IMtx3 = IDENTITY;
Gfx BossRush_model1_Gfx[] = {
#include "assets/levelGroup/BossRush/model1/model1.gfx.inc.c"
};
Vtx BossRush_model2_Vtx[] = {
#include "assets/levelGroup/BossRush/model2/model2.vtx.inc.c"
};
Mtx BossRush_IMtx4 = IDENTITY;
Gfx BossRush_model2_Gfx[] = {
#include "assets/levelGroup/BossRush/model2/model2.gfx.inc.c"
};
Vtx BossRush_model3_Vtx[] = {
#include "assets/levelGroup/BossRush/model3/model3.vtx.inc.c"
};
Mtx BossRush_IMtx5 = IDENTITY;
Gfx BossRush_model3_Gfx[] = {
#include "assets/levelGroup/BossRush/model3/model3.gfx.inc.c"
};
Vtx BossRush_model4_Vtx[] = {
#include "assets/levelGroup/BossRush/model4/model4.vtx.inc.c"
};
Mtx BossRush_IMtx6 = IDENTITY;
Gfx BossRush_model4_Gfx[] = {
#include "assets/levelGroup/BossRush/model4/model4.gfx.inc.c"
};
Vtx BossRush_model5_Vtx[] = {
#include "assets/levelGroup/BossRush/model5/model5.vtx.inc.c"
};
Mtx BossRush_IMtx7 = IDENTITY;
Gfx BossRush_model5_Gfx[] = {
#include "assets/levelGroup/BossRush/model5/model5.gfx.inc.c"
};
Vtx BossRush_model6_Vtx[] = {
#include "assets/levelGroup/BossRush/model6/model6.vtx.inc.c"
};
Mtx BossRush_IMtx8 = IDENTITY;
Gfx BossRush_model6_Gfx[] = {
#include "assets/levelGroup/BossRush/model6/model6.gfx.inc.c"
};
Vtx BossRush_model7_Vtx[] = {
#include "assets/levelGroup/BossRush/model7/model7.vtx.inc.c"
};
Mtx BossRush_IMtx9 = IDENTITY;
Gfx BossRush_model7_Gfx[] = {
#include "assets/levelGroup/BossRush/model7/model7.gfx.inc.c"
};
Vtx BossRush_model8_Vtx[] = {
#include "assets/levelGroup/BossRush/model8/model8.vtx.inc.c"
};
Mtx BossRush_IMtx10 = IDENTITY;
Gfx BossRush_model8_Gfx[] = {
#include "assets/levelGroup/BossRush/model8/model8.gfx.inc.c"
};
Vtx BossRush_model9_Vtx[] = {
#include "assets/levelGroup/BossRush/model9/model9.vtx.inc.c"
};
Mtx BossRush_IMtx11 = IDENTITY;
Gfx BossRush_model9_Gfx[] = {
#include "assets/levelGroup/BossRush/model9/model9.gfx.inc.c"
};
Vec3f BossRush_unkCol1_ColV[] = {
#include "assets/levelGroup/BossRush/unkCol1/unkCol1.colV.inc.c"
};
Vec3w BossRush_unkCol1_ColT[] = {
#include "assets/levelGroup/BossRush/unkCol1/unkCol1.colT.inc.c"
};
Rect3D BossRush_unkCol1_ColS = {
#include "assets/levelGroup/BossRush/unkCol1/unkCol1.colS.inc.c"
};
ModelCollision BossRush_unkCol1_ColH = {
ARRAY_COUNT(BossRush_unkCol1_ColV), ARRAY_COUNT(BossRush_unkCol1_ColT), BossRush_unkCol1_ColV, BossRush_unkCol1_ColT, &BossRush_unkCol1_ColS
};
Vec3f BossRush_unkCol2_ColV[] = {
#include "assets/levelGroup/BossRush/unkCol2/unkCol2.colV.inc.c"
};
Vec3w BossRush_unkCol2_ColT[] = {
#include "assets/levelGroup/BossRush/unkCol2/unkCol2.colT.inc.c"
};
Rect3D BossRush_unkCol2_ColS = {
#include "assets/levelGroup/BossRush/unkCol2/unkCol2.colS.inc.c"
};
ModelCollision BossRush_unkCol2_ColH = {
ARRAY_COUNT(BossRush_unkCol2_ColV), ARRAY_COUNT(BossRush_unkCol2_ColT), BossRush_unkCol2_ColV, BossRush_unkCol2_ColT, &BossRush_unkCol2_ColS
};
Vec3f BossRush_unkCol3_ColV[] = {
#include "assets/levelGroup/BossRush/unkCol3/unkCol3.colV.inc.c"
};
Vec3w BossRush_unkCol3_ColT[] = {
#include "assets/levelGroup/BossRush/unkCol3/unkCol3.colT.inc.c"
};
Rect3D BossRush_unkCol3_ColS = {
#include "assets/levelGroup/BossRush/unkCol3/unkCol3.colS.inc.c"
};
ModelCollision BossRush_unkCol3_ColH = {
ARRAY_COUNT(BossRush_unkCol3_ColV), ARRAY_COUNT(BossRush_unkCol3_ColT), BossRush_unkCol3_ColV, BossRush_unkCol3_ColT, &BossRush_unkCol3_ColS
};
Vec3f BossRush_unkCol4_ColV[] = {
#include "assets/levelGroup/BossRush/unkCol4/unkCol4.colV.inc.c"
};
Vec3w BossRush_unkCol4_ColT[] = {
#include "assets/levelGroup/BossRush/unkCol4/unkCol4.colT.inc.c"
};
Rect3D BossRush_unkCol4_ColS = {
#include "assets/levelGroup/BossRush/unkCol4/unkCol4.colS.inc.c"
};
ModelCollision BossRush_unkCol4_ColH = {
ARRAY_COUNT(BossRush_unkCol4_ColV), ARRAY_COUNT(BossRush_unkCol4_ColT), BossRush_unkCol4_ColV, BossRush_unkCol4_ColT, &BossRush_unkCol4_ColS
};
Vec3f BossRush_unkCol5_ColV[] = {
#include "assets/levelGroup/BossRush/unkCol5/unkCol5.colV.inc.c"
};
Vec3w BossRush_unkCol5_ColT[] = {
#include "assets/levelGroup/BossRush/unkCol5/unkCol5.colT.inc.c"
};
Rect3D BossRush_unkCol5_ColS = {
#include "assets/levelGroup/BossRush/unkCol5/unkCol5.colS.inc.c"
};
ModelCollision BossRush_unkCol5_ColH = {
ARRAY_COUNT(BossRush_unkCol5_ColV), ARRAY_COUNT(BossRush_unkCol5_ColT), BossRush_unkCol5_ColV, BossRush_unkCol5_ColT, &BossRush_unkCol5_ColS
};
Vec3f BossRush_unkCol6_ColV[] = {
#include "assets/levelGroup/BossRush/unkCol6/unkCol6.colV.inc.c"
};
Vec3w BossRush_unkCol6_ColT[] = {
#include "assets/levelGroup/BossRush/unkCol6/unkCol6.colT.inc.c"
};
Rect3D BossRush_unkCol6_ColS = {
#include "assets/levelGroup/BossRush/unkCol6/unkCol6.colS.inc.c"
};
ModelCollision BossRush_unkCol6_ColH = {
ARRAY_COUNT(BossRush_unkCol6_ColV), ARRAY_COUNT(BossRush_unkCol6_ColT), BossRush_unkCol6_ColV, BossRush_unkCol6_ColT, &BossRush_unkCol6_ColS
};
Vec3f BossRush_unkCol7_ColV[] = {
#include "assets/levelGroup/BossRush/unkCol7/unkCol7.colV.inc.c"
};
Vec3w BossRush_unkCol7_ColT[] = {
#include "assets/levelGroup/BossRush/unkCol7/unkCol7.colT.inc.c"
};
Rect3D BossRush_unkCol7_ColS = {
#include "assets/levelGroup/BossRush/unkCol7/unkCol7.colS.inc.c"
};
ModelCollision BossRush_unkCol7_ColH = {
ARRAY_COUNT(BossRush_unkCol7_ColV), ARRAY_COUNT(BossRush_unkCol7_ColT), BossRush_unkCol7_ColV, BossRush_unkCol7_ColT, &BossRush_unkCol7_ColS
};
Vec3f BossRush_unkCol8_ColV[] = {
#include "assets/levelGroup/BossRush/unkCol8/unkCol8.colV.inc.c"
};
Vec3w BossRush_unkCol8_ColT[] = {
#include "assets/levelGroup/BossRush/unkCol8/unkCol8.colT.inc.c"
};
Rect3D BossRush_unkCol8_ColS = {
#include "assets/levelGroup/BossRush/unkCol8/unkCol8.colS.inc.c"
};
ModelCollision BossRush_unkCol8_ColH = {
ARRAY_COUNT(BossRush_unkCol8_ColV), ARRAY_COUNT(BossRush_unkCol8_ColT), BossRush_unkCol8_ColV, BossRush_unkCol8_ColT, &BossRush_unkCol8_ColS
};
Vec3f BossRush_unkCol9_ColV[] = {
#include "assets/levelGroup/BossRush/unkCol9/unkCol9.colV.inc.c"
};
Vec3w BossRush_unkCol9_ColT[] = {
#include "assets/levelGroup/BossRush/unkCol9/unkCol9.colT.inc.c"
};
Rect3D BossRush_unkCol9_ColS = {
#include "assets/levelGroup/BossRush/unkCol9/unkCol9.colS.inc.c"
};
ModelCollision BossRush_unkCol9_ColH = {
ARRAY_COUNT(BossRush_unkCol9_ColV), ARRAY_COUNT(BossRush_unkCol9_ColT), BossRush_unkCol9_ColV, BossRush_unkCol9_ColT, &BossRush_unkCol9_ColS
};
s32 BossRush_alignment1[] = {0,0,0};
Mtx BossRush_IMtx12 = IDENTITY;
