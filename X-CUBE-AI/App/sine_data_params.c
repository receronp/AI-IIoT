/**
  ******************************************************************************
  * @file    sine_data_params.c
  * @author  AST Embedded Analytics Research Platform
  * @date    2024-10-15T17:32:20+0200
  * @brief   AI Tool Automatic Code Generator for Embedded NN computing
  ******************************************************************************
  * Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  ******************************************************************************
  */

#include "sine_data_params.h"


/**  Activations Section  ****************************************************/
ai_handle g_sine_activations_table[1 + 2] = {
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
  AI_HANDLE_PTR(NULL),
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
};




/**  Weights Section  ********************************************************/
AI_ALIGNED(32)
const ai_u64 s_sine_weights_array_u64[53] = {
  0x8181818181817f81U, 0x7f817f7f7f817f81U, 0xffffdb9d00000000U, 0x0U,
  0x7b9500000000U, 0x0U, 0x6100000000U, 0x9470000a9f1U,
  0xffffd174ffffffffU, 0x25bc200000000U, 0x9bcc4667c06a321cU, 0xc79c8681d863d7b0U,
  0x4fa23d11685a664fU, 0xbec450ff7fa7cabfU, 0xf00cb36e0667815cU, 0x144da1fcfe9f1946U,
  0x6c39bc7ee6f13f52U, 0x9fdcb16181351661U, 0xf6090103d1f1de04U, 0xcbfe0a4a0448137U,
  0x21337f662f9e995eU, 0x5224d746d773cf8dU, 0x70be277a0f5727fU, 0xa224dd108d91a0f1U,
  0xd453d1d93b7f5a61U, 0xb93524c0f705e6fcU, 0x2d8191f653953614U, 0x44fd671b283b3818U,
  0x81fb185577338af2U, 0xd4d9e09983e59e12U, 0x150b056e910f4f43U, 0x5041811ab0273d3aU,
  0xeb2d4ff42eb1dd47U, 0x812bb74761829884U, 0xf7f752e1f331cf33U, 0x12fbdad4903e8123U,
  0xac7a507fc3bccc3dU, 0x62f6cf3e4ecc54cfU, 0xdc2ce9d2f0fd2bebU, 0xe51d5909028106ccU,
  0x5964fdb8ad914b0fU, 0x7b5327fb1fe2d5dU, 0xfffff8b800001204U, 0x0U,
  0x24cb00000cadU, 0x0U, 0xffffecbaU, 0xfffffd8700001e9dU,
  0xffffe4fa00001299U, 0xfffff332ffffe85aU, 0xe5e534e520ebd7c7U, 0xe27ff3e7e611f9efU,
  0x355U,
};


ai_handle g_sine_weights_table[1 + 2] = {
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
  AI_HANDLE_PTR(s_sine_weights_array_u64),
  AI_HANDLE_PTR(AI_MAGIC_MARKER),
};

