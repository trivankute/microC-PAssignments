/*
 * fsm_12_leds.c
 *
 *  Created on: Nov 1, 2022
 *      Author: Tri Van
 */


#include "fsm_12_leds.h"
#include "main.h"
#include "global.h"

int status_12_leds;

void fsm_12_leds(void) {
	switch(status_12_leds) {
		case SHOWING:
			  if(_7_segments_flag==1)
			  {
				  if(_7_segments_turn==1)
				  {
					  convert_num_to_display7(current_road2_time);
					  HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, 0);
					  HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, 0);
					  HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, 1);
					  HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, 1);
				  }
				  else
				  {
					  convert_num_to_display7(current_road1_time);
					  HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, 1);
					  HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, 1);
					  HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, 0);
					  HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, 0);
				  }
				  setTimer_7_segments_counter(250);
			  }
			  if(_12_leds_flag==1)
			  {
				  if(current_led_road1==0)
				  {
					  HAL_GPIO_WritePin(red_road1_GPIO_Port, red_road1_Pin, 1);
					  HAL_GPIO_WritePin(green_road1_GPIO_Port, green_road1_Pin, 0);
					  HAL_GPIO_WritePin(yellow_road1_GPIO_Port, yellow_road1_Pin, 0);
					  current_road1_time--;
					  if(current_road1_time==0)
					  {
						  HAL_GPIO_WritePin(red_road1_GPIO_Port, red_road1_Pin, 0);
						  HAL_GPIO_WritePin(green_road1_GPIO_Port, green_road1_Pin, 1);
						  HAL_GPIO_WritePin(yellow_road1_GPIO_Port, yellow_road1_Pin, 0);
						  current_led_road1=1;
						  current_road1_time=green_time;
					  }
				  }
				  else if(current_led_road1==1)
				  {
					  HAL_GPIO_WritePin(red_road1_GPIO_Port, red_road1_Pin, 0);
					  HAL_GPIO_WritePin(green_road1_GPIO_Port, green_road1_Pin, 1);
					  HAL_GPIO_WritePin(yellow_road1_GPIO_Port, yellow_road1_Pin, 0);
					  current_road1_time--;
					  if(current_road1_time==0)
					  {
						  HAL_GPIO_WritePin(red_road1_GPIO_Port, red_road1_Pin, 0);
						  HAL_GPIO_WritePin(green_road1_GPIO_Port, green_road1_Pin, 0);
						  HAL_GPIO_WritePin(yellow_road1_GPIO_Port, yellow_road1_Pin, 1);
						  current_led_road1=2;
						  current_road1_time=yellow_time;
					  }
				  }
				  else if(current_led_road1==2)
				  {
					  HAL_GPIO_WritePin(red_road1_GPIO_Port, red_road1_Pin, 0);
					  HAL_GPIO_WritePin(green_road1_GPIO_Port, green_road1_Pin, 0);
					  HAL_GPIO_WritePin(yellow_road1_GPIO_Port, yellow_road1_Pin, 1);
					  current_road1_time--;
					  if(current_road1_time==0)
					  {
						  HAL_GPIO_WritePin(red_road1_GPIO_Port, red_road1_Pin, 1);
						  HAL_GPIO_WritePin(green_road1_GPIO_Port, green_road1_Pin, 0);
						  HAL_GPIO_WritePin(yellow_road1_GPIO_Port, yellow_road1_Pin, 0);
						  current_led_road1=0;
						  current_road1_time=red_time;
					  }
				  }
				  if(current_led_road2==0)
				  {
					  HAL_GPIO_WritePin(red_road2_GPIO_Port, red_road2_Pin, 1);
					  HAL_GPIO_WritePin(green_road2_GPIO_Port, green_road2_Pin, 0);
					  HAL_GPIO_WritePin(yellow_road2_GPIO_Port, yellow_road2_Pin, 0);
					  current_road2_time--;
					  if(current_road2_time==0)
					  {
						  HAL_GPIO_WritePin(red_road2_GPIO_Port, red_road2_Pin, 0);
						  HAL_GPIO_WritePin(green_road2_GPIO_Port, green_road2_Pin, 1);
						  HAL_GPIO_WritePin(yellow_road2_GPIO_Port, yellow_road2_Pin, 0);
						  current_led_road2=1;
						  current_road2_time=green_time;
					  }
				  }
				  else if(current_led_road2==1)
				  {
					  HAL_GPIO_WritePin(red_road2_GPIO_Port, red_road2_Pin, 0);
					  HAL_GPIO_WritePin(green_road2_GPIO_Port, green_road2_Pin, 1);
					  HAL_GPIO_WritePin(yellow_road2_GPIO_Port, yellow_road2_Pin, 0);
					  current_road2_time--;
					  if(current_road2_time==0)
					  {
						  HAL_GPIO_WritePin(red_road2_GPIO_Port, red_road2_Pin, 0);
						  HAL_GPIO_WritePin(green_road2_GPIO_Port, green_road2_Pin, 0);
						  HAL_GPIO_WritePin(yellow_road2_GPIO_Port, yellow_road2_Pin, 1);
						  current_led_road2=2;
						  current_road2_time=yellow_time;
					  }
				  }
				  else if(current_led_road2==2)
				  {
					  HAL_GPIO_WritePin(red_road2_GPIO_Port, red_road2_Pin, 0);
					  HAL_GPIO_WritePin(green_road2_GPIO_Port, green_road2_Pin, 0);
					  HAL_GPIO_WritePin(yellow_road2_GPIO_Port, yellow_road2_Pin, 1);
					  current_road2_time--;
					  if(current_road2_time==0)
					  {
						  HAL_GPIO_WritePin(red_road2_GPIO_Port, red_road2_Pin, 1);
						  HAL_GPIO_WritePin(green_road2_GPIO_Port, green_road2_Pin, 0);
						  HAL_GPIO_WritePin(yellow_road2_GPIO_Port, yellow_road2_Pin, 0);
						  current_led_road2=0;
						  current_road2_time=red_time;
					  }
				  }
				  setTimer_12_leds(1000);
			  }
			break;
		case MODE_RED:
			if(led_blinking_2Hz_flag == 1)
			{
				HAL_GPIO_TogglePin(red_road1_GPIO_Port, red_road1_Pin);
				HAL_GPIO_TogglePin(red_road2_GPIO_Port, red_road2_Pin);
				setTimer_led_blinking_2Hz(500);
			}

			  if(_7_segments_flag==1)
			  {
				  if(_7_segments_turn==1)
				  {
					  convert_num_to_display7(current_mode);
					  HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, 0);
					  HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, 0);
					  HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, 1);
					  HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, 1);
				  }
				  else
				  {
					  convert_num_to_display7(red_buffer);
					  HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, 1);
					  HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, 1);
					  HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, 0);
					  HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, 0);
				  }
				  setTimer_7_segments_counter(250);
			  }
			break;
		case MODE_GREEN:
			if(led_blinking_2Hz_flag == 1)
			{
				HAL_GPIO_TogglePin(green_road1_GPIO_Port, green_road1_Pin);
				HAL_GPIO_TogglePin(green_road2_GPIO_Port, green_road2_Pin);
				setTimer_led_blinking_2Hz(500);
			}


			  if(_7_segments_flag==1)
			  {
				  if(_7_segments_turn==1)
				  {
					  convert_num_to_display7(current_mode);
					  HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, 0);
					  HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, 0);
					  HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, 1);
					  HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, 1);
				  }
				  else
				  {
					  convert_num_to_display7(green_buffer);
					  HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, 1);
					  HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, 1);
					  HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, 0);
					  HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, 0);
				  }
				  setTimer_7_segments_counter(250);
			  }
			break;
		case MODE_YELLOW:
			if(led_blinking_2Hz_flag == 1)
			{
				HAL_GPIO_TogglePin(yellow_road1_GPIO_Port, yellow_road1_Pin);
				HAL_GPIO_TogglePin(yellow_road2_GPIO_Port, yellow_road2_Pin);
				setTimer_led_blinking_2Hz(500);
			}
			  if(_7_segments_flag==1)
			  {
				  if(_7_segments_turn==1)
				  {
					  convert_num_to_display7(current_mode);
					  HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, 0);
					  HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, 0);
					  HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, 1);
					  HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, 1);
				  }
				  else
				  {
					  convert_num_to_display7(yellow_buffer);
					  HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, 1);
					  HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, 1);
					  HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, 0);
					  HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, 0);
				  }
				  setTimer_7_segments_counter(250);
			  }
			break;
		default:
			break;
	}
}
