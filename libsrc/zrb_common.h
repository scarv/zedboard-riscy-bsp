
/*!
@file zrb_common.h
@brief Contains all of the boring constant and type definitions used by the
BSP.
*/

#ifndef ZRB_COMMON_H
#define ZRB_COMMON_H

#include "stdint.h"

//! Base address of the mailbox used to communicate with the ARM core.
static const uint32_t * ZRB_RISCY_MAILBOX_BASE  = 0x20000000;

//! Base address of the BRAM memory shared with the ARM core.
static const uint32_t * ZRB_RISCY_BRAM_BASE     = 0xC0000000;

//! Size of the BRAM memory shared with the ARM core.
static const uint32_t   ZRB_RISCY_BRAM_SIZE     = 0x00001FFF;

//! Top address of the BRAM memory shared with the ARM core.
static const uint32_t   ZRB_RISCY_BRAM_TOP      = ZRB_RISCY_BRAM_BASE |
                                                  ZRB_RISCY_BRAM_SIZE ;

#endif
