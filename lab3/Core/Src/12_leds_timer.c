/*
 * 12_leds_timer.c
 *
 *  Created on: Nov 1, 2022
 *      Author: Tri Van
 */

#include "12_leds_timer.h"

int _12_leds_flag;
int _12_leds_counter;

void setTimer_12_leds(int duration){
	_12_leds_counter = duration/time_interupt_duration;
	_12_leds_flag = 0;
}
void timer_12_leds_run(void){
	if(_12_leds_counter>0)
	{
		_12_leds_counter--;
		if(_12_leds_counter<=0) _12_leds_flag=1;
	}
}
