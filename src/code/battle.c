#include "common.h"

/*
//data
u32 D_800EA510 = 0; // Battle_Time
u8 D_800EA514[] = { 255, 0, 0, 0 };
s32 D_800EA518 = 0; // Battle_Stage = BATTLE_STAGE_INIT;
s32 D_800EA51C = -1;
s32 D_800EA520 = FALSE; //Battle_NoWinner
s32 D_800EA524[4][4] = {//Battle_RankingTable
    { 0, 0, 0, 0 },
    { 0, 0, 0, 0 },
    { 0, 0, 0, 0 },
    { 0, 0, 0, 0 },
};
s32 D_800EA564[4] = { 0x65, 0x66, 0x67, 0x68}; // gCharacterPortraits

s32 D_800EA574[4] = { 0, 0, 0, 0 }; //Battle_PlayerRank
s32 D_800EA584[4] = { 0, 0, 0, 0 };  // Battle_SurvivalPlayerRank

typedef struct BattlePlayerData {
s32 fallOffTime;
Vec2f portraitPos;
Vec2f timerPos;
Vec2f rankPos;
s32 rank;
} BattlePlayerData; //sizeof 0x20

BattlePlayerData D_800EA594[] = {// Battle_PlayerData
    {
        0,
        { 16.0f, 14.0f },
        { 36.0f, 14.0f },
        { 18.0f, 12.0f },
        0
    },
    {
        0,
        { 288.0f, 205.0f },
        { 240.0f, 212.0f },
        { 244.0f, 204.0f },
        0
    },
    {
        0,
        { 16.0f, 205.0f },
        { 36.0f, 212.0f },
        { 18.0f, 204.0f },
        0
    },
    {
        0,
        { 288.0f, 14.0f },
        { 240.0f, 14.0f },
        { 244.0f, 12.0f },
        0
    }
};



s32 D_800EA614 = 999999999; //Battle_LastKnockOutTime

s32 D_800EA618[] = { 1, 10, 100, 1000, 10000, 100000, 1000000, 10000000 }; // Battle_DecimalPowers

u8 D_800EA638[] = { LETTER_S, LETTER_U, LETTER_D, LETTER_D, LETTER_E, LETTER_N, SPACE, LETTER_D, LETTER_E, LETTER_A, LETTER_T, LETTER_H }; //Battle_MsgSuddenDeath

unk_80052094_8 D_800EA644[] = {
    { 0.0f, 2 },
    { 9.0f, 0 },
    { 255.0f, 255 },
    { 2.0f, 2 },
    { 4.0f, 0 },
    { 7.0f, 0 },
};
unk_80052094_8 D_800EA674[] = {
    { 1.0f, 0 },
    { 0.0f, 2 },
    { 0.0f, 0 },
    { 2.0f, 2 },
    { 4.0f, 2 },
};
u8 D_800EA69C[] = { 2, 2, 2, 3, 3, 3, 4, 4, 5, 5, 6, 6, 7, 7, 8, 8, 7, 7, 6, 6, 5, 5, 4, 4, 3, 3, 3, 2 };
u8 D_800EA6B8[] = { 0, 0, 0, 1, 1, 1, 2, 2, 2, 3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7, 8, 8, 8, 9, 9, 9, 10, 10, 10, 11, 11, 11, 12, 12, 12, 13, 13, 13, 14, 14, 14 };
s32 D_800EA6E8 = 0;
s8 D_800EA6EC = 3;
*/

#pragma GLOBAL_ASM("asm/nonmatchings/code/battle/func_8004DD40.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/battle/func_8004DE44.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/battle/func_8004DF00.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/battle/func_8004E210.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/battle/func_8004E340.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/battle/func_8004E3E4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/battle/func_8004E444.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/battle/func_8004E4B4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/battle/func_8004E5A0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/battle/func_8004E764.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/battle/func_8004E974.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/battle/func_8004EB68.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/battle/func_8004ED78.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/battle/func_8004EEB8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/battle/func_8004F0BC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/battle/func_8004F364.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/battle/func_8004FE38.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/battle/func_80050030.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/battle/func_800500B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/battle/func_800501D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/battle/func_80050400.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/battle/func_80050508.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/battle/func_8005074C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/battle/func_800509E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/battle/func_80050A28.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/battle/func_80050BEC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/battle/func_80050D0C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/battle/func_80050E90.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/battle/func_80050F98.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/battle/func_80051CE0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/battle/func_80051E7C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/battle/func_80052008.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/battle/func_80052114.s")
