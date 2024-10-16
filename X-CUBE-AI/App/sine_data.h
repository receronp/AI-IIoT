/**
  ******************************************************************************
  * @file    sine_data.h
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

#ifndef SINE_DATA_H
#define SINE_DATA_H

#include "sine_config.h"
#include "sine_data_params.h"

AI_DEPRECATED
#define AI_SINE_DATA_ACTIVATIONS(ptr_)  \
  ai_sine_data_activations_buffer_get(AI_HANDLE_PTR(ptr_))

AI_DEPRECATED
#define AI_SINE_DATA_WEIGHTS(ptr_)  \
  ai_sine_data_weights_buffer_get(AI_HANDLE_PTR(ptr_))


AI_API_DECLARE_BEGIN


extern const ai_u64 s_sine_weights_array_u64[53];



/*!
 * @brief Get network activations buffer initialized struct.
 * @ingroup sine_data
 * @param[in] ptr a pointer to the activations array storage area
 * @return an ai_buffer initialized struct
 */
AI_DEPRECATED
AI_API_ENTRY
ai_buffer ai_sine_data_activations_buffer_get(const ai_handle ptr);

/*!
 * @brief Get network weights buffer initialized struct.
 * @ingroup sine_data
 * @param[in] ptr a pointer to the weights array storage area
 * @return an ai_buffer initialized struct
 */
AI_DEPRECATED
AI_API_ENTRY
ai_buffer ai_sine_data_weights_buffer_get(const ai_handle ptr);

/*!
 * @brief Get network weights array pointer as a handle ptr.
 * @ingroup sine_data
 * @return a ai_handle pointer to the weights array
 */
AI_DEPRECATED
AI_API_ENTRY
ai_handle ai_sine_data_weights_get(void);


/*!
 * @brief Get network params configuration data structure.
 * @ingroup sine_data
 * @return true if a valid configuration is present, false otherwise
 */
AI_API_ENTRY
ai_bool ai_sine_data_params_get(ai_network_params* params);


AI_API_DECLARE_END

#endif /* SINE_DATA_H */

