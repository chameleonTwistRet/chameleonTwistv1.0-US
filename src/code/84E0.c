#include "common.h"
//US's 84E0

/**
 * @brief Wrap degrees to range [0-360)
 *
 * @param theta_ptr: pointer to the angle to wrap
 * @return (ptr) altered angle
 */
void WrapDegrees(f32* theta_ptr) {
    while(1){
        f32 theta = *theta_ptr;

        if (theta >= 360.0f) {
            *theta_ptr = theta - 360.0f;
            continue;
        } else if (theta < 0.0f) {
            *theta_ptr = theta + 360.0f;
            continue;
        } else {
            break;
        }
    }
}

/**
 * @brief This function takes in a vector, (a,b) in the form of two floats, and a radius c.
 * If the vector is outside the disk of radius c about (0,0), it is normalized to be on the boundary.
 *
 * @param a: pointer to the x component of the vector
 * @param b: pointer to the y component of the vector
 * @param c: radius of a given disk
 */
void ClampPointToDisk(f32* a, f32* b, f32 radius) {
    f32 norm;
    f32 aSquaredPlusBSquared;

    aSquaredPlusBSquared = SUM_OF_SQUARES(*a, *b);
    if (!(aSquaredPlusBSquared <= SQ(radius))) {
        norm = sqrtf(aSquaredPlusBSquared);
        *a = (*a * radius) / norm;
        *b = (*b * radius) / norm;
    }
}

/**
 * @brief Calculate the counterclockwise angle between two 2D points relative to the positive x-axis.
 *
 * This function calculates the counterclockwise angle in radians between two 2D points (x1, y1) and (x2, y2)
 * relative to the positive x-axis. The angle is computed by CalculateAngleOfVector,
 * which uses a lookup table to determine the angle based on the provided 2D vector (x, y).
 *
 * @param x1 The x-coordinate of the first point.
 * @param y1 The y-coordinate of the first point.
 * @param x2 The x-coordinate of the second point.
 * @param y2 The y-coordinate of the second point.
 *
 * @return (f32) The counterclockwise angle between the two points in radians.
 */
f32 CalcAngleBetween2DPoints(f32 x1, f32 y1, f32 x2, f32 y2) {
    return CalculateAngleOfVector(x2 - x1, -(y2 - y1));
}

/**
 * @brief Reflect an angle about the x-axis to the first two quadrants (0 to 180 degrees).
 *
 * This function reflects an input angle about the x-axis, effectively mapping it to the first
 * two quadrants. The result is an angle within the range [0, 180] degrees.
 *
 * @param theta The input angle in degrees.
 * @return (f32) The reflected angle in the range [0, 180] degrees.
 */
f32 ReflectAngleToUpperQuadrants(f32 theta) {
    if (theta < 0.0f) {
        theta = -theta;
    }
    if (theta > 180.0f) {
        theta = 360.0f - theta;
    }
    return theta;
}

/**
 * @brief Check if one angle is within tolerance of another angle (degrees).
 *
 * This function determines whether the target angle is approximately equal to the reference angle within
 * the specified tolerance angle.
 *
 * @param targetAngle The angle to be checked.
 * @param refAngle The reference angle for comparison.
 * @param toleranceAngle The tolerance angle, within which the angles are considered approximately equal. [0, 180]
 *
 * @return (s32) 1 if target is within the specified tolerance of reference; otherwise, it returns 0.
 */
s32 IsAngleWithinTolerance(f32 targetAngle, f32 refAngle, f32 toleranceAngle) {

    if (ReflectAngleToUpperQuadrants(targetAngle - refAngle) <= toleranceAngle) {
        return 1;
    }
    return 0;
}

/**
 * @brief Compare two angles to determine their relative positioning within a 180-degree range.
 *
 * This function compares two angles, `refAngle` and `targetAngle`, to determine whether said target angle is within
 * a 180-degree range relative to the reference angle. It returns 1 if the target falls within this range,
 * and -1 if it does not.
 *
 * @param refAngle The reference angle, used to define the 180-degree range.
 * @param targetAngle The angle to be compared to `angleA`.
 *
 * @return (s32) 1 if target is within the 180-degree range relative to reference; otherwise, it returns -1.
 */
