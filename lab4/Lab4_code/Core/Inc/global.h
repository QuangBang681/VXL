/*
 * global.h
 *
 *  Created on: Nov 3, 2023
 *      Author: Bryce
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "timer.h"
#include "button.h"
#include "main.h"

//#define INIT		1
//#define AUTO_RED	2
//#define AUTO_YELLOW	3
//#define AUTO_GREEN 	4

#define INIT					1
#define AUTO_RED_GREEN		2
#define AUTO_RED_YELLOW		3
#define AUTO_GREEN_RED 		4
#define AUTO_YELLOW_RED		5

#define MAN_RED		11
#define MAN_YELLOW	12
#define MAN_GREEN	13

extern int status;
extern int red_time;
extern int green_time;
extern int yellow_time;

extern int mode_flag;
extern int settime;

void updateBuffer (int time, int job);

#endif /* INC_GLOBAL_H_ */
