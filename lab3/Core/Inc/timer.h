/*
 * timer1.h
 *
 *  Created on: Nov 1, 2022
 *      Author: Tri Van
 */

#ifndef INC_TIMER_H_
#define INC_TIMER_H_

#include "main.h"
#include "global.h"
#include "led_blinking_2Hz_timer.h"
#include "led_health_timer.h"
#include "12_leds_timer.h"
#include "display_7_segments_timer.h"
#include "input_reading.h"


void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim);

#endif /* INC_TIMER1_H_ */
