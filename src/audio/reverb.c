/*====================================================================
 * reverb.c
 *
 * Copyright 1993, Silicon Graphics, Inc.
 * All Rights Reserved.
 *
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
#include <libaudio.h>
#include <ultraerror.h>
#include "synthInternals.h"
#include <os.h>
#include <os_internal.h>
#include "xstdio.h"
#include <assert.h>
#include "initfx.h"
// TODO: these come from headers
#ident "$Revision: 1.49 $"
#ident "$Revision: 1.17 $"
#define RANGE 2.0
extern ALGlobals *alGlobals;

#ifdef AUD_PROFILE
extern u32 cnt_index, reverb_num, reverb_cnt, reverb_max, reverb_min, lastCnt[];
extern u32 load_num, load_cnt, load_max, load_min, save_num, save_cnt, save_max, save_min;
#endif

//macros

#define SWAP(in, out)	\
{			\
     s16 t = out;	\
     out = in;		\
     in = t;		\
}


Acmd *_loadOutputBuffer(ALFx *r, ALDelay *d, s32 buff, s32 incount, Acmd *p);
Acmd *_loadBuffer(ALFx *r, s16 *curr_ptr, s32 buff, s32 count, Acmd *p);
Acmd *_saveBuffer(ALFx *r, s16 *curr_ptr, s32 buff, s32 count, Acmd *p);
Acmd *_filterBuffer(ALLowPass *lp, s32 buff, s32 count, Acmd *p);
f32  _doModFunc(ALDelay *d, s32 count);

//static s32 L_INC[] = { L0_INC, L1_INC, L2_INC };

/***********************************************************************
 * Reverb filter public interfaces
 ***********************************************************************/

#pragma GLOBAL_ASM("asm/nonmatchings/audio/reverb/_doModFunc.s")

#pragma GLOBAL_ASM("asm/nonmatchings/audio/reverb/_filterBuffer.s")

#pragma GLOBAL_ASM("asm/nonmatchings/audio/reverb/_saveBuffer.s")

#pragma GLOBAL_ASM("asm/nonmatchings/audio/reverb/_loadBuffer.s")

#pragma GLOBAL_ASM("asm/nonmatchings/audio/reverb/_loadOutputBuffer.s")

#pragma GLOBAL_ASM("asm/nonmatchings/audio/reverb/alFxParamHdl.s")

#pragma GLOBAL_ASM("asm/nonmatchings/audio/reverb/alFxParam.s")

#pragma GLOBAL_ASM("asm/nonmatchings/audio/reverb/alFxPull.s")
