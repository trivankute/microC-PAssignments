/*
 * global.h
 *
 *  Created on: Nov 1, 2022
 *      Author: Tri Van
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_
///////////////////////////////////////////////////////////////////////
// Htim2 timer
// 100Hz ~ time interupt duration 10ms
extern long long int prescaler_htim2 ;
extern long long int periodCounter_htim2 ;
extern int time_interupt_duration ;
extern long long int totalHz;
// 10Hz ~ time interupt duration 100ms
//#define prescaler_htim2  7999
//#define periodCounter_htim2  99
//#define time_interupt_duration 100

// 1000Hz ~ time interupt duration 1ms
//#define prescaler_htim2  79999
//#define periodCounter_htim2  9
//#define time_interupt_duration 1
///////////////////////////////////////////////////////////////////////
// 12 leds status
#define SHOWING 	1
#define MODE_RED 	2
#define MODE_GREEN 	3
#define MODE_YELLOW 4
extern int red_time;
extern int green_time;
extern int yellow_time;
extern int current_road1_time;
extern int current_road2_time;
// 0 = red, 1 = green, 2 = yellow
extern int current_led_road1;
extern int current_led_road2;
// for segments leds
extern int current_mode;
extern int red_buffer;
extern int green_buffer;
extern int yellow_buffer;

// button
enum ButtonState { BUTTON_RELEASED , BUTTON_PRESSED} ;
// set INIT for SHOWING
#endif /* INC_GLOBAL_H_ */
