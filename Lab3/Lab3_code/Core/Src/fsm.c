/*
 * fsm.c
 *
 *  Created on: Nov 3, 2023
 *      Author: Bryce
 */


#include "fsm.h"

//void fsm_run()
//{
//	switch (status)
//	{
//		case INIT:
//			HAL_GPIO_WritePin(red_GPIO_Port, red_Pin, GPIO_PIN_SET);
//			HAL_GPIO_WritePin(yellow_GPIO_Port, yellow_Pin, GPIO_PIN_SET);
//			HAL_GPIO_WritePin(green_GPIO_Port, green_Pin, GPIO_PIN_SET);
//			status = AUTO_RED;
//			setTimer1(500);
//			break;
//		case AUTO_RED:
//			HAL_GPIO_WritePin(red_GPIO_Port, red_Pin, GPIO_PIN_RESET);
//			HAL_GPIO_WritePin(yellow_GPIO_Port, yellow_Pin, GPIO_PIN_SET);
//			HAL_GPIO_WritePin(green_GPIO_Port, green_Pin, GPIO_PIN_SET);
//			if (timer1_flag == 1)
//			{
//				status = AUTO_YELLOW;
//				setTimer1(200);
//			}
//			if (isButton1Pressed() == 1)
//			{
//				status = MAN_RED;
//				setTimer1(500);
//			}
//			break;
//		case AUTO_YELLOW:
//			HAL_GPIO_WritePin(red_GPIO_Port, red_Pin, GPIO_PIN_SET);
//			HAL_GPIO_WritePin(yellow_GPIO_Port, yellow_Pin, GPIO_PIN_RESET);
//			HAL_GPIO_WritePin(green_GPIO_Port, green_Pin, GPIO_PIN_SET);
//			if (timer1_flag == 1)
//			{
//				status = AUTO_GREEN;
//				setTimer1(300);
//			}
//			if (isButton1Pressed() == 1)
//			{
//				status = MAN_YELLOW;
//				setTimer1(500);
//			}
//			break;
//		case AUTO_GREEN:
//			HAL_GPIO_WritePin(red_GPIO_Port, red_Pin, GPIO_PIN_SET);
//			HAL_GPIO_WritePin(yellow_GPIO_Port, yellow_Pin, GPIO_PIN_SET);
//			HAL_GPIO_WritePin(green_GPIO_Port, green_Pin, GPIO_PIN_RESET);
//			if (timer1_flag == 1)
//			{
//				status = AUTO_RED;
//				setTimer1(500);
//			}
//			if (isButton1Pressed() == 1)
//			{
//				status = MAN_GREEN;
//				setTimer1(500);
//			}
//			break;
//		default:
//			break;
//	}
//
//
//}

void fsm_run()
{
	switch (status)
	{
		case INIT:
			HAL_GPIO_WritePin(red_GPIO_Port, red_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(yellow_GPIO_Port, yellow_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(green_GPIO_Port, green_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(red2_GPIO_Port, red2_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(yellow2_GPIO_Port, yellow2_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(green2_GPIO_Port, green2_Pin, GPIO_PIN_SET);
			status = AUTO_RED_GREEN;
			setTimer1(green_time*100);
			updateBuffer(1, red_time);
			updateBuffer(3, green_time);
			break;
		case AUTO_RED_GREEN:
			HAL_GPIO_WritePin(red_GPIO_Port, red_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(yellow_GPIO_Port, yellow_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(green_GPIO_Port, green_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(red2_GPIO_Port, red2_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(yellow2_GPIO_Port, yellow2_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(green2_GPIO_Port, green2_Pin, GPIO_PIN_RESET);
			if (timer1_flag == 1)
			{
				status = AUTO_RED_YELLOW;
				setTimer1(yellow_time*100);
				updateBuffer(1, yellow_time);
				updateBuffer(3, yellow_time);
			}
			if (isButton1Pressed() == 1)
			{
				status = MAN_RED;
				setTimer1(100);
			}
			break;
		case AUTO_RED_YELLOW:
			HAL_GPIO_WritePin(red_GPIO_Port, red_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(yellow_GPIO_Port, yellow_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(green_GPIO_Port, green_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(red2_GPIO_Port, red2_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(yellow2_GPIO_Port, yellow2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(green2_GPIO_Port, green2_Pin, GPIO_PIN_SET);
			if (timer1_flag == 1)
			{
				status = AUTO_GREEN_RED;
				setTimer1(green_time*100);
				updateBuffer(1, green_time);
				updateBuffer(3, red_time);
			}
			if (isButton1Pressed() == 1)
			{
				status = MAN_RED;
				setTimer1(100);
			}
			break;
		case AUTO_GREEN_RED:
			HAL_GPIO_WritePin(red_GPIO_Port, red_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(yellow_GPIO_Port, yellow_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(green_GPIO_Port, green_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(red2_GPIO_Port, red2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(yellow2_GPIO_Port, yellow2_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(green2_GPIO_Port, green2_Pin, GPIO_PIN_SET);
			if (timer1_flag == 1)
			{
				status = AUTO_YELLOW_RED;
				setTimer1(yellow_time*100);
				updateBuffer(1, yellow_time);
				updateBuffer(3, yellow_time);
			}
			if (isButton1Pressed() == 1)
			{
				status = MAN_RED;
				setTimer1(100);
			}
			break;
		case AUTO_YELLOW_RED:
			HAL_GPIO_WritePin(red_GPIO_Port, red_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(yellow_GPIO_Port, yellow_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(green_GPIO_Port, green_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(red2_GPIO_Port, red2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(yellow2_GPIO_Port, yellow2_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(green2_GPIO_Port, green2_Pin, GPIO_PIN_SET);
			if (timer1_flag == 1)
			{
				status = AUTO_RED_GREEN;
				setTimer1(green_time*100);
				updateBuffer(1, red_time);
				updateBuffer(3, green_time);
			}
			if (isButton1Pressed() == 1)
			{
				status = MAN_RED;
				setTimer1(100);
			}
			break;
		default:
			break;
	}


}
