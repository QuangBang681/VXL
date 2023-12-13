/*
 * timer.h
 *
 *  Created on: Nov 28, 2023
 *      Author: Bryce
 */

#ifndef INC_TIMER_H_
#define INC_TIMER_H_

extern int timer1_flag;
extern int timer2_flag;
extern int timer3_flag;


void setTimer1(int duration);
void setTimer2(int duration);
void setTimer3(int duration);
void TimerRun();

#endif /* INC_TIMER_H_ */
