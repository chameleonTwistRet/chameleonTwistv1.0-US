#include "common.h"
//this is 1.0's version of JP B39A0

void func_800D18F8(Collider* arg0, s32 sfxID, s32 arg2);
void func_800D197C(Collider* arg0, s32 sfxID, s32 arg2);
void func_800D1DF0(Collider* arg0, s32 sfxID);
void func_800D18A4(Collider* arg0, s32 sfxID);
void func_800D1728(Collider* arg0, s32 sfxID, s32 arg2);
void func_800D16A0(Collider* arg0, s32 sfxID, s32 arg2);
void func_800D17A4(Collider* arg0, s32 sfxID0, s32 sfxID1, s32 arg3);
void func_800D1A18(Collider* arg0, s32 sfxID, s32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7, f32 arg8);
void func_800D1C28(Collider* arg0, s32 sfxID, s32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7, f32 arg8);

void func_800D22D8(Collider* arg0);
void func_800D22B4(Collider* arg0);
void func_800D2290(Collider* arg0);
void func_800D2270(Collider* arg0);
void func_800D224C(Collider* arg0);
void func_800D2228(Collider* arg0);
void func_800D2204(Collider* arg0);
void func_800D21E0(Collider* arg0);
void func_800D21B8(Collider* arg0);
void func_800D2158(Collider* arg0);
void func_800D20FC(Collider* arg0);
void func_800D209C(Collider* arg0);
void func_800D203C(Collider* arg0);
void func_800D1FD4(Collider* arg0);
void func_800D1F70(Collider* arg0);
void func_800D1F4C(Collider* arg0);
void func_800D1F28(Collider* arg0);
void func_800D1F04(Collider* arg0);
void func_800D1EE0(Collider* arg0);
void func_800D1EBC(Collider* arg0);
void func_800D1E58(Collider* arg0);

s32 PlaySoundEffect(s32, f32*, f32*, f32*, s32, s32); //PlaySound
s32 func_800831DC(s32);
s32 func_800ABC48(s32);

extern s32 D_801813E4;

void func_800D16A0(Collider* arg0, s32 sfxID, s32 arg2) {
    if (((arg0->unk_00 + D_801813E4) % arg2) == 0) {
        func_800831DC(PLAYSFXAT(sfxID, arg0->sfxPos, 0, 0));
    }
}

void func_800D1728(Collider* arg0, s32 sfxID, s32 arg2) {
    if ((arg0->unk_00 + D_801813E4) % arg2 == 0) {
        PLAYSFX(sfxID, 0, 0x10);
    }
}

void func_800D17A4(Collider* arg0, s32 sfxID0, s32 sfxID1, s32 arg3) {
    if ((arg0->unk_B4 == 0) && (arg0->unk_BC == 1) && (arg0->unk_C0 == 0)) {
        func_800831DC(PLAYSFXAT(sfxID0, arg0->sfxPos, 0, 0));
        return;
    }
    if ((arg0->unk_BC == 1) && (((arg0->unk_00 + D_801813E4) % arg3) == 0) && (sfxID1 >= 0)) {
        func_800831DC(PLAYSFXAT(sfxID1, arg0->sfxPos, 0, 0));
    }
}

void func_800D18A4(Collider* arg0, s32 sfxID) {
    if (arg0->unk_B8 == 1) {
        func_800831DC(PLAYSFXAT(sfxID, arg0->sfxPos, 0, 0));
    }
}

void func_800D18F8(Collider* arg0, s32 sfxID, s32 arg2) {
    if ((arg0->unk_BC >= 0) && (((D_801813E4 - arg0->unk_BC) % arg2) == 0)) {
        PLAYSFX(sfxID, 0, 0x10);
    }
}

void func_800D197C(Collider* arg0, s32 sfxID, s32 arg2) {
    if ((arg0->unk_00 == gPlayerActors[0].surface) && ((arg0->unk_00 + D_801813E4) % arg2) == 0) {
        func_800831DC(PLAYSFXAT(sfxID, arg0->sfxPos, 0, 0));
    }
}

#ifdef NON_MATCHING
void func_800D1A18(Collider* arg0, s32 sfxID, s32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7, f32 arg8) {
    f32 temp_f0_2;
    s32 var_v0;
    f32 xPos;
    f32 zPos;
    f32 temp_f0;
    s32 zero = 0;
    f32 sp44;
    f32 var_f12;
    Vec3f sp34;

    if ((arg0->unk_00 + D_801813E4) % arg2 == 0) {
        zPos = gPlayerActors[0].pos.z - arg3;
        xPos = gPlayerActors[0].pos.x - arg4;
        var_v0 = 1;
        temp_f0 = (zPos - xPos) * SQROOT_2_DIV_2;

        if (temp_f0 < -(arg5 + arg7)) {
            var_v0 = 0;
        } else if (temp_f0 < -arg5) {
            sp44 = -arg5;
        } else if (temp_f0 < arg5) {
            sp44 = temp_f0;
        } else if (temp_f0 < arg5 + arg7) {
            sp44 = arg5;
        } else {
            var_v0 = 0;
        }

        temp_f0 = (zPos + xPos) * SQROOT_2_DIV_2;

        if (temp_f0 < -(arg6 + arg8)) {
            var_v0 = 0;
        } else if (temp_f0 < -arg6) {
            var_f12 = -arg6;
        } else if (temp_f0 < arg6) {
            var_f12 = temp_f0;
        } else if (temp_f0 < (arg6 + arg8)) {
            var_f12 = arg6;
        } else {
            var_v0 = 0;
        }

        if (var_v0 != 0) {
            sp34.z = (arg4 * 1.0f) + (var_f12 - sp44) * SQROOT_2_DIV_2;
            sp34.y = gPlayerActors[zero].pos.y;
            sp34.x = (arg3 * 1.0f) + (sp44 + var_f12) * SQROOT_2_DIV_2;
            func_800831DC(PlaySoundEffect(sfxID, &sp34.z, &sp34.y, &sp34.x, 8, 0));
        }
    }
}
#else
#pragma GLOBAL_ASM("asm/nonmatchings/code/B39A0/func_800D1A18.s")
#endif

