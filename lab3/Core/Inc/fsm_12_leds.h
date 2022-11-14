/*
 * fsm_12_leds.h
 *
 *  Created on: Nov 1, 2022
 *      Author: Tri Van
 */

#ifndef INC_FSM_12_LEDS_H_
#define INC_FSM_12_LEDS_H_

#include "global.h"
#include "led_blinking_2Hz_timer.h"
#include "led_health_timer.h"
#include "12_leds_timer.h"
#include "display_7_segments_timer.h"
#include "display_7_segments.h"
#include "input_processing.h"
extern int status_12_leds;

void fsm_12_leds(void);

#endif /* INC_FSM_12_LEDS_H_ */
