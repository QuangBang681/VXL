/*
 * button.h
 *
 *  Created on: Nov 3, 2023
 *      Author: Bryce
 */

#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_

#include "main.h"

#define NORMAL_STATE SET
#define PRESSED_STATE RESET

extern int button1_flag;
extern int button2_flag;
extern int button3_flag;

int isButton1Pressed();
int isButton2Pressed();
int isButton3Pressed();
void getKeyInput_1();
void getKeyInput_2();
void getKeyInput_3();


#endif /* INC_BUTTON_H_ */
