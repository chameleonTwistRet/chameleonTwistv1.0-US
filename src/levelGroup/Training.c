#include "Training.h"
Mtx Training_IMtx1 = IDENTITY;

extern ModelCollision Training_unkCol1_ColH;
extern Gfx Global_JLCaveDoor_Gfx[];
extern Gfx Training_model14_Gfx[];
extern ModelCollision Training_unkCol16_ColH;
extern ModelCollision Global_BossBridge_ColH;
extern Gfx Global_JLCaveExit1_Gfx[];
extern ModelCollision Global_ALBLExit_ColH;
extern Gfx Training_model4_Gfx[];
extern ModelCollision Global_exitShadowWest_ColH;
extern ModelCollision Global_JLCaveExit1_ColH;
extern Gfx Global_pole_Gfx[];
extern Gfx Global_ALPole_Gfx[];
extern ModelCollision Global_ALPole_ColH;
extern Gfx Global_BossBridge_Gfx[];
extern ModelCollision Global_BLMetalBridge_ColH;
extern Gfx Training_model8_Gfx[];
extern ModelCollision Training_unkCol19_ColH;
extern ModelCollision Global_exitShadowNorth_ColH;
extern Gfx Training_model3_Gfx[];
extern ModelCollision Training_unkCol11_ColH;
extern Gfx Global_JLCaveExit2_Gfx[];
extern Gfx Global_JLFxCamPillar_Gfx[];
extern ModelCollision Global_JLFxCamPillar_ColH;
extern Gfx Global_BLLava3_Gfx[];
extern Gfx Training_model10_Gfx[];
extern Gfx Global_exitShadowNorth_Gfx[];
extern Gfx Global_ALBLDoor_Gfx[];
extern ModelCollision Global_KLDoor_ColH;
extern Gfx Global_BLLava8_Gfx[];
extern Gfx Training_model17_Gfx[];
extern Gfx Training_model1_Gfx[];
extern ModelCollision Global_pole_ColH;
extern Gfx Global_ALBLExit_Gfx[];
extern Gfx Global_BLDestructableTop_Gfx[];
extern Gfx Global_BLLava_Gfx[];
extern ModelCollision Global_BLLava5_ColH;
extern Gfx Global_BLLavaFloor_Gfx[];
extern Gfx Training_model12_Gfx[];
extern Gfx Training_model18_Gfx[];
extern Gfx Training_model9_Gfx[];
extern Gfx Global_BLLava6_Gfx[];
extern Gfx Global_KLDoor_Gfx[];
extern Gfx Global_sandPit_Gfx[];
extern ModelCollision Training_unkCol6_ColH;
extern Gfx Global_exitShadowEast_Gfx[];
extern ModelCollision Global_trainingRoomLight_ColH;
extern Gfx Global_DCExit_Gfx[];
extern Gfx Training_model6_Gfx[];
extern Gfx Training_model19_Gfx[];
extern Gfx Global_BLMetalBridge_Gfx[];
extern ModelCollision Global_BLLava2_ColH;
extern ModelCollision Training_unkCol18_ColH;
extern Gfx Global_JLCaveExit3_Gfx[];
extern Gfx Global_JLCaveExit4_Gfx[];
extern ModelCollision Global_BLLavaFloor_ColH;
extern ModelCollision Global_TallExitShadow2_ColH;
extern ModelCollision Global_DCExit_ColH;
extern ModelCollision Global_BLLava8_ColH;
extern Gfx Global_exitShadowSouth_Gfx[];
extern ModelCollision Training_unkCol2_ColH;
extern ModelCollision Global_KLExit_ColH;
extern ModelCollision Training_unkCol10_ColH;
extern Gfx Training_model15_Gfx[];
extern ModelCollision Global_ALSpinDoor_ColH;
extern Gfx Global_trainingRoomLight_Gfx[];
extern ModelCollision Global_BLLava3_ColH;
extern Gfx Global_BLLava7_Gfx[];
extern ModelCollision Training_unkCol3_ColH;
extern Gfx Training_model21_Gfx[];
extern ModelCollision Training_unkCol8_ColH;
extern ModelCollision Training_unkCol7_ColH;
extern ModelCollision Training_unkCol15_ColH;
extern Gfx Training_model22_Gfx[];
extern Gfx Global_fallbackCube_Gfx[];
extern Gfx Global_exitShadowWest_Gfx[];
extern Gfx Training_model5_Gfx[];
extern ModelCollision Global_BLLava_ColH;
extern ModelCollision Training_unkCol20_ColH;
extern Gfx Training_model16_Gfx[];
extern ModelCollision Global_ALBLDoor_ColH;
extern Gfx Global_TallExitShadow2_Gfx[];
extern ModelCollision Global_JLOutsideEntrance_ColH;
extern ModelCollision Global_JLCaveExit4_ColH;
extern ModelCollision Global_BLLava6_ColH;
extern ModelCollision Global_fallbackCube_ColH;
extern ModelCollision Global_BLLava4_ColH;
extern ModelCollision Global_GCExit1_ColH;
extern Gfx Global_BLLava5_Gfx[];
extern ModelCollision Global_sandPit_ColH;
extern ModelCollision Global_JLCaveDoor_ColH;
extern ModelCollision Global_JLCaveExit3_ColH;
extern ModelCollision Training_unkCol5_ColH;
extern ModelCollision Training_unkCol21_ColH;
extern Gfx Global_BLLava4_Gfx[];
extern ModelCollision Global_exitShadowEast_ColH;
extern Gfx Training_model11_Gfx[];
extern ModelCollision Global_BLDestructableTop_ColH;
extern Gfx Training_model13_Gfx[];
extern Gfx Training_model20_Gfx[];
extern Gfx Training_model7_Gfx[];
extern ModelCollision Training_unkCol9_ColH;
extern ModelCollision Training_unkCol13_ColH;
extern Gfx Global_ALSpinDoor_Gfx[];
extern Gfx Training_model2_Gfx[];
extern ModelCollision Global_BLLava7_ColH;
extern Gfx Global_BLLava2_Gfx[];
extern ModelCollision Training_unkCol17_ColH;
extern ModelCollision Training_unkCol22_ColH;
extern ModelCollision Training_unkCol12_ColH;
extern ModelCollision Training_unkCol4_ColH;
extern Gfx Global_GCExit1_Gfx[];
extern ModelCollision Training_unkCol14_ColH;
extern Gfx Global_KLExit_Gfx[];
extern Gfx Global_JLOutsideEntrance_Gfx[];
extern ModelCollision Global_exitShadowSouth_ColH;
extern ModelCollision Global_JLCaveExit2_ColH;

StageModel Training_stageModels[] = {
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
	{         Training_model1_Gfx,         &Training_unkCol1_ColH},
	{         Training_model2_Gfx,         &Training_unkCol2_ColH},
	{         Training_model3_Gfx,         &Training_unkCol3_ColH},
	{         Training_model4_Gfx,         &Training_unkCol4_ColH},
	{         Training_model5_Gfx,         &Training_unkCol5_ColH},
	{         Training_model6_Gfx,         &Training_unkCol6_ColH},
	{         Training_model7_Gfx,         &Training_unkCol7_ColH},
	{         Training_model8_Gfx,         &Training_unkCol8_ColH},
	{         Training_model9_Gfx,         &Training_unkCol9_ColH},
	{        Training_model10_Gfx,        &Training_unkCol10_ColH},
	{        Training_model11_Gfx,        &Training_unkCol11_ColH},
	{        Training_model12_Gfx,        &Training_unkCol12_ColH},
	{        Training_model13_Gfx,        &Training_unkCol13_ColH},
	{        Training_model14_Gfx,        &Training_unkCol14_ColH},
	{        Training_model15_Gfx,        &Training_unkCol15_ColH},
	{        Training_model16_Gfx,        &Training_unkCol16_ColH},
	{        Training_model17_Gfx,        &Training_unkCol17_ColH},
	{        Training_model18_Gfx,        &Training_unkCol18_ColH},
	{        Training_model19_Gfx,        &Training_unkCol19_ColH},
	{        Training_model20_Gfx,        &Training_unkCol20_ColH},
	{        Training_model21_Gfx,        &Training_unkCol21_ColH},
	{        Training_model22_Gfx,        &Training_unkCol22_ColH},
	{             Global_pole_Gfx,              &Global_pole_ColH}
};

extern ModelCollision Global_unk1_ColH;

rabObject Training_rabObjects[] = {
	{0, 100.0, 100.0, 100.0, &Global_unk1_ColH},
	{0, 100.0, 100.0, 100.0, &Global_unk1_ColH}
};

void func_800AA8F4(Collider*);

