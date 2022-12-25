/*
 * scheduler.h
 *
 *  Created on: Nov 24, 2022
 *      Author: HELLO VAN
 */
#include <stdint.h>
#ifndef INC_SCHEDULER_H_
#define INC_SCHEDULER_H_
#define SCH_MAX_TASKS 40
#define NO_TASKS 0

typedef struct
{
	void (*pTask) (void);
	uint32_t Delay;
	uint32_t Runme;
	uint32_t Period;
	uint8_t TaskID;

}sTask;

void SCH_INIT(void);
void SCH_Add_Tasks(void (*pFunction)(),uint32_t DELAY,uint32_t PERIOD);
void SCH_Update(void);
void SCH_Dispatch_Tasks(void);
void SCH_Delete_Task(uint8_t id);
#endif /* INC_SCHEDULER_H_ */
