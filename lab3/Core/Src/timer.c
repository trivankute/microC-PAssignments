/*
 * timer.c
 *
 *  Created on: Nov 1, 2022
 *      Author: Tri Van
 */


#include "timer.h"
#include "main.h"

void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim) {
	if (htim->Instance == TIM2) {
		button_reading0();
		button_reading1();
		button_reading2();
		timer_led_blinking_2Hz_run();
		timer_led_health_run();
		timer_12_leds_run();
		timer_7_segments_counter_run();
	}
}

