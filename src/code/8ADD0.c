#include "common.h"

void func_800AC7E4(Collider*, s32, s32);

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800A8500.s")
/*
JP EQUIVALENT - "func_800AF9D0"
TODO: Fix rodata
DONE: variable changes

void func_800AF9D0(Collider* arg0, RoomObject* arg1) {
    arg0->unk_5C = 2;
    D_8020B5C4 = 0.0f;
    D_8020B5CC = DEGREES_TO_RADIANS_PI(arg1->unk28);
    D_8020B5C0 = 0.0f;
    D_8020B5C8 = 0.0f;
    D_8020B5D8.x = arg1->unk2C;
    D_8020B5D8.y = arg1->unk30;
    D_8020B5D8.z = arg1->unk34;
    D_8020B5F4 = 0;
    D_8020B60C = 50;
    D_8020B610 = 10;
    D_8020C018 = 1;
    D_8020C040 = 3;
    D_8020C048 = arg1->unk4C;
    D_8020C0D0 = arg1->unk44;
    D_8020C0D4 = arg1->unk48;
    D_8020C0D8 = arg1->unk40;
    D_8020C0DC = 1000;
    D_8020C0E4 = 0;
    D_8020C0E8 = 0.5f;
    D_8020C0EC = 1;
    D_8020C0F4 = 0;
    func_800AC7E4(arg0, 0, 0);
    func_800AC7E4(arg0, 1, 2);
    func_800AC7E4(arg0, 2, 1);
    D_8020C0F8 = -1;
}
*/

// JP EQUIVALENT - "func_800AFB2C"
void func_800A865C(Collider* arg0, RoomObject* arg1) {
    arg0->unk_5C = 2;
    arg0->unkA4 = 0;
    func_800AC7E4(arg0, 0, 2);
    func_800AC7E4(arg0, 1, 2);
    func_800AC7E4(arg0, 2, 1);
}

// JP EQUIVALENT - "func_800AFB88"
#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800A86B8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/MoveTheater.s")

// JP EQUIVALENT - "func_800B06B0"
#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800A91E0.s")

//#ifdef JP:
//move these down
//for some reason in US these are moved up further than where they are
// JP EQUIVALENT - "func_800B09C0"
void func_800ADA70(f32 arg0, f32 arg1);
void func_800A9294(Collider* arg0, RoomObject* arg1) {
    func_800ADA70(arg1->unk28, arg1->unk2C);
}

// JP EQUIVALENT - "func_800B09E8"
s32 func_800ABC48(s32);
void func_800A92BC(Collider* arg0, RoomObject* arg1) {
    arg0->unk_AC = arg1->keyframes;    
    if (func_800ABC48(arg0->unk_AC) != 0) {
        arg0->unk_B0 = 0;
    } else {
        arg0->unk_B0 = 1;
    }
}

// JP EQUIVALENT - "func_800B0B20"
#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800A9304.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/RegistShutter.s")

// JP EQUIVALENT - "func_800B118C"
#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800A9980.s")

// JP EQUIVALENT - "func_800B12B4"
#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800A9AA8.s")

// JP EQUIVALENT - "func_800B1538"
#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800A9D2C.s")

// JP EQUIVALENT - "func_800B1DA0"
void func_800AE260(Collider* arg0, s32 arg1);
void func_800AA59C(Collider* arg0, s32 arg1) {
    func_800AE260(arg0, 2);
    arg0->unk_8C = 0.0f;
}

// JP EQUIVALENT - "func_800B1DD4"
#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800AA5D0.s")

// JP EQUIVALENT - "func_800B2144"
void func_800ABD74(s32 arg0);
void func_800AA86C(Collider* arg0, unkStruct14* arg1) {
    arg0->unk_AC = arg1->unk_38;
    func_800ABD74(arg0->unk_AC);
}

// JP EQUIVALENT - "func_800B216C"
void func_800ABD28(s32 arg0);
void func_800AA894(Collider* arg0) {
    Actor* actorList;
    s32 ballCount = 0;
    s32 i;

    for (i = 0, actorList = gActors; i < ARRAY_COUNT(gActors); i++, actorList++) {
        if (actorList->actorID == BILLIARDS_BALL) {
            ballCount++;
        }
    }

    if (ballCount == 0) {
        func_800ABD28(arg0->unk_AC);
    }
}

