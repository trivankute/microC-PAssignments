/*
 * scheduler.c
 *
 *  Created on: Nov 24, 2022
 *      Author: HELLO SON
 */
#include "scheduler.h"
sTask SCH_TASKS_G[SCH_MAX_TASKS];
uint8_t current_index=0;

void SCH_Delete_Task(uint8_t index)
{
	SCH_TASKS_G[index].pTask=0x0000;
	SCH_TASKS_G[index].Runme=0;
	SCH_TASKS_G[index].Delay=0;
	SCH_TASKS_G[index].Period=0;
	SCH_TASKS_G[index].TaskID=0;
}
void SCH_Update(void)
{
	for(uint8_t i=0;i<current_index;i++)
	{
		if(SCH_TASKS_G[i].pTask)
		{
			if(SCH_TASKS_G[i].Delay<=0)
			{
				SCH_TASKS_G[i].Runme+=1;
				if(SCH_TASKS_G[i].Period)
				{
					SCH_TASKS_G[i].Delay=SCH_TASKS_G[i].Period;
				}
			}
			else
			{
				SCH_TASKS_G[i].Delay--;
			}
		}
	}
}
void SCH_Add_Tasks(void (*pFunction)(),uint32_t DELAY, uint32_t PERIOD)
{
	if(current_index<SCH_MAX_TASKS)
	{
		SCH_TASKS_G[current_index].pTask=pFunction;
		SCH_TASKS_G[current_index].Delay=DELAY;
		SCH_TASKS_G[current_index].Period=PERIOD;
		SCH_TASKS_G[current_index].Runme=0;
		SCH_TASKS_G[current_index].TaskID=current_index;
		current_index++;
	}
}
void SCH_Dispatch_Tasks(void)
{
	uint8_t i;
	for(i=0;i<current_index;i++)
	{
		if(SCH_TASKS_G[i].Runme>0)
		{
			SCH_TASKS_G[i].Runme--;
			(*SCH_TASKS_G[i].pTask)();
			if(SCH_TASKS_G[i].Period==0)
			{
				SCH_Delete_Task(SCH_TASKS_G[i].TaskID);
			}
		}
	}
}
void SCH_INIT(void)
{
	current_index=0;
}
