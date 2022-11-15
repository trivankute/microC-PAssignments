/*
 * display_7_segments_timer.c
 *
 *  Created on: Nov 1, 2022
 *      Author: Tri Van
 */


#include "display_7_segments_timer.h"
#include "main.h"
int _7_segments_counter = 0;
int _7_segments_turn = 1;
int _7_segments_flag=0;
void setTimer_7_segments_counter(int duration) {
	_7_segments_counter = duration/time_interupt_duration;
	_7_segments_flag=0;
}
void timer_7_segments_counter_run(void) {
	if(_7_segments_counter>0)
	{
		_7_segments_counter--;
			if(_7_segments_counter<=0)
			{
				_7_segments_flag=1;
				_7_segments_turn++;
				if(_7_segments_turn==3) _7_segments_turn=1;
			}
	}

}
