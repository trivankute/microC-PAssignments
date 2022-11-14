/*
 * input_processsing.h
 *
 *  Created on: Oct 31, 2022
 *      Author: Tri Van
 */

#ifndef INC_INPUT_PROCESSSING_H_
#define INC_INPUT_PROCESSSING_H_

#include "input_reading.h"
#include "global.h"
#include "fsm_12_leds.h"

extern enum ButtonState button0;
extern enum ButtonState button1;
extern enum ButtonState button2;

void fsm_for_button0 (void ) ;
void fsm_for_button1 (void ) ;
void fsm_for_button2 (void ) ;
#endif /* INC_INPUT_PROCESSING_H_ */