s32 AreAnglesWithin180Degrees(f32 refAngle, f32 targetAngle) {
    if (refAngle < 180.0f) {
        if ((refAngle < targetAngle) && (targetAngle <= (refAngle + 180.0f))) {
            return 1;
        }
        return -1;
    }
    if (((refAngle - 180.0f) < targetAngle) && (targetAngle <= refAngle)) {
        return -1;
    }
    return 1;
}

// JP EQUIVALENT - "func_8002D328"
// Rotates angle one 90 degrees, then checks if angle two is within 180 degrees of it
s32 func_8002CBA4(f32 theta, f32 phi) {
    f32* theta_ptr;

    theta_ptr = &theta;
    theta = theta - 90.0f;
    WrapDegrees(theta_ptr);
    return AreAnglesWithin180Degrees(theta, phi);
}

// JP EQUIVALENT - "func_8002D36C"
s32 func_8002CBE8(f32* arg0, f32 arg1, f32 arg2) {
    s32 phi_v1;
    f32 phi_f0;
    s32 sp1C;

    phi_v1 = 0;
    if (*arg0 < arg1) {
        phi_f0 = -(*arg0 - arg1);
    } else {
        phi_f0 = *arg0 - arg1;
    }
    if (phi_f0 > 180.0f) {
        phi_f0 = 360.0f - phi_f0;
    }
    if (arg2 <= phi_f0) {
        sp1C = 0;
        *arg0 += arg2 * (f32) AreAnglesWithin180Degrees(*arg0, arg1);
    } else {
        *arg0 = arg1;
        phi_v1 = 1;
    }
    sp1C = phi_v1;
    WrapDegrees(arg0);
    return sp1C;
}

// JP EQUIVALENT - "func_8002D434"
//TODO: fix rodata
#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8002CCB0.s")

// JP EQUIVALENT - "func_8002D550"
//TODO: fix rodata
#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8002CDCC.s")

void Actors_Init(s32 actorIndex, s32 actorID, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7, f32 arg8, f32 arg9, f32 argA, f32 argB, f32 argC, f32 argD, f32 argE, f32 argF, f32 arg10, f32 arg11, f32 arg12, f32 arg13, s32 arg14, s32 arg15, s32 arg16, s32 arg17);
#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/Actors_Init.s")

extern s32 gActorCount;
s32 Actor_Init(s32 id, f32 posX, f32 posY, f32 posZ, f32 arg4, f32 arg5, f32 arg6, f32 arg7, f32 arg8, f32 arg9, f32 argA, f32 argB, f32 argC, f32 argD, f32 argE, f32 argF, f32 arg10, f32 arg11, f32 arg12, s32 arg13, s32 arg14, s32 arg15, s32 arg16) {
    s32 i;
    Actor* curActor = gActors;

    for (i = 0; i < ARRAY_COUNT(gActors); i++, curActor++) {
        if (curActor->actorID == 0) {
            Actors_Init(i, id, posX, posY, posZ, arg4, arg5, arg6, arg7, arg8, arg9, argA, argB, argC, argD, argE, argF, arg10, arg11, arg12, arg13, arg14, arg15, arg16);
            gActorCount++;
            return i;
        }
    }
    return -1;
}

// JP EQUIVALENT - "func_8002DF5C"
s32 func_8002D798(s32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4) {
    s32 i;

    for (i = 0; i < ARRAY_COUNT(gActors); i++) {
        if (Poles[i].mode == 0) {
            Poles[i].mode = arg0;
            Poles[i].pos.x = arg1;
            Poles[i].pos.y = arg2;
            Poles[i].pos.z = arg3;
            Poles[i].yStretch = arg4;
            return i;
        }
    }
    return -1;
}

s32 Actor_SpawnAt(s32 actorID, f32 posX, f32 posY, f32 posZ) {
    Actor_Init(actorID, posX, posY, posZ, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0, 0, 0, 0);
}

// JP EQUIVALENT - "func_8002E0CC"
#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8002D908.s")

// JP EQUIVALENT - "func_8002E5DC"
// CHANGES: no billiards camera force
#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8002DDD8.s")

// JP EQUIVALENT - "func_8002E9F4"
#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8002E1D4.s")

// JP EQUIVALENT - "func_8002ECCC"
#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8002E4AC.s")

// JP EQUIVALENT - "func_8002F3D4"
#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8002EBB4.s")

// JP EQUIVALENT - "func_8002F528"
#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8002ED08.s")

// JP EQUIVALENT - "func_8002F54C"
#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8002ED2C.s")

// JP EQUIVALENT - "func_8002F568"
#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8002ED48.s")

