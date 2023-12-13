/*
 * uart_communication.h
 *
 *  Created on: Nov 28, 2023
 *      Author: Bryce
 */

#ifndef INC_UART_COMMUNICATION_H_
#define INC_UART_COMMUNICATION_H_

#include "stdio.h"
#include "timer.h"
#include "command_parser.h"
#include "main.h"
#include "stm32f1xx_hal_conf.h"
#include "string.h"

extern ADC_HandleTypeDef hadc1;
extern UART_HandleTypeDef huart2;

void uart_communication_fsm(void);

#endif /* INC_UART_COMMUNICATION_H_ */
