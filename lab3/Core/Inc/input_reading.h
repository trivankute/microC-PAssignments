/*
 * input_reading.h
 *
 *  Created on: Oct 31, 2022
 *      Author: Tri Van
 */

#ifndef INC_INPUT_READING_H_
#define INC_INPUT_READING_H_

#include "main.h"
#include "global.h"
#define DURATION_FOR_AUTO_INCREASING 1000/time_interupt_duration
#define BUTTON_IS_PRESSED 0
#define BUTTON_IS_RELEASED 1

void button_reading0 ( void );
void button_reading1 ( void );
void button_reading2 ( void );
int is_button0_pressed ( void );
int is_button1_pressed ( void );
int is_button2_pressed ( void );

#endif /* INC_INPUT_READING_H_ */