//JP EQUIVALENT - "func_800B21CC"
void func_800B7534(void);
void func_800AA8F4(s32 arg0, s32 arg1) {
    func_800B7534();
}

/**
 * @brief Limits an integer to be in an inclusive range [a, b].
 *      
 * @param integer: The integer to limit.
 * @param a: The lower bound of the range.
 * @param b: The upper bound of the range.
 */
void LimitInt(s32* integer, s32 a, s32 b) {
    if (*integer < a) {
        *integer = a;
        return;
    }
    if (b < *integer) {
        *integer = b;
    }
}

/**
 * @brief Limits a float to be in an inclusive range [a, b].
 *      
 * @param _float: The float to limit.
 * @param a: The lower bound of the range.
 * @param b: The upper bound of the range.
 */
void LimitFloat(f32* _float, f32 a, f32 b) {
    if (*_float < a) {
        *_float = a;
        return;
    }
    if (b < *_float) {
        *_float = b;
    }
}

/**
 * @brief Checks if an actor is not a pickup.
 *      
 * @param actor: The actor to check.
 * 
 * @return: 1 if the actor is not a pickup, 0 otherwise.
 */
s32 IsNotPickup(Actor* actor) {
    return (actor->actorID != 0 && actor->actorID < R_HEART) ? 1 : 0;
}

/**
 * @brief Checks if an actor is a pickup.
 *      
 * @param actor: The actor to check.
 *      
 * @return: 1 if the actor is a pickup, 0 otherwise.
 */
s32 IsPickup(Actor* actor) {
    return (actor->actorID >= R_HEART ) ? 1 : 0;
}

/**
 * @brief Checks a given ID against the array of Boss IDs
 * 
 * @param id 
 * @return (s32) 1 if the ID is a Boss ID, 0 otherwise.
 */

extern s32 sBossIDs[6];
s32 IsBossID(s32 id) {
    int i;
    int ret = 0;
    
    for (i = 0; i < ARRAY_COUNT(sBossIDs); i++) {
        if (id == sBossIDs[i]) {
            ret = 1;
            break;
        }
    }
    return ret;
}

/**
 * @brief Determines if an actor is a boss by checking its ID.
 * 
 * @param actor 
 * @return (s32) 1 if the actor is a boss, 0 otherwise. 
 */
s32 IsActorBoss(Actor* actor) {
    return IsBossID(actor->actorID);
}

// JP EQUIVALENT - "func_800B2308"
#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800AAA30.s")

// JP EQUIVALENT - "func_800B2470"
#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800AAB98.s")

// JP EQUIVALENT - "func_800B255C"
#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800AAC38.s")

// JP EQUIVALENT - "func_800B2AB4"
#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800AB180.s")

// JP EQUIVALENT - "func_800B2B50" (though a wee bit different)
#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800AB224.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/Vec3f_SetAtBossPos.s")

/**
 * @brief If the boss is in the list of currently active actors.
 * 
 * @return (s32) 1 if the boss is in the list of currently active actors, 0 otherwise.
 */

s32 IsBossPresent(void) {
    s32 i;
    Actor* curActor;
    s32 isBoss = FALSE;
    
    for (i = 0, curActor = gActors; i < MAX_ACTORS; i++, curActor++) {
        if (IsActorBoss(curActor) != 0) {
            isBoss = TRUE;
            break;
        }
    }
    return isBoss;
}

/**
 * @brief Returns True if the current stage is a boss stage.
 * 
 * @return (s32) 1 if the current stage is a boss stage, 0 otherwise. 
 */
extern s32 gCurrentStage;
s32 IsBossStage(void) {
    s32 ret;
    
    if ((gCurrentStage != STAGE_JUNGLEBOSS) &&
        (gCurrentStage != STAGE_ANTBOSS) &&
        (gCurrentStage != STAGE_BOMBBOSS) &&
        (gCurrentStage != STAGE_DESERTBOSS) &&
        (gCurrentStage != STAGE_KIDSBOSS) &&
        (gCurrentStage != STAGE_GHOSTBOSS)) {
        ret = FALSE;
    } else {
        ret = TRUE;
    }
    return ret;
}

