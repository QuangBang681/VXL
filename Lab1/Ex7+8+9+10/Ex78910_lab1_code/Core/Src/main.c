/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
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
/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */
/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/

/* USER CODE BEGIN PV */

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */
void display7SEG(int num)
{
	switch(num)
	{
		case 0:
		{
			  HAL_GPIO_WritePin(GPIOA, a_Pin, RESET);  //0
			  HAL_GPIO_WritePin(GPIOA, b_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, c_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, d_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, e_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, f_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, g_Pin, SET);
			  break;
		}

		case 1:
		{
			  HAL_GPIO_WritePin(GPIOA, a_Pin, SET);	//1
			  HAL_GPIO_WritePin(GPIOA, b_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, c_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, d_Pin, SET);
			  HAL_GPIO_WritePin(GPIOA, e_Pin, SET);
			  HAL_GPIO_WritePin(GPIOA, f_Pin, SET);
			  HAL_GPIO_WritePin(GPIOA, g_Pin, SET);
			  break;
		}
		case 2:
		{
			  HAL_GPIO_WritePin(GPIOA, a_Pin, RESET);	//2
			  HAL_GPIO_WritePin(GPIOA, b_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, c_Pin, SET);
			  HAL_GPIO_WritePin(GPIOA, d_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, e_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, f_Pin, SET);
			  HAL_GPIO_WritePin(GPIOA, g_Pin, RESET);
			  break;
		}
		case 3:
		{
			  HAL_GPIO_WritePin(GPIOA, a_Pin, RESET);	//3
			  HAL_GPIO_WritePin(GPIOA, b_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, c_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, d_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, e_Pin, SET);
			  HAL_GPIO_WritePin(GPIOA, f_Pin, SET);
			  HAL_GPIO_WritePin(GPIOA, g_Pin, RESET);
			  break;
		}
		case 4:
		{
			  HAL_GPIO_WritePin(GPIOA, a_Pin, SET);	//4
			  HAL_GPIO_WritePin(GPIOA, b_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, c_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, d_Pin, SET);
			  HAL_GPIO_WritePin(GPIOA, e_Pin, SET);
			  HAL_GPIO_WritePin(GPIOA, f_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, g_Pin, RESET);
			  break;
		}
		case 5:
		{
			  HAL_GPIO_WritePin(GPIOA, a_Pin, RESET);	//5
			  HAL_GPIO_WritePin(GPIOA, b_Pin, SET);
			  HAL_GPIO_WritePin(GPIOA, c_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, d_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, e_Pin, SET);
			  HAL_GPIO_WritePin(GPIOA, f_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, g_Pin, RESET);
			  break;
		}
		case 6:
		{
			  HAL_GPIO_WritePin(GPIOA, a_Pin, RESET);	//6
			  HAL_GPIO_WritePin(GPIOA, b_Pin, SET);
			  HAL_GPIO_WritePin(GPIOA, c_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, d_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, e_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, f_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, g_Pin, RESET);
			  break;
		}
		case 7:
		{
			  HAL_GPIO_WritePin(GPIOA, a_Pin, RESET);	//7
			  HAL_GPIO_WritePin(GPIOA, b_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, c_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, d_Pin, SET);
			  HAL_GPIO_WritePin(GPIOA, e_Pin, SET);
			  HAL_GPIO_WritePin(GPIOA, f_Pin, SET);
			  HAL_GPIO_WritePin(GPIOA, g_Pin, SET);
			  break;
		}
		case 8:
		{
			  HAL_GPIO_WritePin(GPIOA, a_Pin, RESET);	//8
			  HAL_GPIO_WritePin(GPIOA, b_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, c_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, d_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, e_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, f_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, g_Pin, RESET);
			  break;
		}
		case 9:
		{
			  HAL_GPIO_WritePin(GPIOA, a_Pin, RESET);	//9
			  HAL_GPIO_WritePin(GPIOA, b_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, c_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, d_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, e_Pin, SET);
			  HAL_GPIO_WritePin(GPIOA, f_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, g_Pin, RESET);
			  break;
		}
	}
}

