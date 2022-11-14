/*
 * led_blinking_2Hz_timer.h
 *
 *  Created on: Nov 1, 2022
 *      Author: Tri Van
 */

#ifndef INC_LED_BLINKING_2HZ_TIMER_H_
#define INC_LED_BLINKING_2HZ_TIMER_H_

#include "global.h"

extern int led_blinking_2Hz_flag;
int led_blinking_2Hz_counter;

void setTimer_led_blinking_2Hz(int duration);
void timer_led_blinking_2Hz_run(void);

#endif /* INC_LED_BLINKING_2HZ_TIMER_H_ */
