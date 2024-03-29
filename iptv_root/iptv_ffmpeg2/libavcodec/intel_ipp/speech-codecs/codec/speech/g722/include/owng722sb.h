/*/////////////////////////////////////////////////////////////////////////////
//
//                  INTEL CORPORATION PROPRIETARY INFORMATION
//     This software is supplied under the terms of a license agreement or
//     nondisclosure agreement with Intel Corporation and may not be copied
//     or disclosed except in accordance with the terms of that agreement.
//          Copyright(c) 2005-2007 Intel Corporation. All Rights Reserved.
//
//     Intel(R) Integrated Performance Primitives
//     USC - Unified Speech Codec interface library
//
// By downloading and installing USC codec, you hereby agree that the
// accompanying Materials are being provided to you under the terms and
// conditions of the End User License Agreement for the Intel(R) Integrated
// Performance Primitives product previously accepted by you. Please refer
// to the file ippEULA.rtf or ippEULA.txt located in the root directory of your Intel(R) IPP
// product installation for more information.
//
// A speech coding standards promoted by ITU, ETSI, 3GPP and other
// organizations. Implementations of these standards, or the standard enabled
// platforms may require licenses from various entities, including
// Intel Corporation.
//
//
// Purpose: G.722 speech codec: internal definitions.
//
*/

#ifndef __OWNG722SB_H__
#define __OWNG722SB_H__

#if defined( _WIN32_WCE)
#pragma warning( disable : 4505 )
#endif

#include <ipps.h>
#if defined( _NO_IPPSC_LIB )
#include "_ippsc.h"
#else
#include <ippsc.h>
#endif
#include "g722sb.h"
#include "g722sbapi.h"
#include "scratchmem.h"

#define   G722SB_CODECFUN(type,name,arg)                extern type name arg

#define MIN(a,b) (a < b ? a : b)
#define MAX(a,b) (a > b ? a : b)

struct _G722SB_Encoder_Obj {
   G722SB_Obj_t objPrm;

   Ipp16s  qmf_tx_delayx[SBADPCM_G722_SIZE_QMFDELAY];
   Ipp8s   *stateEnc;

};

struct _G722SB_Decoder_Obj {
   G722SB_Obj_t objPrm;

   Ipp16s  qmf_rx_delayx[SBADPCM_G722_SIZE_QMFDELAY];
   Ipp8s   *stateDec;

};

#endif /* __OWNG722SB_H__ */
