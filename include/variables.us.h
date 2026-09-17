#include "ultra64.h"
#include "macros.h"
#include "common_structs.h"
#include "enums.h"

#ifndef VARIABLES_US_H
#define VARIABLES_US_H

extern s32 D_801805E0[];
extern s32 Battle_GameType;
extern Camera* D_801806E8; // D_80174860
extern s32 D_801813EC; //D_801749A8
extern const Vec2f D_800E96FC[0x6B];
extern unk_8010AA28 D_800E9A1C[0x6B];
extern s32 D_800F5578;
extern f32 D_80180898;
extern unk80170E68 D_8017CCE8[];
extern unkStruct D_8017ED08[]; //used by Red ants.
extern s32 gTimer;
extern s32 D_80180728;
extern s32 D_80180808;
extern s32 D_80181410;


extern u8 gSelectedCharacters[4];

extern s32 gActorCount;
extern s32 D_80240508;
extern s32 D_8024050C;
extern Collider* D_8024AAF8;
extern s32 gFieldCount;
extern Vec3f D_8011432C;
extern Vec3f D_80114338;
extern Vec3f D_80114344;
extern Vec3f D_80114350;
extern f32 D_8011435C;
extern s32 D_80114360;
extern s32 D_80114364;
extern f32 D_80114368;
extern f32 D_8011436C;
extern s32 D_80114370;
extern Vec3f D_80252718[8];
extern s32 isInOverworld;
extern s32 gCurrentStage;
extern s32 gCurrentZone;
extern Camera D_80176918[4]; //gCamera
extern s32 D_80217494; //gCurrentZone?

extern Field gZoneFields[];
extern Collider D_80240520[128];

extern Pole Poles[64]; //currently loaded pole structs
extern Actor gActors[MAX_ACTORS]; //currently loaded actor structs
extern s32 StageFlags[32]; //contextual-per-level flags
extern PlayerActor* gCurrentActivePlayerPointer;
extern Tongue* gTongueOnePointer;
extern PlayerActor gPlayerActors[4];
extern Tongue gTongues[4];
extern Mtx AnimationSlots[40];
extern s32 gCurrentDemoTimer;

//5FF30.c
extern s16 UseFixedRNGSeed;

#endif