RoomObject Training_room0_objects[] = {
	{    {0.0,   0.0,     0.0}, {1.0,  1.0,  1.0}, ROT_NONE,                             0, OBJU_NORMAL, OBJM_NORMAL,    0.0,    0.0,     0.0, 0.0,       NULL,  0, 0,    0, 0, 0, 35, -1, -1, -1, &func_800AA8F4, NULL, NULL, 0,  7,  4, 4, 0, -1, 0, 0},
	{ {-600.0,   0.0, -1200.0}, {1.0,  1.0,  1.0}, ROT_NONE,                             0, OBJU_NORMAL, OBJM_NORMAL,    0.0,    0.0,     0.0, 0.0,       NULL,  0, 0,    0, 0, 0, 41, -1, -1, -1,           NULL, NULL, NULL, 0,  7,  4, 4, 0, -1, 0, 0},
	{  {600.0,   0.0, -1200.0}, {1.0,  1.0,  1.0}, ROT_NONE,                             0, OBJU_NORMAL, OBJM_NORMAL,    0.0,    0.0,     0.0, 0.0,       NULL,  0, 0,    0, 0, 0, 41, -1, -1, -1,           NULL, NULL, NULL, 0,  7,  4, 4, 0, -1, 0, 0},
	{ {-600.0,   0.0,  1500.0}, {1.0,  1.0,  1.0}, ROT_NONE,                             0, OBJU_NORMAL, OBJM_NORMAL,    0.0,    0.0,     0.0, 0.0,       NULL,  0, 0,    0, 0, 0, 41, -1, -1, -1,           NULL, NULL, NULL, 0,  7,  4, 4, 0, -1, 0, 0},
	{  {600.0,   0.0,  1500.0}, {1.0,  1.0,  1.0}, ROT_NONE,                             0, OBJU_NORMAL, OBJM_NORMAL,    0.0,    0.0,     0.0, 0.0,       NULL,  0, 0,    0, 0, 0, 41, -1, -1, -1,           NULL, NULL, NULL, 0, 34,  4, 4, 0, -1, 0, 0},
	{    {0.0,   0.0,  2600.0}, {1.0,  1.0,  1.0}, ROT_NONE,                             0, OBJU_NORMAL, OBJM_NORMAL,    0.0,    0.0,     0.0, 0.0,       NULL,  0, 0,    0, 0, 0, 55, -1, -1, -1,           NULL, NULL, NULL, 0,  3,  4, 4, 0, -1, 0, 0},
	{    {0.0,   0.0,  2600.0}, {1.0,  1.0,  1.0}, ROT_NONE,                             0, OBJU_NORMAL, OBJM_NORMAL,    0.0,    0.0,     0.0, 0.0,       NULL,  0, 0,    0, 0, 0,  3, -1, -1, -1,           NULL, NULL, NULL, 0,  3,  4, 4, 0, -1, 0, 0},
	{    {0.0,   0.0,  2600.0}, {1.0,  1.0,  1.0}, ROT_NONE,                             0,   OBJU_ZONE, OBJM_NORMAL,  400.0,  400.0,     0.0, 0.0, ZDIR_SOUTH,  1, 0,    0, 0, 0,  0, -1, -1, -1,           NULL, NULL, NULL, 0,  7, -1, 1, 0, -1, 0, 0},
	{    {0.0,   0.0,  2600.0}, {4.0,  4.0,  4.0}, ROT_NONE,                             0, OBJU_NORMAL, OBJM_NORMAL, 1400.0, 1000.0, -1000.0, 0.0,       NULL, 90, 0, 1000, 0, 0,  0, -1, -1, -1,           NULL, NULL, NULL, 0,  1,  0, 0, 0, -1, 0, 0},
	{{-1700.0,   0.0,   800.0}, {1.0,  1.0,  1.0}, ROT_NONE,                             0, OBJU_NORMAL, OBJM_NORMAL,    0.0,    0.0,     0.0, 0.0,       NULL,  0, 0,    0, 0, 0, 53, -1, -1, -1,           NULL, NULL, NULL, 0,  3,  4, 4, 0, -1, 0, 0},
	{{-1700.0,   0.0,   800.0}, {1.0,  1.0,  1.0}, ROT_NONE,                             0, OBJU_NORMAL, OBJM_NORMAL,    0.0,    0.0,     0.0, 0.0,       NULL,  0, 0,    0, 0, 0,  1, -1, -1, -1,           NULL, NULL, NULL, 0,  3,  4, 4, 0, -1, 0, 0},
	{{-1700.0,   0.0,   800.0}, {1.0,  1.0,  1.0}, ROT_NONE,                             0,   OBJU_ZONE, OBJM_NORMAL,  400.0,  400.0,     0.0, 0.0,  ZDIR_WEST,  1, 0,    0, 0, 0,  0, -1, -1, -1,           NULL, NULL, NULL, 0,  7, -1, 1, 0, -1, 0, 0},
	{{-1700.0,   0.0,   800.0}, {4.0,  4.0,  4.0}, ROT_NONE,                             0, OBJU_NORMAL, OBJM_NORMAL, 1400.0, 1000.0, -1000.0, 0.0,       NULL, 90, 0, 1000, 0, 0,  0, -1, -1, -1,           NULL, NULL, NULL, 0,  1,  0, 0, 0, -1, 0, 0},
	{{-1700.0,   0.0,  -800.0}, {1.0,  1.0,  1.0}, ROT_NONE,                             0, OBJU_NORMAL, OBJM_NORMAL,    0.0,    0.0,     0.0, 0.0,       NULL,  0, 0,    0, 0, 0, 53, -1, -1, -1,           NULL, NULL, NULL, 0,  3,  4, 4, 0, -1, 0, 0},
	{{-1700.0,   0.0,  -800.0}, {1.0,  1.0,  1.0}, ROT_NONE,                             0, OBJU_NORMAL, OBJM_NORMAL,    0.0,    0.0,     0.0, 0.0,       NULL,  0, 0,    0, 0, 0,  1, -1, -1, -1,           NULL, NULL, NULL, 0,  3,  4, 4, 0, -1, 0, 0},
	{{-1700.0,   0.0,  -800.0}, {1.0,  1.0,  1.0}, ROT_NONE,                             0,   OBJU_ZONE, OBJM_NORMAL,  400.0,  400.0,     0.0, 0.0,  ZDIR_WEST,  1, 0,    0, 0, 0,  0, -1, -1, -1,           NULL, NULL, NULL, 0,  7, -1, 1, 0, -1, 0, 0},
	{{-1700.0,   0.0,  -800.0}, {4.0,  4.0,  4.0}, ROT_NONE,                             0, OBJU_NORMAL, OBJM_NORMAL, 1400.0, 1000.0, -1000.0, 0.0,       NULL, 90, 0, 1000, 0, 0,  0, -1, -1, -1,           NULL, NULL, NULL, 0,  1,  0, 0, 0, -1, 0, 0},
	{ {1700.0,   0.0,   800.0}, {1.0,  1.0,  1.0}, ROT_NONE,                             0, OBJU_NORMAL, OBJM_NORMAL,    0.0,    0.0,     0.0, 0.0,       NULL,  0, 0,    0, 0, 0, 54, -1, -1, -1,           NULL, NULL, NULL, 0,  3,  4, 4, 0, -1, 0, 0},
	{ {1700.0,   0.0,   800.0}, {1.0,  1.0,  1.0}, ROT_NONE,                             0, OBJU_NORMAL, OBJM_NORMAL,    0.0,    0.0,     0.0, 0.0,       NULL,  0, 0,    0, 0, 0,  2, -1, -1, -1,           NULL, NULL, NULL, 0,  3,  4, 4, 0, -1, 0, 0},
	{ {1700.0,   0.0,   800.0}, {1.0,  1.0,  1.0}, ROT_NONE,                             0,   OBJU_ZONE, OBJM_NORMAL,  400.0,  400.0,     0.0, 0.0,  ZDIR_EAST,  1, 0,    0, 0, 0,  0, -1, -1, -1,           NULL, NULL, NULL, 0,  7, -1, 1, 0, -1, 0, 0},
	{ {1700.0,   0.0,   800.0}, {4.0,  4.0,  4.0}, ROT_NONE,                             0, OBJU_NORMAL, OBJM_NORMAL, 1400.0, 1000.0, -1000.0, 0.0,       NULL, 90, 0, 1000, 0, 0,  0, -1, -1, -1,           NULL, NULL, NULL, 0,  1,  0, 0, 0, -1, 0, 0},
	{ {1700.0,   0.0,  -800.0}, {1.0,  1.0,  1.0}, ROT_NONE,                             0, OBJU_NORMAL, OBJM_NORMAL,    0.0,    0.0,     0.0, 0.0,       NULL,  0, 0,    0, 0, 0, 54, -1, -1, -1,           NULL, NULL, NULL, 0,  3,  4, 4, 0, -1, 0, 0},
	{ {1700.0,   0.0,  -800.0}, {1.0,  1.0,  1.0}, ROT_NONE,                             0, OBJU_NORMAL, OBJM_NORMAL,    0.0,    0.0,     0.0, 0.0,       NULL,  0, 0,    0, 0, 0,  2, -1, -1, -1,           NULL, NULL, NULL, 0,  3,  4, 4, 0, -1, 0, 0},
	{ {1700.0,   0.0,  -800.0}, {1.0,  1.0,  1.0}, ROT_NONE,                             0,   OBJU_ZONE, OBJM_NORMAL,  400.0,  400.0,     0.0, 0.0,  ZDIR_EAST,  1, 0,    0, 0, 0,  0, -1, -1, -1,           NULL, NULL, NULL, 0,  7, -1, 1, 0, -1, 0, 0},
	{ {1700.0,   0.0,  -800.0}, {4.0,  4.0,  4.0}, ROT_NONE,                             0, OBJU_NORMAL, OBJM_NORMAL, 1400.0, 1000.0, -1000.0, 0.0,       NULL, 90, 0, 1000, 0, 0,  0, -1, -1, -1,           NULL, NULL, NULL, 0,  1,  0, 0, 0, -1, 0, 0},
	{    {0.0,   0.0, -1800.0}, {1.0,  1.0,  1.0}, ROT_NONE,                             0, OBJU_NORMAL, OBJM_NORMAL,    0.0,    0.0,     0.0, 0.0,       NULL,  0, 0,    0, 0, 0, 56, -1, -1, -1,           NULL, NULL, NULL, 0,  3,  4, 4, 0, -1, 0, 0},
	{    {0.0,   0.0, -1800.0}, {1.0,  1.0,  1.0}, ROT_NONE,                             0, OBJU_NORMAL, OBJM_NORMAL,    0.0,    0.0,     0.0, 0.0,       NULL,  0, 0,    0, 0, 0,  4, -1, -1, -1,           NULL, NULL, NULL, 0,  3,  4, 4, 0, -1, 0, 0},
	{    {0.0,   0.0, -1800.0}, {1.0,  1.0,  1.0}, ROT_NONE,                             0,   OBJU_ZONE, OBJM_NORMAL,  400.0,  400.0,     0.0, 0.0, ZDIR_NORTH,  1, 0,    0, 0, 0,  0, -1, -1, -1,           NULL, NULL, NULL, 0,  7, -1, 1, 0, -1, 0, 0},
	{    {0.0,   0.0, -1800.0}, {4.0,  4.0,  4.0}, ROT_NONE,                             0, OBJU_NORMAL, OBJM_NORMAL, 1400.0, 1000.0, -1000.0, 0.0,       NULL, 90, 0, 1000, 0, 0,  0, -1, -1, -1,           NULL, NULL, NULL, 0,  1,  0, 0, 0, -1, 0, 0},
	{{-1500.0, 400.0,   100.0}, {1.0, 0.75, 0.75},    ROT_Y, DEGREES_TO_RADIANS_2PI(180.0), OBJU_NORMAL, OBJM_NORMAL,    0.0,    0.0,     0.0, 0.0,       NULL,  0, 0,    0, 0, 0, 27, -1, -1, -1,           NULL, NULL, NULL, 0,  0,  4, 4, 0, -1, 0, 0},
	{{-1500.0, 400.0,  1400.0}, {1.0, 0.75, 0.75},    ROT_Y, DEGREES_TO_RADIANS_2PI(180.0), OBJU_NORMAL, OBJM_NORMAL,    0.0,    0.0,     0.0, 0.0,       NULL,  0, 0,    0, 0, 0, 27, -1, -1, -1,           NULL, NULL, NULL, 0,  0,  4, 4, 0, -1, 0, 0},
	NULL_OBJECT
};


SpriteActor Training_room0_sprites[] = {
	{18, SPRITE_BLANK, {-750.0, 0.0, 2050.0}, {100.0, 200.0, 200.0}, 1, 0.0, 60.0, 0, 0.0, 0.0, 0.0, 0, {31, 6, 0, 0}},
	NULL_SPRITE
};


SpriteActor Training_room1_sprites[] = {
	{18, SPRITE_BLANK, {1500.0, 200.0, 0.0}, {100.0, 200.0, 200.0}, 1, 0.0, 60.0, 0, 0.0, 0.0, 0.0, 0, {30, 7, 0, 0}},
	NULL_SPRITE
};


SpriteActor Training_room4_sprites[] = {
	{18, SPRITE_BLANK, {-3500.0, 0.0, -800.0}, {100.0, 200.0, 200.0}, 1, 0.0, 60.0, 0, 0.0, 0.0, 0.0, 0, {29, 8, 0, 0}},
	NULL_SPRITE
};


SpriteActor Training_room2_sprites[] = {
	{18, SPRITE_BLANK, {1800.0, 0.0, 200.0}, {100.0, 200.0, 200.0}, 1, 0.0, 60.0, 0, 0.0, 0.0, 0.0, 0, {28, 9, 0, 0}},
	NULL_SPRITE
};