// JP EQUIVALENT - "func_800B2D10"
extern s32 D_80210250[];
extern s32 D_80210560[];
s32 func_800AB404(s32 arg0, s32* arg1) {
    *arg1 = D_80210250[arg0];
    return D_80210560[arg0];
}

// JP EQUIVALENT - "func_800B2D34"
#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800AB428.s")

// JP EQUIVALENT - "func_800B2D78"
#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800AB46C.s")

// JP EQUIVALENT - "func_800B2E40"
void func_800AB534(Collider*);
#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800AB534.s")

// JP EQUIVALENT - "func_800B3364"
s32 func_800AC7B4(Collider *arg0, s32 arg1);
extern Collider* D_8024AAF8;
extern s32 gFieldCount;
void func_800ABA58(s32 arg0) {
    s32 i;
    Collider** temp_s0;
    Collider* unkSpritePtr;

    for (i = 0, temp_s0 = &D_8024AAF8; i < gFieldCount; i++, temp_s0++) {
        unkSpritePtr = *temp_s0;
        unkSpritePtr->unk_E4 = 0;
        if ((arg0 == 1) || (func_800AC7B4(unkSpritePtr, 4) != 0)) {
            func_800AB534(unkSpritePtr);
        }
    }
}

s32 IsntNegative(s32 value) {
    return ( value >= 0 ) ? 1 : 0;
}

#ifdef VER_US

//new????
#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800ABB18.s")


#endif

// JP EQUIVALENT - "func_800B3424"
s32* func_800ABB9C(s32 arg0);
extern Field gZoneFields[];
#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800ABB9C.s")


// JP EQUIVALENT - "func_800B3484"
extern s32 D_80210980[];
extern s32 D_80210900[];
s32* func_800ABBFC(s32 arg0) {
    return ((arg0 & 0x100) ? 1 : 0) ? &D_80210980[arg0 & 0xFF] : &D_80210900[arg0 & 0xFF];
}

// JP EQUIVALENT - "func_800B34D0"
s32 func_800ABC48(s32 arg0){
    s32 temp_v1;
    s32 var_v0;
    s32 var_v1;

    temp_v1 = *func_800ABB9C(arg0);
    if (arg0 & 0x200) {
        var_v0 = 1;
    } else {
        var_v0 = 0;
    }
    if (var_v0 != 0) {
        if (temp_v1 == 0) {
            var_v1 = 1;
        } else {
            var_v1 = 0;
        }
    } else if (temp_v1 != 0) {
        var_v1 = 1;
    } else {
        var_v1 = 0;
    }
    return var_v1;
}

// JP EQUIVALENT - "func_800B3540"
s32 func_800ABCB8(s32 arg0) {
    return 1 - func_800ABC48(arg0);
}

// JP EQUIVALENT - "func_800B3564"
s32 func_800ABCDC(s32 arg0) {
    s32 sp1C;
    s32 var_v1;
    s32 var2;

    sp1C = *func_800ABB9C(arg0);
    var2 = *func_800ABBFC(arg0);
    if (sp1C != var2) {
        var_v1 = 1;
    } else {
        var_v1 = 0;
    }
    return var_v1;
}

// JP EQUIVALENT - "func_800B35B0"
void func_800ABD28(s32 arg0) {
    s32 sp1C;
    s32 var_v0;
    s32 var_v1;

    if (arg0 & 0x200) {
        var_v0 = 1;
    } else {
        var_v0 = 0;
    }
    
    if (var_v0 != 0) {
        sp1C = 0;
    } else {
        sp1C = 1;
    }
    *func_800ABB9C(arg0) = sp1C;
}

// JP EQUIVALENT - "func_800B35FC"
void func_800ABD74(s32 arg0) {
    s32 sp1C;
    s32 var_v0;
    s32 var_v1;

    if (arg0 & 0x200) {
        var_v0 = 1;
    } else {
        var_v0 = 0;
    }
    
    if (var_v0 != 0) {
        sp1C = 1;
    } else {
        sp1C = 0;
    }
    
    *func_800ABB9C(arg0) = sp1C;
}

