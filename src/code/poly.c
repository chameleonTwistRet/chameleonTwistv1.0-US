#include "common.h"

void ClearPolygon(void) {
    D_80240508 = 0;
}

const char D_8011BFF0[] = "\n";

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800C1E3C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800C2434.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800C2530.s")

void func_800C2634(Collider* arg0) {
    D_8024050C = 0;
    func_800C2434(arg0);
}

void func_800C2658(Collider* arg0) {
    func_800C2434(arg0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800C2678.s")

s32 func_800C275C(Rect3D* arg0, Collider* arg1) {
    s32 var_s3;
    Collider* temp_s0;
    Collider** var_s2;
    s32 i;

    var_s3 = 0;
    D_8024050C = 0;

    for (i = 0, var_s2 = &D_8024AAF8; i < gFieldCount; i++, var_s2++){
        temp_s0 = *var_s2;
        if (((temp_s0->unk_10 != 0x21) || (arg1->unk_6C == 0)) && (temp_s0->unk_118 & 2) && (temp_s0->unk_0C & 0x77)) {
            if (IfRectsIntersect(arg0, &temp_s0->unk_CC) == 0) {
                //yes...this is required
                continue;
            } else {
                func_800C2434(temp_s0);
                var_s3++;
            }
        }
    }
    return var_s3;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800C2858.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800C2954.s")

// Checks if Poly's bounding box intersects with the given rectangle
s32 IfPolyBoundIntersectsRect(Poly* poly, Rect3D* rect) {
    if (poly->unk_00 < 0) {
        return 0;
    }

    func_800D0AE4(poly, 1);

    if (IfRectsIntersect(rect, &poly->boundBox) == 0) {
        return 0;
    }
    return 1;
}

f32 Distance3DTo2DProjectedXY(Vec3f vecA, Vec2f vecB) {
    return NORM_3((vecA.x - vecB.x), (vecA.y - vecB.y), vecA.z);
}

void DistanceWithLine(Vec3f point, Vec2f lineStart, Vec2f lineEnd, f32* distance, Vec3f* closestPoint3D, Poly* polygon) {
    f32 deltaYLine;
    f32 deltaXLine;
    f32 lineSegmentLengthSquared;
    f32 sp5C;  // Unused
    f32 deltaYPoint;
    f32 deltaXPoint;
    f32 sp58;  // Unused
    f32 sp54;  // Unused
    Vec2f closestPoint2D;
    Vec3f closestPoint3DLocal;
    f32 projectionFactor;

    deltaXPoint = point.x - lineStart.x;
    deltaYPoint = point.y - lineStart.y;
    deltaXLine = lineEnd.x - lineStart.x;
    deltaYLine = lineEnd.y - lineStart.y;

    lineSegmentLengthSquared = (SQ(deltaXLine)) + (SQ(deltaYLine));

    if (lineSegmentLengthSquared == 0.0f) {
        DummiedPrintf3("DistanceWithLine(): determinant is 0\n");
    }
    projectionFactor = ((deltaXLine * deltaXPoint) + (deltaYLine * deltaYPoint)) / lineSegmentLengthSquared;

    if (projectionFactor <= 0.0f) {
        closestPoint2D = lineStart;
    } else if (projectionFactor >= 1.0f) {
        closestPoint2D = lineEnd;
    } else {
        closestPoint2D.x = ((1.0f - projectionFactor) * lineStart.x) + (projectionFactor * lineEnd.x);
        closestPoint2D.y = ((1.0f - projectionFactor) * lineStart.y) + (projectionFactor * lineEnd.y);
    }

    *distance = Distance3DTo2DProjectedXY(point, closestPoint2D);

    closestPoint3DLocal.x = closestPoint2D.x;
    closestPoint3DLocal.y = closestPoint2D.y;
    closestPoint3DLocal.z = 0.0f;
    LocalToWorld(closestPoint3D, closestPoint3DLocal, polygon);
}

void MinimunDistance(Vec3f arg0, Poly* polygon, UnkMinDistance arg5) {
    f32 temp_f0;
    f32 temp_f2;
    u32 var_v0;

    WorldToLocal(&arg0, arg0, polygon);
    var_v0 = 0;
    temp_f0 = (polygon->unk_74 * arg0.y) + (polygon->unk_6C * arg0.x);
    temp_f2 = (polygon->unk_78 * arg0.y) + (polygon->unk_70 * arg0.x);

    if (temp_f0 < 0.0f) {
        var_v0 = 1;
    }
    if (temp_f2 < 0.0f) {
        var_v0 += 2;
    }
    if ((temp_f0 + temp_f2) > 1.0f) {
        var_v0 += 4;
    }

    switch (var_v0) {
    case 0:
        *arg5.vec = arg0;
        arg5.vec->z = 0.0f;
        LocalToWorld(arg5.vec, *arg5.vec, polygon);
        *arg5.unk_04 = arg0.z;
        *arg5.unk_08 = 0;
        return;
    case 3:
        *arg5.vec = polygon->offset;
        *arg5.unk_04 = Distance3DTo2DProjectedXY(arg0, polygon->unk_7C);
        *arg5.unk_08 = 1;
        return;
    case 6:
        *arg5.vec = polygon->unkVec;
        *arg5.unk_04 = Distance3DTo2DProjectedXY(arg0, polygon->unk_84);
        *arg5.unk_08 = 1;
        return;
    case 5:
        *arg5.vec = polygon->unkVec2;
        *arg5.unk_04 = Distance3DTo2DProjectedXY(arg0, polygon->unk_8C);
        *arg5.unk_08 = 1;
        return;
    case 2:
        DistanceWithLine(arg0, polygon->unk_7C, polygon->unk_84, arg5.unk_04, arg5.vec, polygon);
        *arg5.unk_08 = 1;
        return;
    case 4:
        DistanceWithLine(arg0, polygon->unk_84, polygon->unk_8C, arg5.unk_04, arg5.vec, polygon);
        *arg5.unk_08 = 1;
        return;
    case 1:
        DistanceWithLine(arg0, polygon->unk_8C, polygon->unk_7C, arg5.unk_04, arg5.vec, polygon);
        *arg5.unk_08 = 1;
        return;
    default:
        DummiedPrintf3("MinimunDistance(): invalid case\n");
        return;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/ListUpTouchedPolygon.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800C332C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800C33EC.s")

Vec3f* func_800C34E4(Vec3f* arg0, Vec3f arg1, UnkArg4* arg4, f32 arg5) {
    Vec3f sp54;
    f32 temp_f14;
    f32 temp_f18;
    f32 temp_f0;
    f32 pad;
    f32 temp_f2;
    Vec3f sp34;
    Poly* polygon;

    if (arg4->unk4) {
        sp54 = arg4->unk10;
        temp_f0 = arg1.x - sp54.x;
        temp_f18 = arg1.y - sp54.y;
        temp_f14 = arg1.z - sp54.z;
        temp_f2 = arg5 / NORM_3(temp_f0, temp_f18, temp_f14);

        temp_f0 *= temp_f2;
        arg1.x = sp54.x + (temp_f0);

        temp_f18 *= temp_f2;
        arg1.y = sp54.y + (temp_f18);

        temp_f14 *= temp_f2;
        arg1.z = sp54.z + (temp_f14);
    } else {
        polygon = arg4->unk0;
        WorldToLocal(&sp34, arg1, polygon);
        sp34.z = arg5;
        LocalToWorld(&arg1, sp34, polygon);
    }
    *arg0 = arg1;
    return arg0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800C3664.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/SearchPolygonBetween.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800C3D38.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800C3EB8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800C41C4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/Shadows_Reset.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/Shadows_Set.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800C48A8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800C4A38.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800C4AAC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800C4B1C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800C4C38.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800C4D88.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800C4E68.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/Shadows_Draw_AntQueen.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/Shadows_Draw.s")


/**
 * @brief Calculates the angle of the (x,z) vector from a 3dim vector, with respect to the positive z-axis.
 *
 * @param vec: The 3dim vector to calculate the angle of.
 */
void func_800C569C(Vec3f vec) {
    // In this instance the z component is flipped.
    CalculateAngleOfVector(vec.x, -vec.z);
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800C56D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/CalcThrownEnemyNext.s")

void func_800C5CBC(Actor* actor) {
    Vec3f sp24;

    sp24.x = actor->unknownPositionThings[0].unk_00 + actor->pos.x;
    sp24.y = actor->pos.y;
    sp24.z = actor->unknownPositionThings[0].unk_08 + actor->pos.z;
    actor->unk_98 = 0;
    actor->unk_9C = 0;
    func_800C56D0(actor, sp24, 1);
    func_800C4B1C(actor);
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800C5D3C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/CalcWalkingEnemyNext.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/CalcJumpingEnemyNext.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800C7AEC.s")

void CalcEnemyNextPosition(Actor* actor) {
   switch (actor->unk_A0.unk_04) {
   case 0:
       func_800C5CBC(actor);
       break;
   case 1:
       func_800C5D3C(actor);
       break;
   case 2:
       CalcWalkingEnemyNext(actor);
       break;
   case 3:
       CalcJumpingEnemyNext(actor);
       break;
   case 4:
       func_800C7AEC(actor);
       break;
   default:
       DummiedPrintf3("CalcEnemyNextPosition(): Unknown ATR_IDOU_XXXX\n");
       // double 810000
       break;
   }
   if (actor->tongueCollision >= 2) {
       func_800C4C38(actor);
   }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800C806C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800C83A4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800C8648.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800C87FC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800C8B60.s")

void func_800C8DB4(PlayerActor* arg0) {
    arg0->vaulting = 0;
    arg0->surface = -1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800C8DC4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800C8E10.s")

void func_800C8F70(PlayerActor* player) {
    player->surfaceSlide = 0;
    player->move.z = 0.0f;
    player->move.y = 0.0f;
    player->move.x = 0.0f;
}

void func_800C8F88(Vec3f* arg0) {
    f32 temp_f14;
    Rect3D* bounds;

    if (isInOverworld != TRUE) {
        if ((gCurrentStage == STAGE_ANT) && ((gCurrentZone == ZONE_SPIN_ROOM_1) || (gCurrentZone == STAGE_BOSSRUSH)) && (StageFlags[SF_SPIN_ROOM_1_COMPLETED] != 0)) {
            temp_f14 = SUM_OF_SQUARES(arg0->x, arg0->z);
            if (810000.0 < temp_f14) {
                temp_f14 = sqrtf(810000.0 / temp_f14);
                arg0->x *= temp_f14;
                arg0->z *= temp_f14;
            }
        } else {
            bounds = &gZoneFields[gCurrentZone].roomBounds;
            if (bounds->min.x > arg0->x ) {
                arg0->x = bounds->min.x;
            }
            if (bounds->max.x < arg0->x) {
                arg0->x = bounds->max.x;
            }
            if (bounds->min.z > arg0->z) {
                arg0->z = bounds->min.z;
            }
            if (bounds->max.z < arg0->z) {
                arg0->z = bounds->max.z;
            }
        }
    }
}

Vec3f* func_800C90E8(Vec3f* arg0, Collider* arg1) {
    Vec3f sp24;
    Collider* temp_v1;

    if (arg1->unk80 < 0) {
        Vec3f_Zero(&sp24);
    } else {
        temp_v1 = &D_80240520[arg1->unk80];
        if ((temp_v1->unk_10 == 0x14) || (temp_v1->unk_10 == 0x15) || (temp_v1->unk_10 == 0x16)) {
            sp24.x = temp_v1->unk_8C;
            sp24.y = temp_v1->unk_90;
            sp24.z = temp_v1->unk_94;
        } else {
            Vec3f_Zero(&sp24);
        }
    }
    *arg0 = sp24;
    return arg0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800C91AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800C941C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800C9484.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800C9668.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/CalcNextPosition.s")

void func_800CC524(void) {
    s32 i;

    Vec3f_Zero(&D_8011432C);
    Vec3f_Zero(&D_80114338);
    Vec3f_Zero(&D_80114344);
    Vec3f_Zero(&D_80114350);
    D_8011435C = 0.0f;
    D_80114360 = 0;
    D_80114364 = 0;
    D_80114368 = 0.0f;
    D_8011436C = 0.0f;
    D_80114370 = 0;
    for (i = 0; i < ARRAY_COUNT(D_80252718); i++) {
        Vec3f_Zero(&D_80252718[i]);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800CC5D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800CC67C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800CC874.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800CCDA0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800CCFE0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800CD220.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800CD4C4.s")

void func_800CD52C(s32 arg0, s32 arg1, Poly* arg2, Vec3f* arg3, Vec3f* arg4) {
    Field* temp_v0 = &gZoneFields[gCurrentZone];

    arg3->x = temp_v0->unkA4;
    arg3->y = temp_v0->unkA8;
    arg3->z = temp_v0->unkAC;
    arg4->x = temp_v0->cameraAnchor.x;
    arg4->y = temp_v0->cameraAnchor.y;
    arg4->z = temp_v0->cameraAnchor.z;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800CD598.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800CD6A8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800CDC40.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800CDDA4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800CE13C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800CE168.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800CE51C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800CE5B0.s")

void ApplyRotationToVector(Vec3f* vecA, Vec3f* vecB, f32 degreesAngle) {
    Vec3f differenceVector;

    // Calculate the difference vector between the two vectors
    differenceVector.x = vecA->x - vecB->x;
    differenceVector.y = vecA->y - vecB->y;
    differenceVector.z = vecA->z - vecB->z;

    // Rotate the difference vector by the given angle around the y-axis
    RotateVector3D(&differenceVector, differenceVector, DEGREES_TO_RADIANS_PI(degreesAngle), 2);

    // Add the rotated difference vector to the second vector to get the first vector
    vecA->x = vecB->x + differenceVector.x;
    vecA->y = vecB->y + differenceVector.y;
    vecA->z = vecB->z + differenceVector.z;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/poly/func_800CFB64.s")

void SetCameraParameters(void) {
    Field* temp = &gZoneFields[gCurrentZone];
    Camera* cam;
    char pad[4];
    s32 i;
    Vec3f sp3C;
    Vec3f sp30;
    char pad2[4];

    if ((isInOverworld == 1) && (D_80217494 == 0)) {
        func_800CC874(gPlayerActors, gTongues, D_80176918, &sp3C, &sp30, 0);
    } else if (D_80176918[0].unk0 == 1) {
        func_800CFB64(temp->cameraMode, gPlayerActors, gTongues, D_80176918, &sp3C, &sp30, 0);
    } else {
        func_800CE5B0(gPlayerActors, gTongues, D_80176918, &sp3C, &sp30, 0);
    }


    for (i = 0, cam = &D_80176918[0]; i < ARRAY_COUNT(D_80176918); i++, cam++) {
        cam->f5.x = sp3C.x;
        cam->f5.y = sp3C.y;
        cam->f5.z = sp3C.z;

        cam->f4.x = sp30.x;
        cam->f4.y = sp30.y;
        cam->f4.z = sp30.z;
        if (gCurrentStage != STAGE_VS) {
            break;
        }
    }
}

/* Create a rectangle using two vectors then perform an unknown operation */
void func_800D02EC(f32 x1, f32 x2, f32 y1, f32 y2, f32 z1, f32 z2) {
    Rect3D r;

    // define a rectangle with the given bounds
    r.min.x = x1;
    r.max.x = x2;
    r.min.y = y1;
    r.min.z = z1;
    r.max.y = y2;
    r.max.z = z2;

    // ensure max > min
    OrderRectBounds(&r);
    func_800C2678(&r, 0x77, 2); //unknown
}



s32 func_800D7248(f32 x, f32 y, f32 z, f32 arg3, f32 arg4, f32* outX, f32* arg6, f32* arg7) {
    Vec3f vec;
    s32 var_v1;
    Collider* collider;

    vec.x = x;
    vec.y = y;
    vec.z = z;

    collider = func_800C3EB8(vec, arg3, arg4);

    // if a collider was found assign its position to the output variables then return 1 for success
    return (collider != NULL) ?
        *outX = collider->unk_94,
        *arg6 = collider->unk_98,
        *arg7 = collider->unk_9C,
        1 :
        0;
}

s32 func_800D03E0(f32 x1, f32 y1, f32 z1, f32 x2, f32 y2, f32 z2, f32* outX, f32* outY, f32* outZ) {
    Vec3f vecOne;
    Vec3f vecTwo;
    Collider* collider;

    vecOne.x = x1;
    vecOne.y = y1;
    vecOne.z = z1;

    vecTwo.x = x2;
    vecTwo.y = y2;
    vecTwo.z = z2;

    collider = SearchPolygonBetween(vecOne, vecTwo, 0x77, 1, 1);
    return (collider != NULL) ?
        *outX = collider->unk_94,
        *outY = collider->unk_98,
        *outZ = collider->unk_9C,
        1 :
        0;
}


void func_800D04C0(f32* x, f32* y, f32* z, f32 arg3) {
    Vec3f destVec;
    Vec3f srcVec;

    srcVec.x = *x;
    srcVec.y = *y;
    srcVec.z = *z;

    //wrong number of args(?)
    func_800C3664(&destVec, srcVec, arg3, 0x77);

    *x = destVec.x;
    *y = destVec.y;
    *z = destVec.z;
}

