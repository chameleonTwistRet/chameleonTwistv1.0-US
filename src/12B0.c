#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_80025F40.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_80026C88.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_80026CB8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_80026E40.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_80026FC8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_80027148.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_80027250.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_80027408.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_80027500.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_80027660.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_800276A4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_80029C78.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_80029F60.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8002A2C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8002A8D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8002ABA8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8002B24C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8002BCC8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8002BF54.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8002C2F4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8002C4C4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8002C500.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8002C568.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8002C5E4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8002C69C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8002C6D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8002C700.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8002C790.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8002C7B8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8002C918.s")

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

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8002CAD4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8002CB1C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/osBbUsbDevGetHandle.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8002CBA4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8002CBE8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8002CCB0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8002CDCC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8002CEC0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8002D66C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8002D798.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8002D888.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8002D908.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8002DDD8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8002E1D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8002E4AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8002EBB4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8002ED08.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8002ED2C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8002ED48.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8002EDA4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8002EEBC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8002EFD0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8002F064.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8002F0AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_80030388.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_800304F8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_80030784.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8003086C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_800308D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_80030990.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_80030AB8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_80030AEC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_80030D24.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_80030E1C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_80031334.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_800315F8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_80031670.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8003177C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_80031CA4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_80031F90.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8003260C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_800331A8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_80033604.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_800338BC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_800339A4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_80033C4C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_80034018.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_80034504.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8003487C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_80034968.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_800355EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_80035754.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8003599C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_80035E04.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_80036268.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8003641C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_80036910.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_80036978.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_800369AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_80036A34.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_800370BC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_80037340.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8003764C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8003768C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/n_alSeqpDelete.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_80037758.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8003777C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_800378A8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8003790C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_80037D28.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_80037D34.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_80037E78.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_80037F30.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_80037FFC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_800381C8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_800382D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_80038340.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_800386CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_80038864.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_80038B40.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_80038CD0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_80038E3C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_800394E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_80039538.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_80039720.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_80039774.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_80039DE0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8003AB3C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8003AB80.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8003ACE0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8003AD84.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8003AF34.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8003AF40.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/n_alSynFreeFX.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8003B048.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8003B1D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8003B1EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8003B4F4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8003B5F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8003B7A0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8003B86C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8003BA1C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8003BB94.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8003BDC0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8003C4F8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8003C838.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8003C85C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8003C88C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8003C968.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8003C9A8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8003CDD4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8003CE1C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8003CF84.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8003CFA0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8003D1F4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8003D2DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8003D2FC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8003D338.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8003D340.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8003D45C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8003D5FC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8003D630.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8003D694.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8003D840.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8003D938.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8003DB08.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8003E96C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8003EA38.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8003EA80.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8003EB88.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8003EDE0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8003F0A8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8003F0B4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8003F1F8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8003F214.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8003F39C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8003F3B8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8003F4D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8003F504.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8003F7C8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8003F880.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8003F8E8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8003F928.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8003FFC8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8003FFD0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8003FFD8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8003FFE0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8004033C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_800403A0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_800403D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_80040F00.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_800413A8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_800415B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_800415BC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_800417D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_800417D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_80041870.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8004187C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_80041A84.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_80041A8C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_80041B24.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_80041B38.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_80041E30.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_80041E48.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8004205C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_800420B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_800424F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_80042510.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_80042530.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_80042550.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_80042570.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_80042590.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_800425B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_800425D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_800425F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_800425F8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_800427D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_80042834.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_80042B40.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_80042B48.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_80042C54.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_80042CB0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_80042E38.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_80042E48.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8004305C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8004307C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8004309C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_800430BC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_800430DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_80043124.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_80043260.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_80043280.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_800432A0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_800433D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_80043418.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_80043788.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_800438B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_800439D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_800439FC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_80043B74.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8004573C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_800457B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_80045910.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_80045918.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_800459FC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_80045A20.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_80045AEC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_80045AF4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_80045CB0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_80045CE4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_80045E80.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_80045EC8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_80045FFC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_80046004.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_80046124.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8004612C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8004632C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_80046348.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_80046564.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_80046578.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_80046920.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_80046A4C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_80046BE4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_80047040.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_80047138.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_80047140.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_80047224.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8004725C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_80047314.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_800473CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_80047460.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_800474EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_80048078.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_80048080.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_800481AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_800481CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_800481EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8004820C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8004822C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_80048234.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8004831C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8004833C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8004835C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8004837C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8004839C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_800483BC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_800483DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_800483E4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8004852C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8004855C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_80048604.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8004860C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_800487FC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_80048804.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8004880C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_80048848.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_80048998.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_800489A4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_80048A7C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_80048A84.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_80048C08.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_80048C14.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_80048C94.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_80048C9C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_80048E3C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_80048E44.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_80048F50.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_80048FBC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8004937C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_80049384.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8004949C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_80049508.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_800495A8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8004A150.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8004A1B4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8004A2E8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8004A41C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8004A514.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8004A638.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8004A73C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/12B0/func_8004ABC0.s")