// JP EQUIVALENT - "func_800B3648"
void func_800ABDC0(s32 arg0) {
    s32 var = *func_800ABB9C(arg0);
    if (var == 0) {
        *func_800ABB9C(arg0) = 1;
        return;
    }
    *func_800ABB9C(arg0) = 0;
}

// JP EQUIVALENT - "func_800B3698"
#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800ABE10.s")

extern s32 VertextBufferCount;
extern s32 TriangleBufferCount;
extern s32 ModelBufferCount;

void ResetStageModels(void) {
    VertextBufferCount = 0;
    TriangleBufferCount = 0;
    ModelBufferCount = 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/RegistModel.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/moveModel.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/ScaleModel.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/RotateModel.s")

/**
 * @brief This function returns a boolean value based on whether the RoomObject passed is valid.
 * 
 * @param obj: The RoomObject to check if valid.
 * @return true if the obj is invalid, false otherwise.
 */
s32 IsRoomObjInvalid(RoomObject* obj) {
    return obj->scale.x == 0.0 && obj->scale.y == 0.0 && obj->scale.z == 0.0 ? TRUE : FALSE;
}

/**
 * @brief This function returns a int value of how many RoomObjects are in an array.
 * 
 * @param obj: The RoomObject to start iterating from.
 * @return the amount of valid RoomObjects in the array.
 */
s32 GetRoomObjCount(RoomObject* obj) {
    s32 end;

    if (!obj) {
        return 0;
    }

    end = 0;

    while(IsRoomObjInvalid(obj) == FALSE){
        end++;
        obj++;
    }
    return end;
}

/**
 * @brief This function returns a boolean value based on whether the RoomActor passed is valid.
 * 
 * @param actor: The RoomActor to check if valid.
 * @return true if the actor is invalid, false otherwise.
 */
s32 IsRoomActInvalid(RoomActor* actor) {
    return (actor->id == 0) ? TRUE : FALSE;
}

/**
 * @brief This function returns a int value of how many RoomActors are in an array.
 * 
 * @param actor: The RoomActor to start iterating from.
 * @return the amount of valid RoomActors in the array.
 */
s32 GetRoomActCount(RoomActor* actor) {
    s32 i;
    if (actor == NULL) {
        return 0;
    }
    i = 0;
    while (IsRoomActInvalid(actor) == FALSE) {
        i++;
        actor++;
    }
    return i;
}

/**
 * @brief This function returns a boolean value based on whether the Collectable passed is valid.
 * 
 * @param collectable: The Collectable to check if valid.
 * @return true if the clct is invalid, false otherwise.
 */
s32 IsCollectableInvalid(Collectable* collectable) {
    return (collectable->id == 0) ? TRUE : FALSE;
}

/**
 * @brief This function returns a int value of how many Collectables are in an array.
 * 
 * @param collectable: The Collectable to start iterating from.
 * @return the amount of valid Collectables in the array.
 */
s32 GetCollectableCount(Collectable* collectable) {
    s32 i;

    if (collectable == NULL) {
        return 0;
    }

    i = 0;

    while (IsCollectableInvalid(collectable) == FALSE) {
        i++;
        collectable++;
    }

    return i;
}

/**
 * @brief This function returns a boolean value based on whether the RoomInstance passed is valid.
 * 
 * @param room: The RoomInstance to check if valid.
 * @return true if the room is invalid, false otherwise.
 */
s32 IsRoomInvalid(RoomInstance* room) {
    return (room->objects == NULL) ? TRUE : FALSE;
}

/**
 * @brief This function returns a int value of how many RoomInstance are in an array.
 * 
 * @param room: The RoomInstance to start iterating from.
 * @return the amount of valid RoomInstance in the array.
 */
s32 GetRoomCount(RoomInstance* room) {
    s32 i;

    if (room == NULL) {
        return 0;
    }

    i = 0;

    while (IsRoomInvalid(room) == FALSE) {
        i++;
        room++;
    }

    return i;
}

/**
 * @brief This function returns a boolean value based on whether the SpriteActor passed is valid.
 * 
 * @param sprite: The SpriteActor to check if valid.
 * @return true if the sprite is invalid, false otherwise.
 */
s32 IsSpriteActInvalid(SpriteActor* sprite) {
    return (sprite->size < 0) ? TRUE : FALSE;
}


/**
 * @brief This function returns a int value of how many SpriteActors are in an array.
 * 
 * @param sprite: The SpriteActor to start iterating from.
 * @return the amount of valid SpriteActors in the array.
 */
s32 GetSpriteActCount(SpriteActor* sprite) {
    s32 i;

    if (sprite == 0) {
        return 0;
    }

    i = 0;

    while (IsSpriteActInvalid(sprite) == FALSE) {
        i++;
        sprite++;
    }

    return i;
}


// JP EQUIVALENT - "func_800B3FFC"
#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800AC7B4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800AC7E4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800AC828.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800AC8AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800AC8B4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800AC8F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800ACA5C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800ACCC4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800ACD6C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800ACEDC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800ACF90.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800AD190.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800AD28C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800AD344.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800AD3D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800AD59C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800AD68C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800AD978.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800AD984.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800AD9DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800ADA70.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800ADA84.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800ADC14.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800ADCA4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800ADD4C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800ADE00.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800ADEEC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800ADF90.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800AE158.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800AE260.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800AE338.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800AE3C8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800AE524.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800AE538.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800AE54C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800AE570.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800AE590.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800AE6F4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800AECD0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800AEE14.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800AF070.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800AF0A8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800AF190.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800AF228.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800AF274.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800AF294.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800AF344.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800AF758.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800AF878.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800AFDB0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800AFE48.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B05F8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B070C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B0754.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B0930.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B0B8C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B0CF8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B15D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B17F8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B18F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B198C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B1A74.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B1CBC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B1D5C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B23E8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B2504.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B282C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B28B8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B2DF8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B2E5C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B2E88.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B2FB0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B31CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B352C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B35C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B365C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B39D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B3B18.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B3BF4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B3CF4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B3E48.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B3F84.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B3FF4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B4330.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B4428.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B4630.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B468C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B4928.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B4C2C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B5644.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B5750.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B5B7C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B5C3C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B5EEC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B5F98.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B5FC4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B60D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B6294.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B6418.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B656C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B6680.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B66E4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B67C8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B6980.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B6F74.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B7048.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B711C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B720C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B7294.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B72C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B72E8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B7314.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B733C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B7368.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B7390.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B73E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B74C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B74D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B7518.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B7534.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B75E4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B76E8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B77C4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B77F4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B7898.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B792C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B79DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B7A10.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B7A9C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B7AF8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B7BFC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B81DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B842C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B8518.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B8598.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B8648.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B87A8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B8820.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B88A0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B88E4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B8B48.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B8C24.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B8FDC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B9070.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B9100.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B964C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B98AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B98C8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B9C4C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B9DA4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B9E98.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800B9FE8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800BA070.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800BA1D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800BA374.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800BA418.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800BA700.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800BA954.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800BAA0C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800BAA4C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800BAAA8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800BAD04.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800BAE88.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800BB06C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800BB0EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800BB160.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800BB1DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800BBA28.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800BBB8C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800BBD3C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800BBEF4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800BC1FC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800BC224.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800BC458.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800BC75C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800BC7D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800BCAA8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800BD13C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800BD1B4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800BD3B8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800BD64C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800BD6D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800BD828.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800BDB40.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800BDBE4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800BDD90.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800BDEB0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800BDF08.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800BE048.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800BE474.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800BE624.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800BE634.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800BE664.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800BE690.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800BE6B8.s")

void func_800BE800(PlayerActor*);
#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800BE800.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/8ADD0/func_800C1744.s")

extern s32 D_80113EFC;
void func_800C17E8(void) {
    s32 var = 1;
    if (D_80113EFC == 0) {
        D_80113EFC = var;
    }
}

//TODO: check if this should be &gPlayerActors[0] or gPlayerActors
void func_800C180C(void) {
    func_800BE800(&gPlayerActors[0]);
}