void func_800D1C28(Collider* arg0, s32 sfxID, s32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7, f32 arg8) {
    s32 pad;
    s32 var_v0;
    f32 zPos;
    s32 zero = 0;
    f32 xPos;
    f32 sp44;
    f32 var_f12;
    Vec3f sp34;

    if ((arg0->unk_00 + D_801813E4) % arg2 == 0) {
        zPos = gPlayerActors[0].pos.z - arg3;
        xPos = gPlayerActors[0].pos.x - arg4;
        var_v0 = 1;
        if (xPos < -(arg5 + arg7)) {
            var_v0 = 0;
        } else if (xPos < -arg5) {
            sp44 = -arg5;
        } else if (xPos < arg5) {
            sp44 = xPos;
        } else if (xPos < arg5 + arg7) {
            sp44 = arg5;
        } else {
            var_v0 = 0;
        }

        if (zPos < -(arg6 + arg8)) {
            var_v0 = 0;
        } else if (zPos < -arg6) {
            var_f12 = -arg6;
        } else if (zPos < arg6) {
            var_f12 = zPos;
        } else if (zPos < arg6 + arg8) {
            var_f12 = arg6;
        } else {
            var_v0 = 0;
        }

        if (var_v0 != 0) {
            sp34.z = arg4 + sp44;
            sp34.y = gPlayerActors[zero].pos.y;
            sp34.x = arg3 + var_f12;
            func_800831DC(PlaySoundEffect(sfxID, &sp34.z, &sp34.y, &sp34.x, 0, 0));
        }
    }
}

void func_800D1DF0(Collider* arg0, s32 sfxID) {
    if ((func_800ABC48(arg0->unk_AC) != 0) && (arg0->unk_B0 != 0)) {
        func_800831DC(PLAYSFXAT(sfxID, arg0->sfxPos,0, 0));
        arg0->unk_B0 = 0;
    }
}

void func_800D1E58(Collider* arg0) {func_800D1A18(arg0, 0x50, 0x1E, -12800.0f, 19600.0f, 700.0f, 1500.0f, 1000.0f, 2000.0f);}

void func_800D1EBC(Collider* arg0) {
    func_800D1728(arg0, 0x54, 0x2D);
}

void func_800D1EE0(Collider* arg0) {
    func_800D1728(arg0, 0x56, 0x69);
}

void func_800D1F04(Collider* arg0) {
    func_800D16A0(arg0, 0x56, 0x78);
}

void func_800D1F28(Collider* arg0) {
    func_800D1728(arg0, 0x57, 0x1B);
}

void func_800D1F4C(Collider* arg0) {
    func_800D1728(arg0, 0x84, 0x1E);
}

void func_800D1F70(Collider* arg0) {func_800D1A18(arg0, 0x84, 0x1E, 6000.0f, 6000.0f, 600.0f, 1500.0f, 500.0f, 2000.0f);}


void func_800D1FD4(Collider* arg0) {func_800D1A18(arg0, 0x84, 0x1E, 2200.0f, 1400.0f, 700.0f, 1000.0f, 500.0f, 2000.0f);}

void func_800D203C(Collider* arg0) {func_800D1A18(arg0, 0x84, 0x1E, -8500.0f, 24000.0f, 600.0f, 2500.0f, 1000.0f, 1000.0f);}

void func_800D209C(Collider* arg0) {func_800D1C28(arg0, 0x84, 0x1E, -5100.0f, 25300.0f, 600.0f, 2500.0f, 1000.0f, 1000.0f);}

void func_800D20FC(Collider* arg0) {func_800D1C28(arg0, 0x84, 0x1E, 0.0f, 25300.0f, 600.0f, 2500.0f, 1000.0f, 1000.0f);}

void func_800D2158(Collider* arg0) {func_800D1A18(arg0, 0x84, 0x1E, 5100.0f, 23600.0f, 3000.0f, 600.0f, 1000.0f, 1000.0f);}


void func_800D21B8(Collider* arg0) {
    func_800D17A4(arg0, 0x9B, -1, 0x1E);
}

void func_800D21E0(Collider* arg0) {
    func_800D16A0(arg0, 0xCF, 0x1E);
}

void func_800D2204(Collider* arg0) {
    func_800D16A0(arg0, 0xA7, 0x2D);
}

void func_800D2228(Collider* arg0) {
    func_800D1728(arg0, 0xAB, 0x2D);
}

void func_800D224C(Collider* arg0) {
    func_800D1728(arg0, 0xAC, 0x27);
}

void func_800D2270(Collider* arg0) {
    func_800D18A4(arg0, 0xBA);
}

void func_800D2290(Collider* arg0) {
    func_800D18F8(arg0, 0xA8, 0x27);
}

void func_800D22B4(Collider* arg0) {
    func_800D197C(arg0, 0xA9, 0x24);
}

void func_800D22D8(Collider* arg0) {
    func_800D1DF0(arg0, 0x3B);
}
