/*
 * led_health_timer.c
 *
 *  Created on: Nov 1, 2022
 *      Author: Tri Van
 */


#include "led_health_timer.h"

int led_health_flag;
int led_health_counter;

void setTimer_led_health(int duration) {
	led_health_counter = duration/time_interupt_duration;
	led_health_flag = 0;
}
void timer_led_health_run(void) {
	if(led_health_counter>0)
	{
		led_health_counter--;
		if(led_health_counter<=0) led_health_flag=1;
	}
}
