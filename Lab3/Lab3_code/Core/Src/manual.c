/*
 * manual.c
 *
 *  Created on: Nov 3, 2023
 *      Author: Bryce
 */

#include "manual.h"

void manual_run()
{
	switch (status)
	{
		case MAN_RED:
			HAL_GPIO_WritePin(red_GPIO_Port, red_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(yellow_GPIO_Port, yellow_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(green_GPIO_Port, green_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(red2_GPIO_Port, red2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(yellow2_GPIO_Port, yellow2_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(green2_GPIO_Port, green2_Pin, GPIO_PIN_SET);
			updateBuffer(0, 0);
			updateBuffer(1, settime);
			updateBuffer(2, 0);
			updateBuffer(3, settime);
			mode_flag = 1;
			if (isButton1Pressed() == 1)
			{
				settime = 0;
				status = MAN_YELLOW;
			}
			if (isButton2Pressed() == 1)
			{
				settime++;
				if (settime >= 100)
				{
					settime = 0;
				}
				updateBuffer(1, settime);
			}
			if (isButton3Pressed() == 1)
			{
				red_time = settime;
				settime = 0;
				updateBuffer(0, 0);
				updateBuffer(2, 0);
				status = MAN_YELLOW;
			}
			break;
		case MAN_YELLOW:
			HAL_GPIO_WritePin(red_GPIO_Port, red_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(yellow_GPIO_Port, yellow_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(green_GPIO_Port, green_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(red2_GPIO_Port, red2_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(yellow2_GPIO_Port, yellow2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(green2_GPIO_Port, green2_Pin, GPIO_PIN_SET);
			updateBuffer(0, 0);
			updateBuffer(1, settime);
			updateBuffer(2, 0);
			updateBuffer(3, settime);
			mode_flag = 1;
			if (isButton1Pressed() == 1)
			{
				settime = 0;
				status = MAN_GREEN;
			}
			if (isButton2Pressed() == 1)
			{
				settime++;
				if (settime >= 100)
				{
					settime = 0;
				}
				updateBuffer(1, settime);
			}
			if (isButton3Pressed() == 1)
			{
				yellow_time = settime;
				settime = 0;
				updateBuffer(0, 0);
				updateBuffer(2, 0);
				status = MAN_GREEN;
			}
			break;
		case MAN_GREEN:
			HAL_GPIO_WritePin(red_GPIO_Port, red_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(yellow_GPIO_Port, yellow_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(green_GPIO_Port, green_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(red2_GPIO_Port, red2_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(yellow2_GPIO_Port, yellow2_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(green2_GPIO_Port, green2_Pin, GPIO_PIN_RESET);
			updateBuffer(0, 0);
			updateBuffer(1, settime);
			updateBuffer(2, 0);
			updateBuffer(3, settime);
			mode_flag = 1;
			if (isButton1Pressed() == 1)
			{
				settime = 0;
				status = INIT;
			}
			if (isButton2Pressed() == 1)
			{
				settime++;
				if (settime >= 100)
				{
					settime = 0;
				}
			}
			if (isButton3Pressed() == 1)
			{
				green_time = settime;
				settime = 0;
				mode_flag = 0;
				updateBuffer(0, 0);
				updateBuffer(2, 0);
				status = INIT;
			}
			break;
		default:
			break;
	}
}
