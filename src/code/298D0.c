#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/code/298D0/func_8004B250.s")

#pragma GLOBAL_ASM("asm/nonmatchings/code/298D0/func_8004B4CC.s")

void Controller_Zero(ContMain* cont) {
    cont->buttons0 = cont->buttons1 = cont->buttons2 = 0;
    cont->stickX = cont->stickY = 0;
    cont->stickAngle = 0.0f;
}

#pragma GLOBAL_ASM("asm/nonmatchings/code/298D0/func_8004B514.s")

extern u16 D_80181478[MAXCONTROLLERS];   
extern ContMain D_80181480[MAXCONTROLLERS]; //gContMain

#pragma GLOBAL_ASM("asm/nonmatchings/code/298D0/func_8004B73C.s")
