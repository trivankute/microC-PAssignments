/*
 * display_7_segments_timer.h
 *
 *  Created on: Nov 1, 2022
 *      Author: Tri Van
 */

#ifndef INC_DISPLAY_7_SEGMENTS_TIMER_H_
#define INC_DISPLAY_7_SEGMENTS_TIMER_H_

#include "global.h"

int _7_segments_counter;
extern int _7_segments_turn;
extern int _7_segments_flag;
void setTimer_7_segments_counter(int duration);
void timer_7_segments_counter_run(void);

#endif /* INC_DISPLAY_7_SEGMENTS_TIMER_H_ */