SpriteActor Training_room5_sprites[] = {
	{18, SPRITE_BLANK, {-1300.0, 0.0, -1800.0}, {100.0, 200.0, 200.0}, 1, 0.0, 60.0, 0, 0.0, 0.0, 0.0, 0, {27, 10, 0, 0}},
	NULL_SPRITE
};


SpriteActor Training_room3_sprites[] = {
	{18, SPRITE_BLANK, {-700.0, 0.0, 1500.0}, {100.0, 200.0, 200.0}, 1, 0.0, 60.0, 0, 0.0, 0.0, 0.0, 0, {26, 11, 0, 0}},
	NULL_SPRITE
};


RoomObject Training_room1_objects[] = {
	{   {0.0,  200.0,    0.0}, {1.0, 1.0, 1.0},    ROT_Y, DEGREES_TO_RADIANS_2PI(180.0),    OBJU_NORMAL, OBJM_NORMAL,    0.0,    0.0,     0.0, 0.0,      NULL,  0, 0,    0, 0, 0, 36, -1, -1, -1, NULL, NULL, NULL, 0,  7,  4, 4, 0, -1, 0, 0},
	{{-600.0,    5.0,   50.0}, {1.0, 1.0, 1.0},    ROT_Y, DEGREES_TO_RADIANS_2PI(180.0),    OBJU_NORMAL, OBJM_NORMAL,    0.0,    0.0,     0.0, 0.0,      NULL,  0, 0,    0, 0, 0, 42, -1, -1, -1, NULL, NULL, NULL, 0,  0,  4, 4, 0, -1, 0, 0},
	{{2200.0,  200.0,  500.0}, {1.0, 1.0, 1.0}, ROT_NONE,                             0,    OBJU_NORMAL, OBJM_NORMAL,    0.0,    0.0,     0.0, 0.0,      NULL,  0, 0,    0, 0, 0, 54, -1, -1, -1, NULL, NULL, NULL, 0,  3,  4, 4, 0, -1, 0, 0},
	{{2200.0,  200.0,  500.0}, {1.0, 1.0, 1.0}, ROT_NONE,                             0,    OBJU_NORMAL, OBJM_NORMAL,    0.0,    0.0,     0.0, 0.0,      NULL,  0, 0,    0, 0, 0,  2, -1, -1, -1, NULL, NULL, NULL, 0,  3,  4, 4, 0, -1, 0, 0},
	{{2200.0,  200.0,  500.0}, {1.0, 1.0, 1.0}, ROT_NONE,                             0,      OBJU_ZONE, OBJM_NORMAL,  400.0,  400.0,     0.0, 0.0, ZDIR_EAST,  1, 0,    0, 0, 0,  0, -1, -1, -1, NULL, NULL, NULL, 0,  7, -1, 1, 0, -1, 0, 0},
	{{2200.0,  200.0,  500.0}, {4.0, 4.0, 4.0}, ROT_NONE,                             0,    OBJU_NORMAL, OBJM_NORMAL, 1400.0, 1000.0, -1000.0, 0.0,      NULL, 90, 0, 1000, 0, 0,  0, -1, -1, -1, NULL, NULL, NULL, 0,  1,  0, 0, 0, -1, 0, 0},
	{{1900.0,  200.0, 1400.0}, {1.0, 1.0, 1.0}, ROT_NONE,                             0,    OBJU_NORMAL, OBJM_NORMAL,    0.0,    0.0,     0.0, 0.0,      NULL,  0, 0,    0, 0, 0, 41, -1, -1, -1, NULL, NULL, NULL, 0, 34,  4, 4, 0, -1, 0, 0},
	{{-500.0, -200.0,    0.0}, {1.0, 1.0, 1.0}, ROT_NONE,                             0, OBJU_FLAG_ZONE, OBJM_NORMAL, 3000.0, 2400.0,  3000.0, 0.0,      NULL,  0, 0,    0, 0, 0,  0, -1,  1, -1, NULL, NULL, NULL, 0,  7, -1, 1, 0, -1, 0, 0},
	NULL_OBJECT
};


RoomActor Training_room1_actors[] = {
	{CHOCO_KID,  {-600.0, 0.0,   50.0}, 0.0, -1000.0, 1000.0, -1000.0, 0.0, -1000.0, 1000.0, 0, 3.0, 1.0, 12.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0},
	{CHOCO_KID,  {-800.0, 0.0,   50.0}, 0.0, -1000.0, 1000.0, -1000.0, 0.0, -1000.0, 1000.0, 0, 3.0, 1.0, 12.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0},
	{CHOCO_KID, {-1000.0, 0.0,   50.0}, 0.0, -1000.0, 1000.0, -1000.0, 0.0, -1000.0, 1000.0, 0, 3.0, 1.0, 12.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0},
	{CHOCO_KID,  {-400.0, 0.0,   50.0}, 0.0, -1000.0, 1000.0, -1000.0, 0.0, -1000.0, 1000.0, 0, 3.0, 1.0, 12.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0},
	{CHOCO_KID,  {-200.0, 0.0,   50.0}, 0.0, -1000.0, 1000.0, -1000.0, 0.0, -1000.0, 1000.0, 0, 3.0, 1.0, 12.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0},
	{CHOCO_KID,  {-600.0, 0.0, -150.0}, 0.0, -1000.0, 1000.0, -1000.0, 0.0, -1000.0, 1000.0, 0, 3.0, 1.0, 12.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0},
	{CHOCO_KID,  {-800.0, 0.0, -150.0}, 0.0, -1000.0, 1000.0, -1000.0, 0.0, -1000.0, 1000.0, 0, 3.0, 1.0, 12.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0},
	{CHOCO_KID, {-1000.0, 0.0, -150.0}, 0.0, -1000.0, 1000.0, -1000.0, 0.0, -1000.0, 1000.0, 0, 3.0, 1.0, 12.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0},
	{CHOCO_KID,  {-400.0, 0.0, -150.0}, 0.0, -1000.0, 1000.0, -1000.0, 0.0, -1000.0, 1000.0, 0, 3.0, 1.0, 12.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0},
	{CHOCO_KID,  {-200.0, 0.0, -150.0}, 0.0, -1000.0, 1000.0, -1000.0, 0.0, -1000.0, 1000.0, 0, 3.0, 1.0, 12.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0},
	{CHOCO_KID,  {-600.0, 0.0,  250.0}, 0.0, -1000.0, 1000.0, -1000.0, 0.0, -1000.0, 1000.0, 0, 3.0, 1.0, 12.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0},
	{CHOCO_KID,  {-800.0, 0.0,  250.0}, 0.0, -1000.0, 1000.0, -1000.0, 0.0, -1000.0, 1000.0, 0, 3.0, 1.0, 12.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0},
	{CHOCO_KID, {-1000.0, 0.0,  250.0}, 0.0, -1000.0, 1000.0, -1000.0, 0.0, -1000.0, 1000.0, 0, 3.0, 1.0, 12.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0},
	{CHOCO_KID,  {-400.0, 0.0,  250.0}, 0.0, -1000.0, 1000.0, -1000.0, 0.0, -1000.0, 1000.0, 0, 3.0, 1.0, 12.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0},
	{CHOCO_KID,  {-200.0, 0.0,  250.0}, 0.0, -1000.0, 1000.0, -1000.0, 0.0, -1000.0, 1000.0, 0, 3.0, 1.0, 12.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0},
	{CHOCO_KID,  {-600.0, 0.0, -350.0}, 0.0, -1000.0, 1000.0, -1000.0, 0.0, -1000.0, 1000.0, 0, 3.0, 1.0, 12.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0},
	{CHOCO_KID,  {-800.0, 0.0, -350.0}, 0.0, -1000.0, 1000.0, -1000.0, 0.0, -1000.0, 1000.0, 0, 3.0, 1.0, 12.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0},
	{CHOCO_KID, {-1000.0, 0.0, -350.0}, 0.0, -1000.0, 1000.0, -1000.0, 0.0, -1000.0, 1000.0, 0, 3.0, 1.0, 12.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0},
	{CHOCO_KID,  {-400.0, 0.0, -350.0}, 0.0, -1000.0, 1000.0, -1000.0, 0.0, -1000.0, 1000.0, 0, 3.0, 1.0, 12.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0},
	{CHOCO_KID,  {-200.0, 0.0, -350.0}, 0.0, -1000.0, 1000.0, -1000.0, 0.0, -1000.0, 1000.0, 0, 3.0, 1.0, 12.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0},
	{CHOCO_KID,  {-600.0, 0.0,  450.0}, 0.0, -1000.0, 1000.0, -1000.0, 0.0, -1000.0, 1000.0, 0, 3.0, 1.0, 12.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0},
	{CHOCO_KID,  {-800.0, 0.0,  450.0}, 0.0, -1000.0, 1000.0, -1000.0, 0.0, -1000.0, 1000.0, 0, 3.0, 1.0, 12.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0},
	{CHOCO_KID, {-1000.0, 0.0,  450.0}, 0.0, -1000.0, 1000.0, -1000.0, 0.0, -1000.0, 1000.0, 0, 3.0, 1.0, 12.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0},
	{CHOCO_KID,  {-400.0, 0.0,  450.0}, 0.0, -1000.0, 1000.0, -1000.0, 0.0, -1000.0, 1000.0, 0, 3.0, 1.0, 12.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0},
	{CHOCO_KID,  {-200.0, 0.0,  450.0}, 0.0, -1000.0, 1000.0, -1000.0, 0.0, -1000.0, 1000.0, 0, 3.0, 1.0, 12.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0},
	{CHOCO_KID,  {-600.0, 0.0, -550.0}, 0.0, -1000.0, 1000.0, -1000.0, 0.0, -1000.0, 1000.0, 0, 3.0, 1.0, 12.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0},
	{CHOCO_KID,  {-800.0, 0.0, -550.0}, 0.0, -1000.0, 1000.0, -1000.0, 0.0, -1000.0, 1000.0, 0, 3.0, 1.0, 12.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0},
	{CHOCO_KID, {-1000.0, 0.0, -550.0}, 0.0, -1000.0, 1000.0, -1000.0, 0.0, -1000.0, 1000.0, 0, 3.0, 1.0, 12.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0},
	{CHOCO_KID,  {-400.0, 0.0, -550.0}, 0.0, -1000.0, 1000.0, -1000.0, 0.0, -1000.0, 1000.0, 0, 3.0, 1.0, 12.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0},
	{CHOCO_KID,  {-200.0, 0.0, -550.0}, 0.0, -1000.0, 1000.0, -1000.0, 0.0, -1000.0, 1000.0, 0, 3.0, 1.0, 12.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0},
	{CHOCO_KID,  {-600.0, 0.0,  650.0}, 0.0, -1000.0, 1000.0, -1000.0, 0.0, -1000.0, 1000.0, 0, 3.0, 1.0, 12.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0},
	{CHOCO_KID,  {-800.0, 0.0,  650.0}, 0.0, -1000.0, 1000.0, -1000.0, 0.0, -1000.0, 1000.0, 0, 3.0, 1.0, 12.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0},
	{CHOCO_KID, {-1000.0, 0.0,  650.0}, 0.0, -1000.0, 1000.0, -1000.0, 0.0, -1000.0, 1000.0, 0, 3.0, 1.0, 12.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0},
	{CHOCO_KID,  {-400.0, 0.0,  650.0}, 0.0, -1000.0, 1000.0, -1000.0, 0.0, -1000.0, 1000.0, 0, 3.0, 1.0, 12.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0},
	{CHOCO_KID,  {-200.0, 0.0,  650.0}, 0.0, -1000.0, 1000.0, -1000.0, 0.0, -1000.0, 1000.0, 0, 3.0, 1.0, 12.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0},
	NULL_ACTOR
};


