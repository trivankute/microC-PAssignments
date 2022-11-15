/*
 * input_reading.c
 *
 *  Created on: Oct 31, 2022
 *      Author: Tri Van
 */


#include "input_reading.h"

int keyReg0_0 = BUTTON_IS_RELEASED;
int keyReg1_0 = BUTTON_IS_RELEASED;
int keyReg2_0 = BUTTON_IS_RELEASED;
int keyReg3_0 = BUTTON_IS_RELEASED;
int counter0 = 0;
int btn0_flag = 0;

int keyReg0_1 = BUTTON_IS_RELEASED;
int keyReg1_1 = BUTTON_IS_RELEASED;
int keyReg2_1 = BUTTON_IS_RELEASED;
int keyReg3_1 = BUTTON_IS_RELEASED;
int counter1 = 0;
int btn1_flag = 0;

int keyReg0_2 = BUTTON_IS_RELEASED;
int keyReg1_2 = BUTTON_IS_RELEASED;
int keyReg2_2 = BUTTON_IS_RELEASED;
int keyReg3_2 = BUTTON_IS_RELEASED;
int counter2 = 0;
int btn2_flag = 0;

int is_button0_pressed(){
	if(btn0_flag==1)
	{
		btn0_flag=0;
		return 1;
	}
	else return 0;
}

void subKeyProcess0(){
	btn0_flag=1;
}

 void button_reading0 ( void ) {
	 keyReg0_0 = keyReg1_0;
	 keyReg1_0 = keyReg2_0;
	 keyReg2_0 = HAL_GPIO_ReadPin(BUTTON0_GPIO_Port, BUTTON0_Pin);
	 if(keyReg0_0==keyReg1_0 && keyReg1_0==keyReg2_0){
		 if(keyReg3_0 != keyReg2_0)
		 {
			 keyReg3_0 = keyReg2_0;
			 if(keyReg2_0 == BUTTON_IS_PRESSED)
			 {
				 subKeyProcess0();
				 counter0 = DURATION_FOR_AUTO_INCREASING;
			 }
		 }
		 else {
			 if(counter0>0)
			 {
			 counter0--;
			 if(counter0<=0)
				 {
				 keyReg3_0=BUTTON_IS_RELEASED;
				 }
			 }
		 }
	 }
 }

 int is_button1_pressed(){
 	if(btn1_flag==1)
 	{
 		btn1_flag=0;
 		return 1;
 	}
 	else return 0;
 }

 void subKeyProcess1(){
 	btn1_flag=1;
 }

  void button_reading1 ( void ) {
 	 keyReg0_1 = keyReg1_1;
 	 keyReg1_1 = keyReg2_1;
 	 keyReg2_1 = HAL_GPIO_ReadPin(BUTTON1_GPIO_Port, BUTTON1_Pin);
 	 if(keyReg0_1==keyReg1_1 && keyReg1_1==keyReg2_1){
 		 if(keyReg3_1 != keyReg2_1)
 		 {
 			 keyReg3_1 = keyReg2_1;
 			 if(keyReg2_1 == BUTTON_IS_PRESSED)
 			 {
 				 subKeyProcess1();
 				 counter1 = DURATION_FOR_AUTO_INCREASING/4;
 			 }
 		 }
 		 else {
 			 if(counter1>0)
 			 {
 			 counter1--;
 			 if(counter1<=0)
 				 {
 				 keyReg3_1=BUTTON_IS_RELEASED;
 				 }
 			 }
 		 }
 	 }
  }

  int is_button2_pressed(){
  	if(btn2_flag==1)
  	{
  		btn2_flag=0;
  		return 1;
  	}
  	else return 0;
  }

  void subKeyProcess2(){
  	btn2_flag=1;
  }

   void button_reading2 ( void ) {
  	 keyReg0_2 = keyReg1_2;
  	 keyReg1_2 = keyReg2_2;
  	 keyReg2_2 = HAL_GPIO_ReadPin(BUTTON2_GPIO_Port, BUTTON2_Pin);
  	 if(keyReg0_2==keyReg1_2 && keyReg1_2==keyReg2_2){
  		 if(keyReg3_2 != keyReg2_2)
  		 {
  			 keyReg3_2 = keyReg2_2;
  			 if(keyReg2_2 == BUTTON_IS_PRESSED)
  			 {
  				 subKeyProcess2();
  				 counter2 = DURATION_FOR_AUTO_INCREASING;
  			 }
  		 }
  		 else {
  			 if(counter2>0)
  			 {
  			 counter2--;
  			 if(counter2<=0)
  				 {
  				 keyReg3_2=BUTTON_IS_RELEASED;
  				 }
  			 }
  		 }
  	 }
   }
