/*
 * SCH.h
 *
 *  Created on: Nov 28, 2023
 *      Author: Bryce
 */

#ifndef INC_SCH_H_
#define INC_SCH_H_

#define SCH_MAX_TASKS	40

#include <stdint.h>

typedef struct{
	void (*pTask)(void);
	uint32_t 	Delay;
	uint32_t 	Period;
	uint8_t 	RunMe;
	uint32_t 	TaskID;
}sTasks;

void SCH_Init(void);

void SCH_Add_Task ( void (*pFunction)(), uint32_t DELAY, uint32_t PERIOD);

void SCH_Update(void);

void SCH_Dispatch_Tasks(void);

void SCH_Delete_Task(uint32_t taskID);

void deletetask();

#endif /* INC_SCH_H_ */
