/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define button_Pin GPIO_PIN_13
#define button_GPIO_Port GPIOC
#define button2_Pin GPIO_PIN_14
#define button2_GPIO_Port GPIOC
#define button3_Pin GPIO_PIN_15
#define button3_GPIO_Port GPIOC
#define a_Pin GPIO_PIN_1
#define a_GPIO_Port GPIOA
#define b_Pin GPIO_PIN_2
#define b_GPIO_Port GPIOA
#define c_Pin GPIO_PIN_3
#define c_GPIO_Port GPIOA
#define d_Pin GPIO_PIN_4
#define d_GPIO_Port GPIOA
#define e_Pin GPIO_PIN_5
#define e_GPIO_Port GPIOA
#define f_Pin GPIO_PIN_6
#define f_GPIO_Port GPIOA
#define g_Pin GPIO_PIN_7
#define g_GPIO_Port GPIOA
#define red_Pin GPIO_PIN_8
#define red_GPIO_Port GPIOA
#define yellow_Pin GPIO_PIN_9
#define yellow_GPIO_Port GPIOA
#define green_Pin GPIO_PIN_10
#define green_GPIO_Port GPIOA
#define red2_Pin GPIO_PIN_11
#define red2_GPIO_Port GPIOA
#define yellow2_Pin GPIO_PIN_12
#define yellow2_GPIO_Port GPIOA
#define green2_Pin GPIO_PIN_13
#define green2_GPIO_Port GPIOA
#define seg1_Pin GPIO_PIN_3
#define seg1_GPIO_Port GPIOB
#define seg2_Pin GPIO_PIN_4
#define seg2_GPIO_Port GPIOB
#define seg3_Pin GPIO_PIN_5
#define seg3_GPIO_Port GPIOB
#define seg4_Pin GPIO_PIN_6
#define seg4_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
