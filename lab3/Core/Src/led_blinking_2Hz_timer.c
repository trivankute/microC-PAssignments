/*
 * led_blinking_2Hz_timer.c
 *
 *  Created on: Nov 1, 2022
 *      Author: Tri Van
 */


#include "led_blinking_2Hz_timer.h"

int led_blinking_2Hz_flag = 0;
int led_blinking_2Hz_counter = 0;

void setTimer_led_blinking_2Hz(int duration){
	led_blinking_2Hz_counter = duration/time_interupt_duration;
	led_blinking_2Hz_flag = 0;
}
void timer_led_blinking_2Hz_run(void) {
	if(led_blinking_2Hz_counter>0)
	{
		led_blinking_2Hz_counter--;
		if(led_blinking_2Hz_counter<=0)
		{
			led_blinking_2Hz_flag=1;
		}
	}
}