void analogClock(int num)
{
	switch(num)
	{
		case 1:
		{
			  HAL_GPIO_WritePin(GPIOA, a_Pin, SET);	//1
			  HAL_GPIO_WritePin(GPIOA, b_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, c_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, d_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, e_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, f_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, g_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, h_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, i_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, j_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, k_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, l_Pin, RESET);
			  break;
		}
		case 2:
		{
			  HAL_GPIO_WritePin(GPIOA, a_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, b_Pin, SET);
			  HAL_GPIO_WritePin(GPIOA, c_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, d_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, e_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, f_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, g_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, h_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, i_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, j_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, k_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, l_Pin, RESET);
			  break;
		}
		case 3:
		{
			  HAL_GPIO_WritePin(GPIOA, a_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, b_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, c_Pin, SET);
			  HAL_GPIO_WritePin(GPIOA, d_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, e_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, f_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, g_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, h_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, i_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, j_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, k_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, l_Pin, RESET);
			  break;
		}
		case 4:
		{
			  HAL_GPIO_WritePin(GPIOA, a_Pin, RESET);	//1
			  HAL_GPIO_WritePin(GPIOA, b_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, c_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, d_Pin, SET);
			  HAL_GPIO_WritePin(GPIOA, e_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, f_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, g_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, h_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, i_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, j_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, k_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, l_Pin, RESET);
			  break;
		}
		case 5:
		{
			  HAL_GPIO_WritePin(GPIOA, a_Pin, RESET);	//1
			  HAL_GPIO_WritePin(GPIOA, b_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, c_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, d_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, e_Pin, SET);
			  HAL_GPIO_WritePin(GPIOA, f_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, g_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, h_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, i_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, j_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, k_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, l_Pin, RESET);
			  break;
		}
		case 6:
		{
			  HAL_GPIO_WritePin(GPIOA, a_Pin, RESET);	//1
			  HAL_GPIO_WritePin(GPIOA, b_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, c_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, d_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, e_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, f_Pin, SET);
			  HAL_GPIO_WritePin(GPIOA, g_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, h_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, i_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, j_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, k_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, l_Pin, RESET);
			  break;
		}
		case 7:
		{
			  HAL_GPIO_WritePin(GPIOA, a_Pin, RESET);	//1
			  HAL_GPIO_WritePin(GPIOA, b_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, c_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, d_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, e_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, f_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, g_Pin, SET);
			  HAL_GPIO_WritePin(GPIOA, h_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, i_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, j_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, k_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, l_Pin, RESET);
			  break;
		}
		case 8:
		{
			  HAL_GPIO_WritePin(GPIOA, a_Pin, RESET);	//1
			  HAL_GPIO_WritePin(GPIOA, b_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, c_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, d_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, e_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, f_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, g_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, h_Pin, SET);
			  HAL_GPIO_WritePin(GPIOA, i_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, j_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, k_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, l_Pin, RESET);
			  break;
		}
		case 9:
		{
			  HAL_GPIO_WritePin(GPIOA, a_Pin, RESET);	//1
			  HAL_GPIO_WritePin(GPIOA, b_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, c_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, d_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, e_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, f_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, g_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, h_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, i_Pin, SET);
			  HAL_GPIO_WritePin(GPIOA, j_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, k_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, l_Pin, RESET);
			  break;
		}
		case 10:
		{
			  HAL_GPIO_WritePin(GPIOA, a_Pin, RESET);	//1
			  HAL_GPIO_WritePin(GPIOA, b_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, c_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, d_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, e_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, f_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, g_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, h_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, i_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, j_Pin, SET);
			  HAL_GPIO_WritePin(GPIOA, k_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, l_Pin, RESET);
			  break;
		}
		case 11:
		{
			  HAL_GPIO_WritePin(GPIOA, a_Pin, RESET);	//1
			  HAL_GPIO_WritePin(GPIOA, b_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, c_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, d_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, e_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, f_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, g_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, h_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, i_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, j_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, k_Pin, SET);
			  HAL_GPIO_WritePin(GPIOA, l_Pin, RESET);
			  break;
		}
		case 12:
		{
			  HAL_GPIO_WritePin(GPIOA, a_Pin, RESET);	//1
			  HAL_GPIO_WritePin(GPIOA, b_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, c_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, d_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, e_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, f_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, g_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, h_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, i_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, j_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, k_Pin, RESET);
			  HAL_GPIO_WritePin(GPIOA, l_Pin, SET);
			  break;
		}
	}
}

void clearAllClock()
{
	HAL_GPIO_WritePin(GPIOA, a_Pin | b_Pin | c_Pin | d_Pin | e_Pin | f_Pin | g_Pin | h_Pin | i_Pin | j_Pin | k_Pin | l_Pin, RESET);
}