RoomObject Training_room4_objects[] = {
	{    {0.0,    0.0,    0.0}, {1.0, 1.0, 1.0},    ROT_Y, DEGREES_TO_RADIANS_2PI(180.0),    OBJU_NORMAL, OBJM_NORMAL,    0.0,    0.0,     0.0, 0.0,      NULL,  0, 0,    0, 0, 0, 37, -1, -1, -1, NULL, NULL, NULL, 0,  7,  4, 4, 0, -1, 0, 0},
	{{-1500.0,    0.0,    0.0}, {1.0, 1.0, 1.0},    ROT_Y, DEGREES_TO_RADIANS_2PI(180.0),    OBJU_NORMAL, OBJM_NORMAL,    0.0,    0.0,     0.0, 0.0,      NULL,  0, 0,    0, 0, 0, 43, -1, -1, -1, NULL, NULL, NULL, 0,  7,  4, 4, 0, -1, 0, 0},
	{ {-100.0,    0.0,  200.0}, {1.0, 1.0, 1.0},    ROT_Y, DEGREES_TO_RADIANS_2PI(180.0),    OBJU_NORMAL, OBJM_NORMAL,    0.0,    0.0,     0.0, 0.0,      NULL,  0, 0,    0, 0, 0, 43, -1, -1, -1, NULL, NULL, NULL, 0,  7,  4, 4, 0, -1, 0, 0},
	{ {1100.0,    0.0,  900.0}, {1.0, 1.0, 1.0},    ROT_Y, DEGREES_TO_RADIANS_2PI(180.0),    OBJU_NORMAL, OBJM_NORMAL,    0.0,    0.0,     0.0, 0.0,      NULL,  0, 0,    0, 0, 0, 43, -1, -1, -1, NULL, NULL, NULL, 0,  7,  4, 4, 0, -1, 0, 0},
	{ {2200.0,    0.0, -200.0}, {1.0, 1.0, 1.0},    ROT_Y, DEGREES_TO_RADIANS_2PI(180.0),    OBJU_NORMAL, OBJM_NORMAL,    0.0,    0.0,     0.0, 0.0,      NULL,  0, 0,    0, 0, 0, 43, -1, -1, -1, NULL, NULL, NULL, 0,  7,  4, 4, 0, -1, 0, 0},
	{{-1500.0,    0.0,    0.0}, {1.0, 1.0, 1.0},    ROT_Y, DEGREES_TO_RADIANS_2PI(180.0),    OBJU_NORMAL, OBJM_NORMAL,    0.0,    0.0,     0.0, 0.0,      NULL,  0, 0,    0, 0, 0, 57, -1, -1, -1, NULL, NULL, NULL, 0,  2,  4, 4, 0, -1, 0, 0},
	{ {-100.0,    0.0,  200.0}, {1.0, 1.0, 1.0},    ROT_Y, DEGREES_TO_RADIANS_2PI(180.0),    OBJU_NORMAL, OBJM_NORMAL,    0.0,    0.0,     0.0, 0.0,      NULL,  0, 0,    0, 0, 0, 57, -1, -1, -1, NULL, NULL, NULL, 0,  2,  4, 4, 0, -1, 0, 0},
	{ {1100.0,    0.0,  900.0}, {1.0, 1.0, 1.0},    ROT_Y, DEGREES_TO_RADIANS_2PI(180.0),    OBJU_NORMAL, OBJM_NORMAL,    0.0,    0.0,     0.0, 0.0,      NULL,  0, 0,    0, 0, 0, 57, -1, -1, -1, NULL, NULL, NULL, 0,  2,  4, 4, 0, -1, 0, 0},
	{ {2200.0,    0.0, -200.0}, {1.0, 1.0, 1.0},    ROT_Y, DEGREES_TO_RADIANS_2PI(180.0),    OBJU_NORMAL, OBJM_NORMAL,    0.0,    0.0,     0.0, 0.0,      NULL,  0, 0,    0, 0, 0, 57, -1, -1, -1, NULL, NULL, NULL, 0,  2,  4, 4, 0, -1, 0, 0},
	{ {3400.0,    0.0,  100.0}, {1.0, 1.0, 1.0},    ROT_Y, DEGREES_TO_RADIANS_2PI(180.0),    OBJU_NORMAL, OBJM_NORMAL,    0.0,    0.0,     0.0, 0.0,      NULL,  0, 0,    0, 0, 0, 57, -1, -1, -1, NULL, NULL, NULL, 0,  2,  4, 4, 0, -1, 0, 0},
	{{-3900.0,    0.0,    0.0}, {1.0, 1.0, 1.0}, ROT_NONE,                             0,    OBJU_NORMAL, OBJM_NORMAL,    0.0,    0.0,     0.0, 0.0,      NULL,  0, 0,    0, 0, 0, 53, -1, -1, -1, NULL, NULL, NULL, 0,  3,  4, 4, 0, -1, 0, 0},
	{{-3900.0,    0.0,    0.0}, {1.0, 1.0, 1.0}, ROT_NONE,                             0,    OBJU_NORMAL, OBJM_NORMAL,    0.0,    0.0,     0.0, 0.0,      NULL,  0, 0,    0, 0, 0,  1, -1, -1, -1, NULL, NULL, NULL, 0,  3,  4, 4, 0, -1, 0, 0},
	{{-3900.0,    0.0,    0.0}, {1.0, 1.0, 1.0}, ROT_NONE,                             0,      OBJU_ZONE, OBJM_NORMAL,  400.0,  400.0,     0.0, 0.0, ZDIR_WEST,  1, 0,    0, 0, 0,  0, -1, -1, -1, NULL, NULL, NULL, 0,  7, -1, 1, 0, -1, 0, 0},
	{{-3900.0,    0.0,    0.0}, {4.0, 4.0, 4.0}, ROT_NONE,                             0,    OBJU_NORMAL, OBJM_NORMAL, 1400.0, 1000.0, -1000.0, 0.0,      NULL, 90, 0, 1000, 0, 0,  0, -1, -1, -1, NULL, NULL, NULL, 0,  1,  0, 0, 0, -1, 0, 0},
	{{-3600.0, -900.0,  900.0}, {1.0, 3.0, 1.0}, ROT_NONE,                             0,    OBJU_NORMAL, OBJM_NORMAL,    0.0,    0.0,     0.0, 0.0,      NULL,  0, 0,    0, 0, 0, 41, -1, -1, -1, NULL, NULL, NULL, 0, 34,  4, 4, 0, -1, 0, 0},
	{ {-800.0, -900.0,    0.0}, {1.0, 1.0, 1.0}, ROT_NONE,                             0, OBJU_FLAG_ZONE, OBJM_NORMAL, 4800.0, 3800.0,  2000.0, 0.0,      NULL,  0, 0,    0, 0, 0,  0, -1,  1, -1, NULL, NULL, NULL, 0,  7, -1, 1, 0, -1, 0, 0},
	{ {3450.0,    0.0, -150.0}, {1.0, 1.0, 1.0}, ROT_NONE,                             0, OBJU_FLAG_ZONE, OBJM_NORMAL,  500.0, 2000.0,  1700.0, 0.0,      NULL,  0, 0,    0, 0, 0,  0, -1,  2, -1, NULL, NULL, NULL, 0,  7, -1, 1, 0, -1, 0, 0},
	NULL_OBJECT
};


RoomObject Training_room2_objects[] = {
	{   {0.0,   0.0,    0.0}, {1.0, 1.0, 1.0}, ROT_NONE, 0,    OBJU_NORMAL,   OBJM_DOOR,    0.0,  500.0,     0.0, 0.0,      NULL, 20, -1,   40, 0, 0, 52, -1, -1,  1, NULL, NULL, NULL, 0,  3,  0, 4, 0, -1, 0, 0},
	{   {0.0,   0.0,    0.0}, {1.0, 1.0, 1.0}, ROT_NONE, 0,    OBJU_NORMAL, OBJM_NORMAL,    0.0,    0.0,     0.0, 0.0,      NULL,  0,  0,    0, 0, 0, 38, -1, -1, -1, NULL, NULL, NULL, 0,  7,  4, 4, 0, -1, 0, 0},
	{   {0.0,   0.0,    0.0}, {1.0, 1.0, 1.0}, ROT_NONE, 0,    OBJU_NORMAL, OBJM_NORMAL,    0.0,    0.0,     0.0, 0.0,      NULL,  0,  0,    0, 0, 0, 44, -1, -1, -1, NULL, NULL, NULL, 0,  7,  4, 4, 0, -1, 0, 0},
	{   {0.0,   0.0,    0.0}, {1.0, 1.0, 1.0}, ROT_NONE, 0,    OBJU_NORMAL, OBJM_NORMAL,    0.0,    0.0,     0.0, 0.0,      NULL,  0,  0,    0, 0, 0, 46, -1, -1, -1, NULL, NULL, NULL, 0,  7,  4, 4, 0, -1, 0, 0},
	{   {0.0,   0.0,  500.0}, {1.0, 1.0, 1.0}, ROT_NONE, 0,    OBJU_NORMAL, OBJM_NORMAL,    0.0,    0.0,     0.0, 0.0,      NULL,  0,  0,    0, 0, 0, 45, -1, -1, -1, NULL, NULL, NULL, 0,  7,  4, 4, 0, -1, 0, 0},
	{{2200.0,   0.0, 1100.0}, {1.0, 1.0, 1.0}, ROT_NONE, 0,    OBJU_NORMAL, OBJM_NORMAL,    0.0,    0.0,     0.0, 0.0,      NULL,  0,  0,    0, 0, 0, 54, -1, -1, -1, NULL, NULL, NULL, 0,  3,  4, 4, 0, -1, 0, 0},
	{{2200.0,   0.0, 1100.0}, {1.0, 1.0, 1.0}, ROT_NONE, 0,    OBJU_NORMAL, OBJM_NORMAL,    0.0,    0.0,     0.0, 0.0,      NULL,  0,  0,    0, 0, 0,  2, -1, -1, -1, NULL, NULL, NULL, 0,  3,  4, 4, 0, -1, 0, 0},
	{{2200.0,   0.0, 1100.0}, {1.0, 1.0, 1.0}, ROT_NONE, 0,      OBJU_ZONE, OBJM_NORMAL,  400.0,  400.0,     0.0, 0.0, ZDIR_EAST,  1,  0,    0, 0, 0,  0, -1, -1, -1, NULL, NULL, NULL, 0,  7, -1, 1, 0, -1, 0, 0},
	{{2200.0,   0.0, 1100.0}, {4.0, 4.0, 4.0}, ROT_NONE, 0,    OBJU_NORMAL, OBJM_NORMAL, 1400.0, 1000.0, -1000.0, 0.0,      NULL, 90,  0, 1000, 0, 0,  0, -1, -1, -1, NULL, NULL, NULL, 0,  1,  0, 0, 0, -1, 0, 0},
	{   {0.0, 400.0, 1400.0}, {1.2, 1.0, 1.2}, ROT_NONE, 0,    OBJU_NORMAL, OBJM_NORMAL,    0.0,    0.0,     0.0, 0.0,      NULL,  0,  0,    0, 0, 0, 41, -1, -1, -1, NULL, NULL, NULL, 0, 34,  4, 4, 0, -1, 0, 0},
	{   {0.0, 400.0,  900.0}, {1.0, 1.0, 1.0}, ROT_NONE, 0, OBJU_FLAG_ZONE, OBJM_NORMAL, 1000.0, 1600.0,  1200.0, 0.0,      NULL,  0,  0,    0, 0, 0,  0, -1,  1, -1, NULL, NULL, NULL, 0,  7, -1, 1, 0, -1, 0, 0},
	NULL_OBJECT
};


RoomActor Training_room2_actors[] = {
	{         GRENADE, {-1300.0,  400.0,  -900.0}, 1.0, -900.0, 900.0, -900.0,  900.0, -900.0, 900.0, 0, 0.0, 5.0,  0.0,  0.0, 0.0, 0.0, 0.0, 0.0, 210.0, 10.0, 0.0, 0.0},
	{         GRENADE,  {-900.0,  400.0, -1100.0}, 1.0, -900.0, 900.0, -900.0,  900.0, -900.0, 900.0, 0, 0.0, 5.0,  0.0,  0.0, 0.0, 0.0, 0.0, 0.0, 210.0, 10.0, 0.0, 0.0},
	{         GRENADE,  {-400.0,  400.0, -1300.0}, 1.0, -900.0, 900.0, -900.0,  900.0, -900.0, 900.0, 0, 0.0, 5.0,  0.0,  0.0, 0.0, 0.0, 0.0, 0.0, 210.0, 10.0, 0.0, 0.0},
	{         GRENADE,     {0.0,  400.0, -1300.0}, 1.0, -900.0, 900.0, -900.0,  900.0, -900.0, 900.0, 0, 0.0, 5.0,  0.0,  0.0, 0.0, 0.0, 0.0, 0.0, 210.0, 10.0, 0.0, 0.0},
	{         GRENADE,     {0.0,  400.0, -1300.0}, 1.0, -900.0, 900.0, -900.0,  900.0, -900.0, 900.0, 0, 0.0, 5.0,  0.0,  0.0, 0.0, 0.0, 0.0, 0.0, 210.0, 10.0, 0.0, 0.0},
	{         GRENADE,   {500.0,  400.0, -1300.0}, 1.0, -900.0, 900.0, -900.0,  900.0, -900.0, 900.0, 0, 0.0, 5.0,  0.0,  0.0, 0.0, 0.0, 0.0, 0.0, 210.0, 10.0, 0.0, 0.0},
	{         GRENADE,  {1000.0,  400.0, -1100.0}, 1.0, -900.0, 900.0, -900.0,  900.0, -900.0, 900.0, 0, 0.0, 5.0,  0.0,  0.0, 0.0, 0.0, 0.0, 0.0, 210.0, 10.0, 0.0, 0.0},
	{         GRENADE,  {1300.0,  400.0,  -900.0}, 1.0, -900.0, 900.0, -900.0,  900.0, -900.0, 900.0, 0, 0.0, 5.0,  0.0,  0.0, 0.0, 0.0, 0.0, 0.0, 210.0, 10.0, 0.0, 0.0},
	{UNK_FIRE_SPAWNER,  {-400.0, 1000.0,   550.0}, 0.0, -100.0, 100.0,  400.0, 1200.0, -100.0, 100.0, 0, 2.0, 2.0, 25.0, 10.0, 0.0, 0.0, 0.0, 0.0,   0.0, 30.0, 2.0, 1.0},
	NULL_ACTOR
};


RoomObject Training_room5_objects[] = {
	{    {0.0,    0.0,     0.0}, {1.0,      1.0, 1.0},    ROT_Y, DEGREES_TO_RADIANS_2PI(180.0),    OBJU_NORMAL, OBJM_NORMAL,     0.0,    0.0,     0.0,   0.0,      NULL,  0, 0,    0, 0, 0, 39, -1, -1, -1, NULL, NULL, NULL, 0,  7,  4, 4, 0, -1, 0, 0},
	{    {0.0,    0.0,     0.0}, {1.0,      1.0, 1.0},    ROT_Y, DEGREES_TO_RADIANS_2PI(180.0),    OBJU_NORMAL, OBJM_NORMAL,     0.0,    0.0,     0.0,   0.0,      NULL,  0, 0,    0, 0, 0, 47, -1, -1, -1, NULL, NULL, NULL, 0,  7,  4, 4, 0, -1, 0, 0},
	{    {0.0,    0.0,     0.0}, {1.0,      1.0, 1.0},    ROT_Y, DEGREES_TO_RADIANS_2PI(180.0),    OBJU_NORMAL, OBJM_NORMAL,     0.0,    0.0,     0.0,   0.0,      NULL,  0, 0,    0, 0, 0, 51, -1, -1, -1, NULL, NULL, NULL, 0,  7,  4, 4, 0, -1, 0, 0},
	{  {500.0,    0.0, -1700.0}, {1.0,      1.0, 1.0}, ROT_NONE,                             0,    OBJU_NORMAL, OBJM_NORMAL,     0.0,    0.0,     0.0,   0.0,      NULL,  0, 0,    0, 0, 0, 48, -1, -1, -1, NULL, NULL, NULL, 0,  7,  4, 4, 0, -1, 0, 0},
	{ {1700.0,    0.0,  -500.0}, {1.0,      1.0, 1.0}, ROT_NONE,                             0,    OBJU_NORMAL, OBJM_NORMAL,     0.0,    0.0,     0.0,   0.0,      NULL,  0, 0,    0, 0, 0, 48, -1, -1, -1, NULL, NULL, NULL, 0,  7,  4, 4, 0, -1, 0, 0},
	{  {300.0,    0.0,   100.0}, {1.0,      1.0, 1.0}, ROT_NONE,                             0,    OBJU_NORMAL, OBJM_NORMAL,     0.0,    0.0,     0.0,   0.0,      NULL,  0, 0,    0, 0, 0, 48, -1, -1, -1, NULL, NULL, NULL, 0,  7,  4, 4, 0, -1, 0, 0},
	{ {1200.0,    0.0,  1200.0}, {1.0,      1.0, 1.0},    ROT_Y, DEGREES_TO_RADIANS_2PI(225.0),    OBJU_NORMAL, OBJM_NORMAL,     0.0,    0.0,     0.0,   0.0,      NULL,  0, 0,    0, 0, 0, 48, -1, -1, -1, NULL, NULL, NULL, 0,  7,  4, 4, 0, -1, 0, 0},
	{ {-400.0,    0.0,  1700.0}, {1.0,      1.0, 1.0}, ROT_NONE,                             0,    OBJU_NORMAL, OBJM_NORMAL, -3010.0, -200.0,     0.0, -90.0,      NULL, 20, 0,   40, 0, 0, 49, -1,  2, -1, NULL, NULL, NULL, 0,  7,  4, 4, 0, -1, 0, 0},
	{ {-200.0, -900.0, -1700.0}, {1.0, 6.111111, 1.0}, ROT_NONE,                             0,    OBJU_NORMAL, OBJM_NORMAL,     0.0,    0.0,     0.0,   0.0,      NULL,  0, 0,    0, 0, 0, 57, -1, -1, -1, NULL, NULL, NULL, 0,  2,  4, 4, 0, -1, 0, 0},
	{ {1100.0, -900.0, -1100.0}, {1.0, 6.111111, 1.0}, ROT_NONE,                             0,    OBJU_NORMAL, OBJM_NORMAL,     0.0,    0.0,     0.0,   0.0,      NULL,  0, 0,    0, 0, 0, 57, -1, -1, -1, NULL, NULL, NULL, 0,  2,  4, 4, 0, -1, 0, 0},
	{ {1000.0, -900.0,  -100.0}, {1.0, 6.111111, 1.0}, ROT_NONE,                             0,    OBJU_NORMAL, OBJM_NORMAL,     0.0,    0.0,     0.0,   0.0,      NULL,  0, 0,    0, 0, 0, 57, -1, -1, -1, NULL, NULL, NULL, 0,  2,  4, 4, 0, -1, 0, 0},
	{  {800.0, -900.0,   700.0}, {1.0, 6.111111, 1.0}, ROT_NONE,                             0,    OBJU_NORMAL, OBJM_NORMAL,     0.0,    0.0,     0.0,   0.0,      NULL,  0, 0,    0, 0, 0, 57, -1, -1, -1, NULL, NULL, NULL, 0,  2,  4, 4, 0, -1, 0, 0},
	{  {550.0, -900.0,  1900.0}, {1.0, 6.111111, 1.0}, ROT_NONE,                             0,    OBJU_NORMAL, OBJM_NORMAL,     0.0,    0.0,     0.0,   0.0,      NULL,  0, 0,    0, 0, 0, 57, -1, -1, -1, NULL, NULL, NULL, 0,  2,  4, 4, 0, -1, 0, 0},
	{{-1200.0, -900.0,     0.0}, {1.0,      3.0, 1.0}, ROT_NONE,                             0,    OBJU_NORMAL, OBJM_NORMAL,     0.0,    0.0,     0.0,   0.0,      NULL,  0, 0,    0, 0, 0, 41, -1, -1, -1, NULL, NULL, NULL, 0, 34,  4, 4, 0, -1, 0, 0},
	{ {-500.0,    0.0,  -950.0}, {1.0,      1.0, 1.0}, ROT_NONE,                             0, OBJU_FLAG_ZONE, OBJM_NORMAL,  1000.0, 2000.0,  2100.0,   0.0,      NULL,  0, 0,    0, 0, 0,  0, -1,  1, -1, NULL, NULL, NULL, 0,  7, -1, 1, 0, -1, 0, 0},
	{{-2200.0,    0.0, -1500.0}, {1.0,      1.0, 1.0}, ROT_NONE,                             0,    OBJU_NORMAL, OBJM_NORMAL,     0.0,    0.0,     0.0,   0.0,      NULL,  0, 0,    0, 0, 0, 53, -1, -1, -1, NULL, NULL, NULL, 0,  3,  4, 4, 0, -1, 0, 0},
	{{-2200.0,    0.0, -1500.0}, {1.0,      1.0, 1.0}, ROT_NONE,                             0,    OBJU_NORMAL, OBJM_NORMAL,     0.0,    0.0,     0.0,   0.0,      NULL,  0, 0,    0, 0, 0,  1, -1, -1, -1, NULL, NULL, NULL, 0,  3,  4, 4, 0, -1, 0, 0},
	{{-2200.0,    0.0, -1500.0}, {1.0,      1.0, 1.0}, ROT_NONE,                             0,      OBJU_ZONE, OBJM_NORMAL,   400.0,  400.0,     0.0,   0.0, ZDIR_WEST,  1, 0,    0, 0, 0,  0, -1, -1, -1, NULL, NULL, NULL, 0,  7, -1, 1, 0, -1, 0, 0},
	{{-2200.0,    0.0, -1500.0}, {4.0,      4.0, 4.0}, ROT_NONE,                             0,    OBJU_NORMAL, OBJM_NORMAL,  1400.0, 1000.0, -1000.0,   0.0,      NULL, 90, 0, 1000, 0, 0,  0, -1, -1, -1, NULL, NULL, NULL, 0,  1,  0, 0, 0, -1, 0, 0},
	NULL_OBJECT
};


RoomObject Training_room3_objects[] = {
	{   {0.0,    0.0,    0.0}, {1.0, 1.0, 1.0}, ROT_NONE, 0,    OBJU_NORMAL, OBJM_NORMAL,     0.0,    0.0,     0.0,   0.0,       NULL,  0, 0,    0, 0, 0, 40, -1, -1, -1, NULL, NULL, NULL, 0,  7,  4, 4, 0, -1, 0, 0},
	{   {0.0,    0.0,    0.0}, {1.0, 1.0, 1.0}, ROT_NONE, 0,    OBJU_NORMAL, OBJM_NORMAL, -3010.0, -200.0,     0.0, -90.0,       NULL, 20, 0,   40, 0, 0, 50, -1,  2, -1, NULL, NULL, NULL, 0,  7,  4, 4, 0, -1, 0, 0},
	{{-500.0,    0.0, 2500.0}, {1.0, 1.0, 1.0}, ROT_NONE, 0,    OBJU_NORMAL, OBJM_NORMAL,     0.0,    0.0,     0.0,   0.0,       NULL,  0, 0,    0, 0, 0, 55, -1, -1, -1, NULL, NULL, NULL, 0,  3,  4, 4, 0, -1, 0, 0},
	{{-500.0,    0.0, 2500.0}, {1.0, 1.0, 1.0}, ROT_NONE, 0,    OBJU_NORMAL, OBJM_NORMAL,     0.0,    0.0,     0.0,   0.0,       NULL,  0, 0,    0, 0, 0,  3, -1, -1, -1, NULL, NULL, NULL, 0,  3,  4, 4, 0, -1, 0, 0},
	{{-500.0,    0.0, 2500.0}, {1.0, 1.0, 1.0}, ROT_NONE, 0,      OBJU_ZONE, OBJM_NORMAL,   400.0,  400.0,     0.0,   0.0, ZDIR_SOUTH,  1, 0,    0, 0, 0,  0, -1, -1, -1, NULL, NULL, NULL, 0,  7, -1, 1, 0, -1, 0, 0},
	{{-500.0,    0.0, 2500.0}, {4.0, 4.0, 4.0}, ROT_NONE, 0,    OBJU_NORMAL, OBJM_NORMAL,  1400.0, 1000.0, -1000.0,   0.0,       NULL, 90, 0, 1000, 0, 0,  0, -1, -1, -1, NULL, NULL, NULL, 0,  1,  0, 0, 0, -1, 0, 0},
	{ {800.0, -350.0, 1200.0}, {1.0, 5.0, 1.0}, ROT_NONE, 0,    OBJU_NORMAL, OBJM_NORMAL,     0.0,    0.0,     0.0,   0.0,       NULL,  0, 0,    0, 0, 0, 41, -1, -1, -1, NULL, NULL, NULL, 0, 34,  4, 4, 0, -1, 0, 0},
	{{-600.0,    0.0, 1000.0}, {1.0, 1.0, 1.0}, ROT_NONE, 0, OBJU_FLAG_ZONE, OBJM_NORMAL,   800.0, 7000.0,   600.0,   0.0,       NULL,  0, 0,    0, 0, 0,  0, -1,  1, -1, NULL, NULL, NULL, 0,  7, -1, 1, 0, -1, 0, 0},
	NULL_OBJECT
};


RoomObject Training_room6_objects[] = {
	{{0.0, 0.0,     0.0}, {1.0, 1.0, 1.0}, ROT_NONE, 0, OBJU_NORMAL, OBJM_NORMAL,    0.0,    0.0,     0.0, 0.0,       NULL,  0, 0,    0, 0, 0, 35, -1, -1, -1, NULL, NULL, NULL, 0, 7,  4, 4, 0, -1, 0, 0},
	{{0.0, 0.0, -1800.0}, {1.0, 1.0, 1.0}, ROT_NONE, 0, OBJU_NORMAL, OBJM_NORMAL,    0.0,    0.0,     0.0, 0.0,       NULL,  0, 0,    0, 0, 0, 56, -1, -1, -1, NULL, NULL, NULL, 0, 3,  4, 4, 0, -1, 0, 0},
	{{0.0, 0.0, -1800.0}, {1.0, 1.0, 1.0}, ROT_NONE, 0, OBJU_NORMAL, OBJM_NORMAL,    0.0,    0.0,     0.0, 0.0,       NULL,  0, 0,    0, 0, 0,  4, -1, -1, -1, NULL, NULL, NULL, 0, 3,  4, 4, 0, -1, 0, 0},
	{{0.0, 0.0, -1800.0}, {1.0, 1.0, 1.0}, ROT_NONE, 0,   OBJU_ZONE, OBJM_NORMAL,  400.0,  400.0,     0.0, 0.0, ZDIR_NORTH,  1, 0,    0, 0, 0,  0, -1, -1, -1, NULL, NULL, NULL, 0, 7, -1, 1, 0, -1, 0, 0},
	{{0.0, 0.0, -1800.0}, {4.0, 4.0, 4.0}, ROT_NONE, 0, OBJU_NORMAL, OBJM_NORMAL, 1400.0, 1000.0, -1000.0, 0.0,       NULL, 90, 0, 1000, 0, 0,  0, -1, -1, -1, NULL, NULL, NULL, 0, 1,  0, 0, 0, -1, 0, 0},
	NULL_OBJECT
};


s32 Training_spriteLib[2][16] = {
{ SPRITE_CHOCOKID,
   SPRITE_GRENADE,
     SPRITE_FIRE}
};


RoomInstance Training_room_instances[] = {
	{Training_room0_objects,                  NULL, NULL, Training_room0_sprites, 0, 0, 0,  0, -1, 0, 0.0,  1,   600.0,   0.0, 1500.0, 0.0, 0.0, 0.0, 0.0, {0,  0,  0}, {0,  0,  0}, {0,  0,  0}, {0,  0,  0}, -1.0},
	{Training_room1_objects, Training_room1_actors, NULL, Training_room1_sprites, 0, 0, 0, 35,  2, 0, 0.0,  1,  1900.0,   0.0, 1400.0, 0.0, 0.0, 0.0, 0.0, {0,  0,  0}, {0,  0,  0}, {0,  0,  0}, {0,  0,  0}, -1.0},
	{Training_room2_objects, Training_room2_actors, NULL, Training_room2_sprites, 0, 0, 0, 14,  2, 0, 0.0,  2,     0.0, 800.0, 1400.0, 0.0, 0.0, 0.0, 0.0, {0,  0,  0}, {0,  0,  0}, {0,  0,  0}, {0,  0,  0}, -1.0},
	{Training_room3_objects,                  NULL, NULL, Training_room3_sprites, 0, 0, 0,  0, -1, 0, 0.0,  1,   800.0, 200.0, 1200.0, 0.0, 0.0, 0.0, 0.0, {0,  0,  0}, {0,  0,  0}, {0,  0,  0}, {0,  0,  0}, -1.0},
	{Training_room4_objects,                  NULL, NULL, Training_room4_sprites, 0, 0, 0,  0, -1, 0, 0.0,  1, -3600.0,   0.0,  900.0, 0.0, 0.0, 0.0, 0.0, {0,  0,  0}, {0,  0,  0}, {0,  0,  0}, {0,  0,  0}, -1.0},
	{Training_room5_objects,                  NULL, NULL, Training_room5_sprites, 0, 0, 0,  0, -1, 0, 0.0, 10, -1200.0, 900.0,    0.0, 0.0, 0.0, 0.0, 2.0, {0,  0,  0}, {0,  0,  0}, {0,  0,  0}, {0,  0,  0}, -1.0},
	{Training_room6_objects,                  NULL, NULL,                   NULL, 0, 0, 0,  0, -1, 0, 0.0,  1,   600.0,   0.0, 1500.0, 0.0, 0.0, 0.0, 0.0, {0,  0,  0}, {0,  0,  0}, {0,  0,  0}, {0,  0,  0}, -1.0},
	NULL_ROOM
};


s32 Training_map[4][3] = {
	{-1, 3, -1},
	{ 2, 0,  4},
	{ 1, 0,  5},
	{-1, 6, -1}
};


StageMapData Training_map_data = {
3, 4, Training_room_instances, Training_map
};


RoomInstance Training_ext_room_instances[] = {
	NULL_ROOM
};


LevelScope Training_scope = {
{0, 0, 0}, -1, 25000, 60
};


