/*
 * input_processsing.c
 *
 *  Created on: Oct 31, 2022
 *      Author: Tri Van
 */


#include "input_processing.h"

enum ButtonState button0 = BUTTON_RELEASED;
enum ButtonState button1 = BUTTON_RELEASED;
enum ButtonState button2 = BUTTON_RELEASED;
void fsm_for_button0 (void ) {
switch ( button0 ){
case BUTTON_RELEASED :
		if( is_button0_pressed () == 1 ) {
			button0 = BUTTON_PRESSED ;
		// INCREASE VALUE OF PORT A BY ONE UNIT
		 }
		 break ;
case BUTTON_PRESSED :
		switch(status_12_leds){
		case SHOWING:
			 status_12_leds= MODE_RED;
			HAL_GPIO_WritePin(red_road1_GPIO_Port, red_road1_Pin, 0);
			HAL_GPIO_WritePin(red_road2_GPIO_Port, red_road2_Pin, 0);
			HAL_GPIO_WritePin(green_road1_GPIO_Port, green_road1_Pin, 0);
			HAL_GPIO_WritePin(green_road2_GPIO_Port, green_road2_Pin, 0);
			HAL_GPIO_WritePin(yellow_road1_GPIO_Port, yellow_road1_Pin, 0);
			HAL_GPIO_WritePin(yellow_road2_GPIO_Port, yellow_road2_Pin, 0);
			current_mode++;
			break;
		case MODE_RED:
			  status_12_leds= MODE_YELLOW;
				HAL_GPIO_WritePin(red_road1_GPIO_Port, red_road1_Pin, 0);
				HAL_GPIO_WritePin(red_road2_GPIO_Port, red_road2_Pin, 0);
				HAL_GPIO_WritePin(green_road1_GPIO_Port, green_road1_Pin, 0);
				HAL_GPIO_WritePin(green_road2_GPIO_Port, green_road2_Pin, 0);
				HAL_GPIO_WritePin(yellow_road1_GPIO_Port, yellow_road1_Pin, 0);
				HAL_GPIO_WritePin(yellow_road2_GPIO_Port, yellow_road2_Pin, 0);
				current_mode++;
			break;
		case MODE_GREEN:
			  status_12_leds= MODE_RED;
				HAL_GPIO_WritePin(red_road1_GPIO_Port, red_road1_Pin, 0);
				HAL_GPIO_WritePin(red_road2_GPIO_Port, red_road2_Pin, 0);
				HAL_GPIO_WritePin(green_road1_GPIO_Port, green_road1_Pin, 0);
				HAL_GPIO_WritePin(green_road2_GPIO_Port, green_road2_Pin, 0);
				HAL_GPIO_WritePin(yellow_road1_GPIO_Port, yellow_road1_Pin, 0);
				HAL_GPIO_WritePin(yellow_road2_GPIO_Port, yellow_road2_Pin, 0);
				current_mode=2;
			break;
		case MODE_YELLOW:
			  status_12_leds= MODE_GREEN;
				HAL_GPIO_WritePin(red_road1_GPIO_Port, red_road1_Pin, 0);
				HAL_GPIO_WritePin(red_road2_GPIO_Port, red_road2_Pin, 0);
				HAL_GPIO_WritePin(green_road1_GPIO_Port, green_road1_Pin, 0);
				HAL_GPIO_WritePin(green_road2_GPIO_Port, green_road2_Pin, 0);
				HAL_GPIO_WritePin(yellow_road1_GPIO_Port, yellow_road1_Pin, 0);
				HAL_GPIO_WritePin(yellow_road2_GPIO_Port, yellow_road2_Pin, 0);
				current_mode++;
			break;
		default: break;
		}
		if (! (is_button0_pressed () == 1)  ) {
			button0 = BUTTON_RELEASED ;
		}
		 break ;
		default: break;
 	 }
 }
void fsm_for_button1 (void ) {
switch ( button1 ){
case BUTTON_RELEASED :
		if( is_button1_pressed () == 1  ) {
			button1 = BUTTON_PRESSED ;
		// INCREASE VALUE OF PORT A BY ONE UNIT
		 }
		 break ;
case BUTTON_PRESSED :
	switch(status_12_leds) {
		case MODE_RED:
			  red_buffer++;
			  red_buffer = red_buffer%100;
			break;
		case MODE_GREEN:
			  green_buffer++;
			  green_buffer = green_buffer%100;
			break;
		case MODE_YELLOW:
			  yellow_buffer++;
			  yellow_buffer = yellow_buffer%100;
			break;
		default:break;
	}
		if (! (is_button1_pressed () == 1)  ) {
			button1 = BUTTON_RELEASED ;
		}
		 break ;
 	 }
 }
void fsm_for_button2 (void ) {
switch ( button2 ){
case BUTTON_RELEASED :
		if( is_button2_pressed () == 1 ) {
			button2 = BUTTON_PRESSED ;
		// INCREASE VALUE OF PORT A BY ONE UNIT
		 }
		 break ;
case BUTTON_PRESSED :
	switch (status_12_leds) {
		case MODE_RED:
			  red_time = red_buffer;
			  red_buffer = red_time;
			  status_12_leds = SHOWING;
			  current_mode=1;
			  setINIT_SHOWING();
			break;
		case MODE_YELLOW:
			  yellow_time = yellow_buffer;
			  yellow_buffer = yellow_time;
			  status_12_leds = SHOWING;
			  current_mode=1;
			  setINIT_SHOWING();
			break;
		case MODE_GREEN:
			  green_time = green_buffer;
			  green_buffer = green_time;
			  status_12_leds = SHOWING;
			  current_mode=1;
			  setINIT_SHOWING();
			break;
	}
		if (! (is_button2_pressed () == 1)  ) {
			button2 = BUTTON_RELEASED ;
		}
		 break ;
 	 }
 }
