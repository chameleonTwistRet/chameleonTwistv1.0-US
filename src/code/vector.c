#include "common.h"

// Auth: Rain, revo, simonlindholm
void DummiedPrintf3(char* arg0, ...) {
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/vector/WrapAngle.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/vector/CompareWrappedAngles.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/vector/func_800D06B4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/vector/OnlyCheckPolyInfoLevel.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/vector/func_800D0AE4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/vector/ProjectOnPolygon.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/vector/WorldToLocal.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/vector/LocalToWorld.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/vector/IsInsidePolygon.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/vector/IsOnPolygon.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/vector/RotateVector3D.s")

/**
 * @brief Return if a point is within a certain radius of another point.
 *
 * @param   vec1:           first vector
 * @param   vec2:           second vector
 * @param   approxRadius:   radius to check
 *
 * @return (s32 bool) 1 if within radius, 0 if not
 */
s32 IsNearPoint(Vec3f vec1, Vec3f vec2, f32 approxRadius) {
    f32 x_0;
    f32 z_0;
    f32 y_0;
    s32 ret;

    // Find a vector to represent the distance between the two points
    x_0 = vec1.x - vec2.x;
    y_0 = vec1.y - vec2.y;
    z_0 = vec1.z - vec2.z;

    if (NORM_3(x_0, y_0, z_0) < approxRadius) {     // Check if said vector is within the given radius from the origin
        ret = 1;
    } else {
        ret = 0;
    }
    return ret;
}

/**
 * @brief compares two Vec3f structs. [Both are neccessary for checksum]
 *
 * @param vec1: first vector
 * @param vec2: second vector
 *
 * @return (s32 bool) 1 if equal, 0 if not
 */
s32 Vec3f_Equals(Vec3f vec1, Vec3f vec2) {
    return ((vec1.x == vec2.x) && (vec1.y == vec2.y) && (vec1.z == vec2.z)) ? 1 : 0;
}

/**
 * @brief compares two Vec3f structs. [Both are neccessary for checksum]
 *
 * @param vec1: first vector
 * @param vec2: second vector
 *
 * @return (s32 bool) 1 if equal, 0 if not
 */
s32 Vec3f_EqualsCopy(Vec3f vec1, Vec3f vec2) {
    return ((vec1.x == vec2.x) && (vec1.y == vec2.y) && (vec1.z == vec2.z)) ? 1 : 0;
}

/**
 * @brief Sets the input vector to have given values.
 *
 * @param vec: pointer for vector to set
 * @param x: x value to set
 * @param y: y value to set
 * @param z: z value to set
 */
void Vec3f_Set(Vec3f* vec, f32 x, f32 y, f32 z) {
    vec->x = x;
    vec->y = y;
    vec->z = z;
}

/**
 * @brief Sets the input vector to the zero vector.
 *
 * @param vec: pointer for vector to zero
 */
void Vec3f_Zero(Vec3f* vec) {
    vec->x = 0.0f;
    vec->y = 0.0f;
    vec->z = 0.0f;
}