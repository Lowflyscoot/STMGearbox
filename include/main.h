/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2022 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"



/* Exported types ------------------------------------------------------------*/
typedef struct
{
  uint8_t MODIFIER;
  uint8_t RESERVED;
  uint8_t KEYCODE1;
  uint8_t KEYCODE2;
  uint8_t KEYCODE3;
  uint8_t KEYCODE4;
  uint8_t KEYCODE5;
  uint8_t KEYCODE6;
} keyboardHID;

/* Exported constants --------------------------------------------------------*/


/* Exported macro ------------------------------------------------------------*/


/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);






#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
