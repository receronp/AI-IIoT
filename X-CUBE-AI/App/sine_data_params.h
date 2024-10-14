/**
  ******************************************************************************
  * @file    sine_data_params.h
  * @author  AST Embedded Analytics Research Platform
  * @date    2024-10-15T01:54:26+0200
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

#ifndef SINE_DATA_PARAMS_H
#define SINE_DATA_PARAMS_H

#include "ai_platform.h"

/*
#define AI_SINE_DATA_WEIGHTS_PARAMS \
  (AI_HANDLE_PTR(&ai_sine_data_weights_params[1]))
*/

#define AI_SINE_DATA_CONFIG               (NULL)


#define AI_SINE_DATA_ACTIVATIONS_SIZES \
  { 64, }
#define AI_SINE_DATA_ACTIVATIONS_SIZE     (64)
#define AI_SINE_DATA_ACTIVATIONS_COUNT    (1)
#define AI_SINE_DATA_ACTIVATION_1_SIZE    (64)



#define AI_SINE_DATA_WEIGHTS_SIZES \
  { 420, }
#define AI_SINE_DATA_WEIGHTS_SIZE         (420)
#define AI_SINE_DATA_WEIGHTS_COUNT        (1)
#define AI_SINE_DATA_WEIGHT_1_SIZE        (420)



#define AI_SINE_DATA_ACTIVATIONS_TABLE_GET() \
  (&g_sine_activations_table[1])

extern ai_handle g_sine_activations_table[1 + 2];



#define AI_SINE_DATA_WEIGHTS_TABLE_GET() \
  (&g_sine_weights_table[1])

extern ai_handle g_sine_weights_table[1 + 2];


#endif    /* SINE_DATA_PARAMS_H */
