/*
 * global.c
 *
 *  Created on: Nov 1, 2022
 *      Author: Tri Van
 */


#include "global.h"
#include "main.h"

int red_time = 5;
int green_time = 3;
int yellow_time = 2;

int current_road1_time = 5;
int current_road2_time = 3;

int current_led_road1 = 0;
int current_led_road2 = 1;

int current_mode = 1;
int red_buffer = 5;
int green_buffer = 3;
int yellow_buffer = 2;


long long int prescaler_htim2 ;
long long int periodCounter_htim2 ;
long long int totalHz = 8000000;
int time_interupt_duration;

void setINIT_SHOWING(void){
	current_led_road1 = 0;
	current_led_road2 = 1;
	current_road1_time = red_time;
	current_road2_time = green_time;
}