// JP EQUIVALENT - "func_8002F5C4"
#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8002EDA4.s")

// JP EQUIVALENT - "func_8002F6DC"
#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8002EEBC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/SetPlayerImpulse.s")

// JP EQUIVALENT - "func_8002F960"
#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8002F064.s")

// JP EQUIVALENT - "func_8002FA34"
#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8002F0AC.s")

// JP EQUIVALENT - "func_80030DCC"
#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80030388.s")

// JP EQUIVALENT - "func_80030F3C"
#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_800304F8.s")

// JP EQUIVALENT - "func_800311C8"
#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80030784.s")

// JP EQUIVALENT - "func_800312B0" (are the calcs different?)
#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8003086C.s")

// JP EQUIVALENT - "func_800312FC"
#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_800308D0.s")

// JP EQUIVALENT - "func_800313BC"
#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80030990.s")

// JP EQUIVALENT - "func_800314E4"
#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80030AB8.s")

// JP EQUIVALENT - "func_80031518"
#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80030AEC.s")

// JP EQUIVALENT - "func_800317A0"
#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80030D24.s")

// JP EQUIVALENT - "func_80031898"
#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80030E1C.s")

// JP EQUIVALENT - "func_80031DB0"
#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80031334.s")

// JP EQUIVALENT - "func_80032074"
#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_800315F8.s")

// JP EQUIVALENT - "func_800320EC"
#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80031670.s")

// JP EQUIVALENT - "func_800321F8"
#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8003177C.s")

// JP EQUIVALENT - "func_80032720"
#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80031CA4.s")

// JP EQUIVALENT - "func_80032A0C"
#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80031F90.s")

// JP EQUIVALENT - "func_80033048"
#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8003260C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/pickup_collide_func.s")

// JP EQUIVALENT - "func_80034104"
#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80033604.s")

// JP EQUIVALENT - "func_800343B4"
#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_800338BC.s")

// JP EQUIVALENT - "func_8003449C"
#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_800339A4.s")

// JP EQUIVALENT - "func_80034744"
#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80033C4C.s")

// JP EQUIVALENT - "func_80034B10"
#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80034018.s")

// JP EQUIVALENT - "func_80034FFC"
#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80034504.s")

// JP EQUIVALENT - "func_80035374"
#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8003487C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ControlTongue.s")

// JP EQUIVALENT - "func_800360E4"
#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_800355EC.s")

// JP EQUIVALENT - "func_8003624C"
#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80035754.s")

// JP EQUIVALENT - "func_80036490"
#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8003599C.s")

// JP EQUIVALENT - "func_80036900"
#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80035E04.s")

// JP EQUIVALENT - "func_80036D74"
#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80036268.s")

// JP EQUIVALENT - "func_80036F30"
#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8003641C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/IsExplodingActor.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/IsActiveExplosion.s")

// JP EQUIVALENT - "func_80037584"
#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_800369AC.s")

// JP EQUIVALENT - "func_8003760C" (i think? though there MIGHT be differences)
#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80036A34.s")

// JP EQUIVALENT - "func_80037D14"
#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_800370BC.s")

// JP EQUIVALENT - "func_80037F98"
#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80037340.s")

// JP EQUIVALENT - "func_800382B4"
void func_8003764C(f32* arg0, f32 arg1) {
    if (*arg0 > arg1) {
        *arg0 = arg1;
    }
    if (*arg0 < -arg1) {
        *arg0 = -arg1;
    }
}

// JP EQUIVALENT - "func_800382F4"
#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8003768C.s")

// JP EQUIVALENT - "func_800383A0"
#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80037738.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorInit_GreyAntSpawner.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorTick_GreyAntSpawner.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorInit_GreyAnt.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorTick_GreyAnt.s")