void setNumberOnClock(int num)
{
	switch(num)
	{
		case 1:
		{
			  HAL_GPIO_WritePin(GPIOA, a_Pin, SET);
			  break;
		}
		case 2:
		{
			  HAL_GPIO_WritePin(GPIOA, b_Pin, SET);
			  break;
		}
		case 3:
		{
			  HAL_GPIO_WritePin(GPIOA, c_Pin, SET);
			  break;
		}
		case 4:
		{
			  HAL_GPIO_WritePin(GPIOA, d_Pin, SET);
			  break;
		}
		case 5:
		{
			  HAL_GPIO_WritePin(GPIOA, e_Pin, SET);
			  break;
		}
		case 6:
		{
			  HAL_GPIO_WritePin(GPIOA, f_Pin, SET);
			  break;
		}
		case 7:
		{
			  HAL_GPIO_WritePin(GPIOA, g_Pin, SET);
			  break;
		}
		case 8:
		{
			  HAL_GPIO_WritePin(GPIOA, h_Pin, SET);
			  break;
		}
		case 9:
		{
			  HAL_GPIO_WritePin(GPIOA, i_Pin, SET);
			  break;
		}
		case 10:
		{
			  HAL_GPIO_WritePin(GPIOA, j_Pin, SET);
			  break;
		}
		case 11:
		{
			  HAL_GPIO_WritePin(GPIOA, k_Pin, SET);
			  break;
		}
		case 12:
		{
			  HAL_GPIO_WritePin(GPIOA, l_Pin, SET);
			  break;
		}
	}
}

void clearNumberOnClock(int num)
{
	switch(num)
	{
		case 1:
		{
			  HAL_GPIO_WritePin(GPIOA, a_Pin, RESET);
			  break;
		}
		case 2:
		{
			  HAL_GPIO_WritePin(GPIOA, b_Pin, RESET);
			  break;
		}
		case 3:
		{
			  HAL_GPIO_WritePin(GPIOA, c_Pin, RESET);
			  break;
		}
		case 4:
		{
			  HAL_GPIO_WritePin(GPIOA, d_Pin, RESET);
			  break;
		}
		case 5:
		{
			  HAL_GPIO_WritePin(GPIOA, e_Pin, RESET);
			  break;
		}
		case 6:
		{
			  HAL_GPIO_WritePin(GPIOA, f_Pin, RESET);
			  break;
		}
		case 7:
		{
			  HAL_GPIO_WritePin(GPIOA, g_Pin, RESET);
			  break;
		}
		case 8:
		{
			  HAL_GPIO_WritePin(GPIOA, h_Pin, RESET);
			  break;
		}
		case 9:
		{
			  HAL_GPIO_WritePin(GPIOA, i_Pin, RESET);
			  break;
		}
		case 10:
		{
			  HAL_GPIO_WritePin(GPIOA, j_Pin, RESET);
			  break;
		}
		case 11:
		{
			  HAL_GPIO_WritePin(GPIOA, k_Pin, RESET);
			  break;
		}
		case 12:
		{
			  HAL_GPIO_WritePin(GPIOA, l_Pin, RESET);
			  break;
		}
	}
}
/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{
  /* USER CODE BEGIN 1 */

  /* USER CODE END 1 */

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  /* USER CODE BEGIN 2 */

  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  int hour = 11;
  int minute = 1;
  int second = 1;
  while(1)
  {
	  clearAllClock();
	  if (second > 66)
	  {
		  minute++;
		  second = 1;
	  }
	  if (minute > 66)
	  {
		  hour++;
		  minute = 1;
	  }
	  if (hour > 12)
	  {
		  hour = 1;
	  }
	  setNumberOnClock(second/5);
	  setNumberOnClock(minute/5);
	  setNumberOnClock(hour);
	  second++;

	  HAL_Delay(10);
  }
  /* USER CODE END 3 */
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_NONE;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }

  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_HSI;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_0) != HAL_OK)
  {
    Error_Handler();
  }
}

/**
  * @brief GPIO Initialization Function
  * @param None
  * @retval None
  */
static void MX_GPIO_Init(void)
{
  GPIO_InitTypeDef GPIO_InitStruct = {0};

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOA_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOA, a_Pin|b_Pin|c_Pin|d_Pin
                          |e_Pin|f_Pin|g_Pin|h_Pin
                          |i_Pin|j_Pin|k_Pin|l_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pins : a_Pin b_Pin c_Pin d_Pin
                           e_Pin f_Pin g_Pin h_Pin
                           i_Pin j_Pin k_Pin l_Pin */
  GPIO_InitStruct.Pin = a_Pin|b_Pin|c_Pin|d_Pin
                          |e_Pin|f_Pin|g_Pin|h_Pin
                          |i_Pin|j_Pin|k_Pin|l_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

}

/* USER CODE BEGIN 4 */

/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */
  __disable_irq();
  while (1)
  {
  }
  /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */
