/*
 * led_health_timer.h
 *
 *  Created on: Nov 1, 2022
 *      Author: Tri Van
 */

#ifndef INC_LED_HEALTH_TIMER_H_
#define INC_LED_HEALTH_TIMER_H_

#include "global.h"

extern int led_health_flag;
int led_health_counter;

void setTimer_led_health(int duration);
void timer_led_health_run(void);

#endif /* INC_LED_HEALTH_TIMER_H_ */