void ActorInit_BulletHellAntSpawner(Actor* bulletHellAntSpawnerActor) {
    bulletHellAntSpawnerActor->userVariables[1] = bulletHellAntSpawnerActor->unk_128;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorTick_BulletHellAntSpawner.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorInit_AntBulletHell.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorTick_BulletHellAnt.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorTick_RedAntSpawner.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorTick_AntTrioSpawner.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorInit_AntTrio.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorTick_AntTrio.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorInit_RedAnt.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorTick_RedAnt.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80038B40.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80038CD0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80038E3C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_800394E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80039538.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80039720.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80039774.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80039DE0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8003AB3C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8003AB80.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8003ACE0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8003AD84.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8003AF34.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8003AF40.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/n_alSynFreeFX.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8003B048.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8003B1D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8003B1EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8003B4F4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8003B5F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8003B7A0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8003B86C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8003BA1C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8003BB94.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8003BDC0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8003C4F8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8003C838.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8003C85C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8003C88C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8003C968.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8003C9A8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8003CDD4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8003CE1C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8003CF84.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8003CFA0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8003D1F4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8003D2DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8003D2FC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8003D338.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8003D340.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8003D45C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8003D5FC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8003D630.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8003D694.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8003D840.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8003D938.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8003DB08.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8003E96C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8003EA38.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8003EA80.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8003EB88.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8003EDE0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8003F0A8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8003F0B4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8003F1F8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8003F214.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8003F39C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8003F3B8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8003F4D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8003F504.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8003F7C8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8003F880.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8003F8E8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8003F928.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8003FFC8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8003FFD0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8003FFD8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8003FFE0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8004033C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_800403A0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_800403D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80040F00.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_800413A8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_800415B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_800415BC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_800417D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_800417D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80041870.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8004187C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80041A84.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80041A8C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80041B24.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80041B38.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80041E30.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80041E48.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8004205C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_800420B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_800424F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80042510.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80042530.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80042550.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80042570.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80042590.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_800425B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_800425D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_800425F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_800425F8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_800427D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80042834.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80042B40.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80042B48.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80042C54.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80042CB0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80042E38.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80042E48.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8004305C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8004307C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8004309C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_800430BC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_800430DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80043124.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80043260.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80043280.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_800432A0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_800433D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80043418.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80043788.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_800438B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_800439D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_800439FC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80043B74.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8004573C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_800457B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80045910.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80045918.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_800459FC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80045A20.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80045AEC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80045AF4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80045CB0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80045CE4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80045E80.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80045EC8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80045FFC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80046004.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80046124.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8004612C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8004632C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80046348.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80046564.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80046578.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80046920.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80046A4C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80046BE4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80047040.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80047138.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80047140.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80047224.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8004725C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80047314.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_800473CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80047460.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_800474EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80048078.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80048080.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_800481AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_800481CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_800481EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8004820C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8004822C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80048234.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8004831C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8004833C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8004835C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8004837C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8004839C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_800483BC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_800483DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_800483E4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorInit_BattleModeSandCrab.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8004855C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80048604.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8004860C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_800487FC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80048804.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8004880C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80048848.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80048998.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorTick_BattleModeSandCrabSpawner.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80048A7C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80048A84.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80048C08.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80048C14.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80048C94.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80048C9C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80048E3C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80048E44.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80048F50.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_80048FBC.s")

void ActorInit_UnkFireSpawner(Actor* actor){
  return;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/ActorTick_UnkFireSpawner.s")

void ActorTick_PickupHeartFalling(Actor* arg0) {
    f32 temp_f2;

    if (arg0->userVariables[0] == 0) {
        arg0->vel.y -= (3.2f + (arg0->vel.y * 0.05f));
        temp_f2 = arg0->pos.y + arg0->vel.y;
        if (temp_f2 < 0.0f) {
            arg0->pos.y = 0.0f;
            arg0->userVariables[0] = 1;
            return;
        }
        arg0->pos.y = temp_f2;
    }
}

void ActorTick_Powerup(Actor* arg0) {
    f32 calc;

    if (arg0->userVariables[0] != 0) {
        arg0->userVariables[1]++;
        if (arg0->unk_124 == arg0->userVariables[1]) {
            func_80030AEC(arg0);
        }
    } else {
        arg0->vel.y -= 3.2f + (arg0->vel.y * 0.05f);
        calc = arg0->pos.y + arg0->vel.y;
        if (calc < arg0->position._f32.x) {
            arg0->pos.y = arg0->position._f32.x;
            arg0->userVariables[0] = 1;
        } else {
            arg0->pos.y = calc;
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/Actors_Tick.s")

void func_8004A150(s32 arg0) {
    s32 i;
    gCurrentActivePlayerPointer = &gPlayerActors[0];
    gTongueOnePointer = &gTongues[0];
    for (i = 0; i < arg0; i++){
        Actors_Tick();
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8004A1B4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8004A2E8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8004A41C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8004A514.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8004A638.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8004A73C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/84E0/func_8004ABC0.s")
