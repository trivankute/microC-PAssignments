/*
 * 12_leds_timer.h
 *
 *  Created on: Nov 1, 2022
 *      Author: Tri Van
 */

#ifndef INC_12_LEDS_TIMER_H_
#define INC_12_LEDS_TIMER_H_

#include "global.h"

extern int _12_leds_flag;
int _12_leds_counter;

void setTimer_12_leds(int duration);
void timer_12_leds_run(void);



#endif /* INC_12_LEDS_TIMER_H_ */
