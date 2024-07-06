#include "ultra64.h"
#include "macros.h"
#include "common_structs.h"
#include "enums.h"

#ifndef VARIABLES_US_H
#define VARIABLES_US_H


extern Pole Poles[64]; //currently loaded pole structs
extern Actor gActors[MAX_ACTORS]; //currently loaded actor structs
extern s32 StageFlags[32]; //contextual-per-level flags
extern PlayerActor* gCurrentActivePlayerPointer;
extern Tongue* gTongueOnePointer;
extern PlayerActor gPlayerActors[4];
extern Tongue gTongues[4];

#endif
