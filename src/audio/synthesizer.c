/*====================================================================
 * synthesizer.c
 *
 * Copyright 1993, Silicon Graphics, Inc.
 * All Rights Reserved.
 * This is UNPUBLISHED PROPRIETARY SOURCE CODE of Silicon Graphics,
 * Inc.; the contents of this file may not be disclosed to third
 * parties, copied or duplicated in any form, in whole or in part,
 * without the prior written permission of Silicon Graphics, Inc.
 * RESTRICTED RIGHTS LEGEND:
 * Use, duplication or disclosure by the Government is subject to
 * restrictions as set forth in subdivision (c)(1)(ii) of the Rights
 * in Technical Data and Computer Software clause at DFARS
 * 252.227-7013, and/or in similar or successor clauses in the FAR,
 * DOD or NASA FAR Supplement. Unpublished - rights reserved under the
 * Copyright Laws of the United States.
 *====================================================================*/
#include "synthInternals.h"
#include <assert.h>
#include "os_version.h"

void func_800D7AD0(void) {
}

#pragma GLOBAL_ASM("asm/nonmatchings/audio/synthesizer/_timeToSamples.s")

#pragma GLOBAL_ASM("asm/nonmatchings/audio/synthesizer/_freePVoice.s")

#pragma GLOBAL_ASM("asm/nonmatchings/audio/synthesizer/_collectPVoices.s")

#pragma GLOBAL_ASM("asm/nonmatchings/audio/synthesizer/__freeParam.s")

#pragma GLOBAL_ASM("asm/nonmatchings/audio/synthesizer/__allocParam.s")

void func_800D7C10(void) {
}

#pragma GLOBAL_ASM("asm/nonmatchings/audio/synthesizer/alAudioFrame.s")

#pragma GLOBAL_ASM("asm/nonmatchings/audio/synthesizer/alSynNew.s")