StageData Training_stageData = {
               &Training_map_data,
                             NULL,
             Training_stageModels,
ARRAY_COUNT(Training_stageModels),
                                0,
              Training_rabObjects,
                          0x20000,
               Training_spriteLib,
                  &Training_scope
};
Mtx Training_IMtx2 = IDENTITY;
Lights1 Training_trainingScope1_Light =
#include "assets/levelGroup/Training/trainingScope1/trainingScope1.light.inc.c"
Vtx Training_model1_Vtx[] = {
#include "assets/levelGroup/Training/model1/model1.vtx.inc.c"
};
Mtx Training_IMtx3 = IDENTITY;
unsigned char Training_Pad1[] = FILEPAD;
unsigned char Training_exit_i4_PNG[] = {
#include "build/assets/levelGroup/Training/img/exit.i4.png.inc.c"
};
unsigned char Training_Pad2[] = FILEPAD;
unsigned char Training_three_i4_PNG[] = {
#include "build/assets/levelGroup/Training/img/three.i4.png.inc.c"
};
unsigned char Training_Pad3[] = FILEPAD;
unsigned char Training_five_i4_PNG[] = {
#include "build/assets/levelGroup/Training/img/five.i4.png.inc.c"
};
unsigned char Training_Pad4[] = FILEPAD;
unsigned char Training_four_i4_PNG[] = {
#include "build/assets/levelGroup/Training/img/four.i4.png.inc.c"
};
unsigned char Training_Pad5[] = FILEPAD;
unsigned char Training_two_i4_PNG[] = {
#include "build/assets/levelGroup/Training/img/two.i4.png.inc.c"
};
unsigned char Training_Pad6[] = FILEPAD;
unsigned char Training_one_i4_PNG[] = {
#include "build/assets/levelGroup/Training/img/one.i4.png.inc.c"
};
Gfx Training_model1_Gfx[] = {
#include "assets/levelGroup/Training/model1/model1.gfx.inc.c"
};
Vtx Training_model2_Vtx[] = {
#include "assets/levelGroup/Training/model2/model2.vtx.inc.c"
};
Mtx Training_IMtx4 = IDENTITY;
Gfx Training_model2_Gfx[] = {
#include "assets/levelGroup/Training/model2/model2.gfx.inc.c"
};
Vtx Training_model3_Vtx[] = {
#include "assets/levelGroup/Training/model3/model3.vtx.inc.c"
};
Mtx Training_IMtx5 = IDENTITY;
Gfx Training_model3_Gfx[] = {
#include "assets/levelGroup/Training/model3/model3.gfx.inc.c"
};
Vtx Training_model4_Vtx[] = {
#include "assets/levelGroup/Training/model4/model4.vtx.inc.c"
};
Mtx Training_IMtx6 = IDENTITY;
Gfx Training_model4_Gfx[] = {
#include "assets/levelGroup/Training/model4/model4.gfx.inc.c"
};
Vtx Training_model5_Vtx[] = {
#include "assets/levelGroup/Training/model5/model5.vtx.inc.c"
};
Mtx Training_IMtx7 = IDENTITY;
Gfx Training_model5_Gfx[] = {
#include "assets/levelGroup/Training/model5/model5.gfx.inc.c"
};
Vtx Training_model6_Vtx[] = {
#include "assets/levelGroup/Training/model6/model6.vtx.inc.c"
};
Mtx Training_IMtx8 = IDENTITY;
Gfx Training_model6_Gfx[] = {
#include "assets/levelGroup/Training/model6/model6.gfx.inc.c"
};
Vtx Training_model7_Vtx[] = {
#include "assets/levelGroup/Training/model7/model7.vtx.inc.c"
};
Mtx Training_IMtx9 = IDENTITY;
Gfx Training_model7_Gfx[] = {
#include "assets/levelGroup/Training/model7/model7.gfx.inc.c"
};
Vtx Training_model8_Vtx[] = {
#include "assets/levelGroup/Training/model8/model8.vtx.inc.c"
};
Mtx Training_IMtx10 = IDENTITY;
Gfx Training_model8_Gfx[] = {
#include "assets/levelGroup/Training/model8/model8.gfx.inc.c"
};
Vtx Training_model9_Vtx[] = {
#include "assets/levelGroup/Training/model9/model9.vtx.inc.c"
};
Mtx Training_IMtx11 = IDENTITY;
Gfx Training_model9_Gfx[] = {
#include "assets/levelGroup/Training/model9/model9.gfx.inc.c"
};
Vtx Training_model10_Vtx[] = {
#include "assets/levelGroup/Training/model10/model10.vtx.inc.c"
};
Mtx Training_IMtx12 = IDENTITY;
unsigned char Training_Pad7[] = FILEPAD;
unsigned char Training_metal_ci4_PNG[] = {
#include "build/assets/levelGroup/Training/img/metal.ci4.png.inc.c"
};
unsigned char Training_Pad8[] = FILEPAD;
unsigned char Training_metal_ci4_PAL[] = {
#include "build/assets/levelGroup/Training/img/metal.ci4.pal.inc.c"
};
Gfx Training_model10_Gfx[] = {
#include "assets/levelGroup/Training/model10/model10.gfx.inc.c"
};
Vtx Training_model11_Vtx[] = {
#include "assets/levelGroup/Training/model11/model11.vtx.inc.c"
};
Mtx Training_IMtx13 = IDENTITY;
unsigned char Training_Pad9[] = FILEPAD;
unsigned char Training_grate_i4_PNG[] = {
#include "build/assets/levelGroup/Training/img/grate.i4.png.inc.c"
};
Gfx Training_model11_Gfx[] = {
#include "assets/levelGroup/Training/model11/model11.gfx.inc.c"
};
Vtx Training_model12_Vtx[] = {
#include "assets/levelGroup/Training/model12/model12.vtx.inc.c"
};
Mtx Training_IMtx14 = IDENTITY;
Gfx Training_model12_Gfx[] = {
#include "assets/levelGroup/Training/model12/model12.gfx.inc.c"
};
Vtx Training_model13_Vtx[] = {
#include "assets/levelGroup/Training/model13/model13.vtx.inc.c"
};
Mtx Training_IMtx15 = IDENTITY;
Gfx Training_model13_Gfx[] = {
#include "assets/levelGroup/Training/model13/model13.gfx.inc.c"
};
Vtx Training_model14_Vtx[] = {
#include "assets/levelGroup/Training/model14/model14.vtx.inc.c"
};
Mtx Training_IMtx16 = IDENTITY;
Gfx Training_model14_Gfx[] = {
#include "assets/levelGroup/Training/model14/model14.gfx.inc.c"
};
Vtx Training_model15_Vtx[] = {
#include "assets/levelGroup/Training/model15/model15.vtx.inc.c"
};
Mtx Training_IMtx17 = IDENTITY;
Gfx Training_model15_Gfx[] = {
#include "assets/levelGroup/Training/model15/model15.gfx.inc.c"
};
Vtx Training_model16_Vtx[] = {
#include "assets/levelGroup/Training/model16/model16.vtx.inc.c"
};
Mtx Training_IMtx18 = IDENTITY;
Gfx Training_model16_Gfx[] = {
#include "assets/levelGroup/Training/model16/model16.gfx.inc.c"
};
Vtx Training_model17_Vtx[] = {
#include "assets/levelGroup/Training/model17/model17.vtx.inc.c"
};
Mtx Training_IMtx19 = IDENTITY;
Gfx Training_model17_Gfx[] = {
#include "assets/levelGroup/Training/model17/model17.gfx.inc.c"
};
Vtx Training_model18_Vtx[] = {
#include "assets/levelGroup/Training/model18/model18.vtx.inc.c"
};
Mtx Training_IMtx20 = IDENTITY;
Gfx Training_model18_Gfx[] = {
#include "assets/levelGroup/Training/model18/model18.gfx.inc.c"
};
Vtx Training_model19_Vtx[] = {
#include "assets/levelGroup/Training/model19/model19.vtx.inc.c"
};
Mtx Training_IMtx21 = IDENTITY;
Gfx Training_model19_Gfx[] = {
#include "assets/levelGroup/Training/model19/model19.gfx.inc.c"
};
Vtx Training_model20_Vtx[] = {
#include "assets/levelGroup/Training/model20/model20.vtx.inc.c"
};
Mtx Training_IMtx22 = IDENTITY;
Gfx Training_model20_Gfx[] = {
#include "assets/levelGroup/Training/model20/model20.gfx.inc.c"
};
Vtx Training_model21_Vtx[] = {
#include "assets/levelGroup/Training/model21/model21.vtx.inc.c"
};
Mtx Training_IMtx23 = IDENTITY;
Gfx Training_model21_Gfx[] = {
#include "assets/levelGroup/Training/model21/model21.gfx.inc.c"
};
Vtx Training_model22_Vtx[] = {
#include "assets/levelGroup/Training/model22/model22.vtx.inc.c"
};
Mtx Training_IMtx24 = IDENTITY;
Gfx Training_model22_Gfx[] = {
#include "assets/levelGroup/Training/model22/model22.gfx.inc.c"
};
Vec3f Training_unkCol1_ColV[] = {
#include "assets/levelGroup/Training/unkCol1/unkCol1.colV.inc.c"
};
Vec3w Training_unkCol1_ColT[] = {
#include "assets/levelGroup/Training/unkCol1/unkCol1.colT.inc.c"
};
Rect3D Training_unkCol1_ColS = {
#include "assets/levelGroup/Training/unkCol1/unkCol1.colS.inc.c"
};
ModelCollision Training_unkCol1_ColH = {
ARRAY_COUNT(Training_unkCol1_ColV), ARRAY_COUNT(Training_unkCol1_ColT), Training_unkCol1_ColV, Training_unkCol1_ColT, &Training_unkCol1_ColS
};
Vec3f Training_unkCol2_ColV[] = {
#include "assets/levelGroup/Training/unkCol2/unkCol2.colV.inc.c"
};
Vec3w Training_unkCol2_ColT[] = {
#include "assets/levelGroup/Training/unkCol2/unkCol2.colT.inc.c"
};
Rect3D Training_unkCol2_ColS = {
#include "assets/levelGroup/Training/unkCol2/unkCol2.colS.inc.c"
};
ModelCollision Training_unkCol2_ColH = {
ARRAY_COUNT(Training_unkCol2_ColV), ARRAY_COUNT(Training_unkCol2_ColT), Training_unkCol2_ColV, Training_unkCol2_ColT, &Training_unkCol2_ColS
};
Vec3f Training_unkCol3_ColV[] = {
#include "assets/levelGroup/Training/unkCol3/unkCol3.colV.inc.c"
};
Vec3w Training_unkCol3_ColT[] = {
#include "assets/levelGroup/Training/unkCol3/unkCol3.colT.inc.c"
};
Rect3D Training_unkCol3_ColS = {
#include "assets/levelGroup/Training/unkCol3/unkCol3.colS.inc.c"
};
ModelCollision Training_unkCol3_ColH = {
ARRAY_COUNT(Training_unkCol3_ColV), ARRAY_COUNT(Training_unkCol3_ColT), Training_unkCol3_ColV, Training_unkCol3_ColT, &Training_unkCol3_ColS
};
Vec3f Training_unkCol4_ColV[] = {
#include "assets/levelGroup/Training/unkCol4/unkCol4.colV.inc.c"
};
Vec3w Training_unkCol4_ColT[] = {
#include "assets/levelGroup/Training/unkCol4/unkCol4.colT.inc.c"
};
Rect3D Training_unkCol4_ColS = {
#include "assets/levelGroup/Training/unkCol4/unkCol4.colS.inc.c"
};
ModelCollision Training_unkCol4_ColH = {
ARRAY_COUNT(Training_unkCol4_ColV), ARRAY_COUNT(Training_unkCol4_ColT), Training_unkCol4_ColV, Training_unkCol4_ColT, &Training_unkCol4_ColS
};
Vec3f Training_unkCol5_ColV[] = {
#include "assets/levelGroup/Training/unkCol5/unkCol5.colV.inc.c"
};
Vec3w Training_unkCol5_ColT[] = {
#include "assets/levelGroup/Training/unkCol5/unkCol5.colT.inc.c"
};
Rect3D Training_unkCol5_ColS = {
#include "assets/levelGroup/Training/unkCol5/unkCol5.colS.inc.c"
};
ModelCollision Training_unkCol5_ColH = {
ARRAY_COUNT(Training_unkCol5_ColV), ARRAY_COUNT(Training_unkCol5_ColT), Training_unkCol5_ColV, Training_unkCol5_ColT, &Training_unkCol5_ColS
};
Vec3f Training_unkCol6_ColV[] = {
#include "assets/levelGroup/Training/unkCol6/unkCol6.colV.inc.c"
};
Vec3w Training_unkCol6_ColT[] = {
#include "assets/levelGroup/Training/unkCol6/unkCol6.colT.inc.c"
};
Rect3D Training_unkCol6_ColS = {
#include "assets/levelGroup/Training/unkCol6/unkCol6.colS.inc.c"
};
ModelCollision Training_unkCol6_ColH = {
ARRAY_COUNT(Training_unkCol6_ColV), ARRAY_COUNT(Training_unkCol6_ColT), Training_unkCol6_ColV, Training_unkCol6_ColT, &Training_unkCol6_ColS
};
Vec3f Training_unkCol7_ColV[] = {
#include "assets/levelGroup/Training/unkCol7/unkCol7.colV.inc.c"
};
Vec3w Training_unkCol7_ColT[] = {
#include "assets/levelGroup/Training/unkCol7/unkCol7.colT.inc.c"
};
Rect3D Training_unkCol7_ColS = {
#include "assets/levelGroup/Training/unkCol7/unkCol7.colS.inc.c"
};
ModelCollision Training_unkCol7_ColH = {
ARRAY_COUNT(Training_unkCol7_ColV), ARRAY_COUNT(Training_unkCol7_ColT), Training_unkCol7_ColV, Training_unkCol7_ColT, &Training_unkCol7_ColS
};
Vec3f Training_unkCol8_ColV[] = {
#include "assets/levelGroup/Training/unkCol8/unkCol8.colV.inc.c"
};
Vec3w Training_unkCol8_ColT[] = {
#include "assets/levelGroup/Training/unkCol8/unkCol8.colT.inc.c"
};
Rect3D Training_unkCol8_ColS = {
#include "assets/levelGroup/Training/unkCol8/unkCol8.colS.inc.c"
};
ModelCollision Training_unkCol8_ColH = {
ARRAY_COUNT(Training_unkCol8_ColV), ARRAY_COUNT(Training_unkCol8_ColT), Training_unkCol8_ColV, Training_unkCol8_ColT, &Training_unkCol8_ColS
};
Vec3f Training_unkCol9_ColV[] = {
#include "assets/levelGroup/Training/unkCol9/unkCol9.colV.inc.c"
};
Vec3w Training_unkCol9_ColT[] = {
#include "assets/levelGroup/Training/unkCol9/unkCol9.colT.inc.c"
};
Rect3D Training_unkCol9_ColS = {
#include "assets/levelGroup/Training/unkCol9/unkCol9.colS.inc.c"
};
ModelCollision Training_unkCol9_ColH = {
ARRAY_COUNT(Training_unkCol9_ColV), ARRAY_COUNT(Training_unkCol9_ColT), Training_unkCol9_ColV, Training_unkCol9_ColT, &Training_unkCol9_ColS
};
Vec3f Training_unkCol10_ColV[] = {
#include "assets/levelGroup/Training/unkCol10/unkCol10.colV.inc.c"
};
Vec3w Training_unkCol10_ColT[] = {
#include "assets/levelGroup/Training/unkCol10/unkCol10.colT.inc.c"
};
Rect3D Training_unkCol10_ColS = {
#include "assets/levelGroup/Training/unkCol10/unkCol10.colS.inc.c"
};
ModelCollision Training_unkCol10_ColH = {
ARRAY_COUNT(Training_unkCol10_ColV), ARRAY_COUNT(Training_unkCol10_ColT), Training_unkCol10_ColV, Training_unkCol10_ColT, &Training_unkCol10_ColS
};
Vec3f Training_unkCol11_ColV[] = {
#include "assets/levelGroup/Training/unkCol11/unkCol11.colV.inc.c"
};
Vec3w Training_unkCol11_ColT[] = {
#include "assets/levelGroup/Training/unkCol11/unkCol11.colT.inc.c"
};
Rect3D Training_unkCol11_ColS = {
#include "assets/levelGroup/Training/unkCol11/unkCol11.colS.inc.c"
};
ModelCollision Training_unkCol11_ColH = {
ARRAY_COUNT(Training_unkCol11_ColV), ARRAY_COUNT(Training_unkCol11_ColT), Training_unkCol11_ColV, Training_unkCol11_ColT, &Training_unkCol11_ColS
};
Vec3f Training_unkCol12_ColV[] = {
#include "assets/levelGroup/Training/unkCol12/unkCol12.colV.inc.c"
};
Vec3w Training_unkCol12_ColT[] = {
#include "assets/levelGroup/Training/unkCol12/unkCol12.colT.inc.c"
};
Rect3D Training_unkCol12_ColS = {
#include "assets/levelGroup/Training/unkCol12/unkCol12.colS.inc.c"
};
ModelCollision Training_unkCol12_ColH = {
ARRAY_COUNT(Training_unkCol12_ColV), ARRAY_COUNT(Training_unkCol12_ColT), Training_unkCol12_ColV, Training_unkCol12_ColT, &Training_unkCol12_ColS
};
Vec3f Training_unkCol13_ColV[] = {
#include "assets/levelGroup/Training/unkCol13/unkCol13.colV.inc.c"
};
Vec3w Training_unkCol13_ColT[] = {
#include "assets/levelGroup/Training/unkCol13/unkCol13.colT.inc.c"
};
Rect3D Training_unkCol13_ColS = {
#include "assets/levelGroup/Training/unkCol13/unkCol13.colS.inc.c"
};
ModelCollision Training_unkCol13_ColH = {
ARRAY_COUNT(Training_unkCol13_ColV), ARRAY_COUNT(Training_unkCol13_ColT), Training_unkCol13_ColV, Training_unkCol13_ColT, &Training_unkCol13_ColS
};
Vec3f Training_unkCol14_ColV[] = {
#include "assets/levelGroup/Training/unkCol14/unkCol14.colV.inc.c"
};
Vec3w Training_unkCol14_ColT[] = {
#include "assets/levelGroup/Training/unkCol14/unkCol14.colT.inc.c"
};
Rect3D Training_unkCol14_ColS = {
#include "assets/levelGroup/Training/unkCol14/unkCol14.colS.inc.c"
};
ModelCollision Training_unkCol14_ColH = {
ARRAY_COUNT(Training_unkCol14_ColV), ARRAY_COUNT(Training_unkCol14_ColT), Training_unkCol14_ColV, Training_unkCol14_ColT, &Training_unkCol14_ColS
};
Vec3f Training_unkCol15_ColV[] = {
#include "assets/levelGroup/Training/unkCol15/unkCol15.colV.inc.c"
};
Vec3w Training_unkCol15_ColT[] = {
#include "assets/levelGroup/Training/unkCol15/unkCol15.colT.inc.c"
};
Rect3D Training_unkCol15_ColS = {
#include "assets/levelGroup/Training/unkCol15/unkCol15.colS.inc.c"
};
ModelCollision Training_unkCol15_ColH = {
ARRAY_COUNT(Training_unkCol15_ColV), ARRAY_COUNT(Training_unkCol15_ColT), Training_unkCol15_ColV, Training_unkCol15_ColT, &Training_unkCol15_ColS
};
Vec3f Training_unkCol16_ColV[] = {
#include "assets/levelGroup/Training/unkCol16/unkCol16.colV.inc.c"
};
Vec3w Training_unkCol16_ColT[] = {
#include "assets/levelGroup/Training/unkCol16/unkCol16.colT.inc.c"
};
Rect3D Training_unkCol16_ColS = {
#include "assets/levelGroup/Training/unkCol16/unkCol16.colS.inc.c"
};
ModelCollision Training_unkCol16_ColH = {
ARRAY_COUNT(Training_unkCol16_ColV), ARRAY_COUNT(Training_unkCol16_ColT), Training_unkCol16_ColV, Training_unkCol16_ColT, &Training_unkCol16_ColS
};
Vec3f Training_unkCol17_ColV[] = {
#include "assets/levelGroup/Training/unkCol17/unkCol17.colV.inc.c"
};
Vec3w Training_unkCol17_ColT[] = {
#include "assets/levelGroup/Training/unkCol17/unkCol17.colT.inc.c"
};
Rect3D Training_unkCol17_ColS = {
#include "assets/levelGroup/Training/unkCol17/unkCol17.colS.inc.c"
};
ModelCollision Training_unkCol17_ColH = {
ARRAY_COUNT(Training_unkCol17_ColV), ARRAY_COUNT(Training_unkCol17_ColT), Training_unkCol17_ColV, Training_unkCol17_ColT, &Training_unkCol17_ColS
};
Vec3f Training_unkCol18_ColV[] = {
#include "assets/levelGroup/Training/unkCol18/unkCol18.colV.inc.c"
};
Vec3w Training_unkCol18_ColT[] = {
#include "assets/levelGroup/Training/unkCol18/unkCol18.colT.inc.c"
};
Rect3D Training_unkCol18_ColS = {
#include "assets/levelGroup/Training/unkCol18/unkCol18.colS.inc.c"
};
ModelCollision Training_unkCol18_ColH = {
ARRAY_COUNT(Training_unkCol18_ColV), ARRAY_COUNT(Training_unkCol18_ColT), Training_unkCol18_ColV, Training_unkCol18_ColT, &Training_unkCol18_ColS
};
Vec3f Training_unkCol19_ColV[] = {
#include "assets/levelGroup/Training/unkCol19/unkCol19.colV.inc.c"
};
Vec3w Training_unkCol19_ColT[] = {
#include "assets/levelGroup/Training/unkCol19/unkCol19.colT.inc.c"
};
Rect3D Training_unkCol19_ColS = {
#include "assets/levelGroup/Training/unkCol19/unkCol19.colS.inc.c"
};
ModelCollision Training_unkCol19_ColH = {
ARRAY_COUNT(Training_unkCol19_ColV), ARRAY_COUNT(Training_unkCol19_ColT), Training_unkCol19_ColV, Training_unkCol19_ColT, &Training_unkCol19_ColS
};
Vec3f Training_unkCol20_ColV[] = {
#include "assets/levelGroup/Training/unkCol20/unkCol20.colV.inc.c"
};
Vec3w Training_unkCol20_ColT[] = {
#include "assets/levelGroup/Training/unkCol20/unkCol20.colT.inc.c"
};
Rect3D Training_unkCol20_ColS = {
#include "assets/levelGroup/Training/unkCol20/unkCol20.colS.inc.c"
};
ModelCollision Training_unkCol20_ColH = {
ARRAY_COUNT(Training_unkCol20_ColV), ARRAY_COUNT(Training_unkCol20_ColT), Training_unkCol20_ColV, Training_unkCol20_ColT, &Training_unkCol20_ColS
};
Vec3f Training_unkCol21_ColV[] = {
#include "assets/levelGroup/Training/unkCol21/unkCol21.colV.inc.c"
};
Vec3w Training_unkCol21_ColT[] = {
#include "assets/levelGroup/Training/unkCol21/unkCol21.colT.inc.c"
};
Rect3D Training_unkCol21_ColS = {
#include "assets/levelGroup/Training/unkCol21/unkCol21.colS.inc.c"
};
ModelCollision Training_unkCol21_ColH = {
ARRAY_COUNT(Training_unkCol21_ColV), ARRAY_COUNT(Training_unkCol21_ColT), Training_unkCol21_ColV, Training_unkCol21_ColT, &Training_unkCol21_ColS
};
Vec3f Training_unkCol22_ColV[] = {
#include "assets/levelGroup/Training/unkCol22/unkCol22.colV.inc.c"
};
Vec3w Training_unkCol22_ColT[] = {
#include "assets/levelGroup/Training/unkCol22/unkCol22.colT.inc.c"
};
Rect3D Training_unkCol22_ColS = {
#include "assets/levelGroup/Training/unkCol22/unkCol22.colS.inc.c"
};
ModelCollision Training_unkCol22_ColH = {
ARRAY_COUNT(Training_unkCol22_ColV), ARRAY_COUNT(Training_unkCol22_ColT), Training_unkCol22_ColV, Training_unkCol22_ColT, &Training_unkCol22_ColS
};
Mtx Training_IMtx25 = IDENTITY;
