#include "common.h"

//bss
char D_80181670[0xFA0];
u8 D_80182610;
u8 D_80182611;
u8 D_80182612;
u8 D_80182613;
u8 D_80182614;
u8 D_80182615;
u8 D_80182616;
u8 D_80182617;
u8 D_80182618;
u8 D_80182619;
u8 D_8018261A;
u8 D_8018261B;

//data
s16 sDebugLevelAccess = -1;
s32 sDebugInt = -1;

f32 D_800EA088[] = {
    1.299999952,
    1.200000048,
    1,
    0.6999999881,
    2
};
u8 gSelectedCharacters[4] = {0, 1, 2, 3};

s16 D_800EA0A0[] = {-1, 0};
s16 D_800EA0A4[] = {-1, 0};
s32 sGameModeStart = 18;

//value hooked onto the LoadStageByIndex call with D_80174878 to overwrite it
s32 sDebugStageOverride = -1;
s32 D_800EA0B0 = -1;
s32 D_800EA0B4 = -1;
s32 D_800EA0B8 = -1;
s32 D_800EA0BC = -1;
s32 D_800EA0C0 = -1;
s32 D_800EA0C4 = 0;
s16 D_800EA0C8[] = {-1, 0};
f32 D_800EA0CC = 0;
f32 D_800EA0D0 = 0;
f32 D_800EA0D4 = 0;
f32 sDebugPlayerHeights[4] = {0, 0, 0, 0};
u32 sDebugViewType = 0;
u32 sDebugViewZoomOut = 1000;
u32 sDebugViewRotate = 0;
//smth like this
char D_800EA0F4[][100] = {
    "ひだりうえ",
    "ひだりした",
    "みぎうえ",
    "みぎした"
};
s32 D_800EA284 = 0;
s32 D_800EA288[] = {0, 0};
s32 D_800EA290 = 0;
char D_800EA294[100] = "SPR_s0_leaf70";
char D_800EA2F8[100] = "SPR_s0_leaf71";
s32 D_800EA35C[] = {0, 0};
s32 D_800EA364 = 0;
char D_800EA368[][100] = {
    "ITEM_VITAL",
    "ITEM_3VITAL",
    "ITEM_MAXVITAL",
    "ITEM_COLLECT",
};
s32 sDebugTestView = 0;
u32 sDebugCodeSeqStep = 0;
s32 D_800EA500[] = {0, 0, 0, 0};

typedef struct unkarg0_2 {
/* 0x00*/ f32 unk_00;
/* 0x04 */ f32 unk_04;
/* 0x08 */ f32 unk_08;
/* 0x0C */ char unk_0C[4];
/* 0x10 */ f32 unk_10;
/* 0x14 */ f32 unk_14;
/* 0x18 */ f32 unk_18;
/* 0x18 */ f32 unk_1C;
/* 0x18 */ f32 unk_20;
/* 0x18 */ f32 unk_24;
/* 0x18 */ f32 UNK_28;
} unkarg0_2;

#pragma GLOBAL_ASM("asm/nonmatchings/code/debug/Debug_MovePlayer.s")

extern s32 D_80251740;

void Debug_ChangeRoom(void) {
    s32 shouldChangeRoom;

    if (func_800524CC(2) != 0) {
        shouldChangeRoom = TRUE;
        gCurrentZone--;
    }
    if (func_800524CC(1) != 0) {
        shouldChangeRoom = TRUE;
        gCurrentZone++;
    }
    if (gCurrentZone < 0) {
        gCurrentZone = D_80251740 - 1;
    }
    if (gCurrentZone >= D_80251740) {
        gCurrentZone = 0;
    }
    //@bug variable could be uninitialized
    if (shouldChangeRoom == 1) {
        if (isInOverworld == FALSE) {
            func_800BA954(gCurrentZone);
            return;
        }
        func_800BC1FC(gCurrentZone);
    }
}

void Debug_NOOP(void) {
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/debug/Debug_ChangeView.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/debug/func_8004BCEC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/debug/func_8004C3AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/debug/func_8004C7EC.s")

void func_8004CC20(unkarg0_2* arg0, f32 arg1, f32 arg2, f32 arg3, f32* arg4, f32* arg5, f32* arg6) {
    *arg4 = (arg0->unk_20 * arg3) + ((arg0->unk_00 * arg1) + (arg0->unk_10 * arg2));
    *arg5 = (arg0->unk_24 * arg3) + ((arg0->unk_04 * arg1) + (arg0->unk_14 * arg2));
    *arg6 = (arg0->UNK_28 * arg3) + ((arg0->unk_08 * arg1) + (arg0->unk_18 * arg2));
}

void func_8004CCAC(unkarg0_2* arg0, f32* arg1, f32* arg2) {
    *arg1 = (arg0->unk_24 * 100.0f) + (arg0->unk_14 * 0);
    *arg2 = (arg0->UNK_28 * 100.0f) + (arg0->unk_18 * 0);
}

void func_8004CCF4(unkarg0_2* arg0, f32* arg1, f32* arg2) {
    *arg1 = (arg0->unk_20 * 100.0f) + (arg0->unk_00 * 0);
    *arg2 = (arg0->UNK_28 * 100.0f) + (arg0->unk_08 * 0);
}

void func_8004CD3C(unkarg0_2* arg0, f32* arg1, f32* arg2) {
    *arg1 = (arg0->unk_10 * 0) + (arg0->unk_00 * 100.0f);
    *arg2 = (arg0->unk_14 * 0) + (arg0->unk_04 * 100.0f);
}

void Debug_ZeroInt(void) {
    sDebugInt = 0;
}

void Debug_TestView(void) {
    s32 *temp = &sDebugTestView;
    if (func_800524CC(R_TRIG) != 0) {
        *temp ^= 1;
    }
    if (sDebugTestView != 0) {
        setPrimColor(0, 0, 0, 255);
        printUISprite(0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 320.0f, 180.0f, 0.0f, SPRITE_BLANK);
        func_80077BC4(0.0f, 0.0f, 0.0f, 0.0f, 400.0f, 2000.0f);
        func_80077C10(0.0f, 120.0f, 0.0f, 0.0f, 120.0f, 0.0f);
        printUISprite(32.0f, 32.0f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, SPRITE_BATTLE_BIGBOARD);
        SetTextGradient_TopBottom(191,  10, 0, 255, 200, 200, 0, 255);
        PrintTextWrapper(64.0f, 32.0f, 0.0f, 1.0f, "ＴＥＳＴＶＩＥＷ", 1);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/debug/debugMain.s")
