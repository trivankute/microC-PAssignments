/*
 * display_7_segments.c
 *
 *  Created on: Nov 1, 2022
 *      Author: Tri Van
 */


#include "display_7_segments.h"
#include "main.h"


void display7SEG_1(int counter)
{
	  int a = 0;
	  int b = 0;
	  int c = 0;
	  int d = 0;
	  int e = 0;
	  int f = 0;
	  int g = 0;
	  switch(counter){
		  case 0:
			  a=0;b=0;c=0;d=0;e=0;f=0;g=1;
			  break;
		  case 1:
			  a=1;b=0;c=0;d=1;e=1;f=1;g=1;
			  break;
		  case 2:
			  a=0;b=0;c=1;d=0;e=0;f=1;g=0;
			  break;
		  case 3:
			  a=0;b=0;c=0;d=0;e=1;f=1;g=0;
			  break;
		  case 4:
			  a=1;b=0;c=0;d=1;e=1;f=0;g=0;
			  break;
		  case 5:
			  a=0;b=1;c=0;d=0;e=1;f=0;g=0;
			  break;
		  case 6:
			  a=0;b=1;c=0;d=0;e=0;f=0;g=0;
			  break;
		  case 7:
			  a=0;b=0;c=0;d=1;e=1;f=1;g=1;
			  break;
		  case 8:
			  a=0;b=0;c=0;d=0;e=0;f=0;g=0;
			  break;
		  case 9:
			  a=0;b=0;c=0;d=0;e=1;f=0;g=0;
			  break;
		  default:
			  a=1;b=1;c=1;d=1;e=1;f=1;g=1;
			  break;
	  }
	  HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin, a);
	  HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin, b);
	  HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin, c);
	  HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin, d);
	  HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, e);
	  HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin, f);
	  HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin, g);
}

void display7SEG_2(int counter)
{
	  int a = 0;
	  int b = 0;
	  int c = 0;
	  int d = 0;
	  int e = 0;
	  int f = 0;
	  int g = 0;
	  switch(counter){
		  case 0:
			  a=0;b=0;c=0;d=0;e=0;f=0;g=1;
			  break;
		  case 1:
			  a=1;b=0;c=0;d=1;e=1;f=1;g=1;
			  break;
		  case 2:
			  a=0;b=0;c=1;d=0;e=0;f=1;g=0;
			  break;
		  case 3:
			  a=0;b=0;c=0;d=0;e=1;f=1;g=0;
			  break;
		  case 4:
			  a=1;b=0;c=0;d=1;e=1;f=0;g=0;
			  break;
		  case 5:
			  a=0;b=1;c=0;d=0;e=1;f=0;g=0;
			  break;
		  case 6:
			  a=0;b=1;c=0;d=0;e=0;f=0;g=0;
			  break;
		  case 7:
			  a=0;b=0;c=0;d=1;e=1;f=1;g=1;
			  break;
		  case 8:
			  a=0;b=0;c=0;d=0;e=0;f=0;g=0;
			  break;
		  case 9:
			  a=0;b=0;c=0;d=0;e=1;f=0;g=0;
			  break;
		  default:
			  a=1;b=1;c=1;d=1;e=1;f=1;g=1;
			  break;
	  }
	  HAL_GPIO_WritePin(a2_GPIO_Port, a2_Pin, a);
	  HAL_GPIO_WritePin(b2_GPIO_Port, b2_Pin, b);
	  HAL_GPIO_WritePin(c2_GPIO_Port, c2_Pin, c);
	  HAL_GPIO_WritePin(d2_GPIO_Port, d2_Pin, d);
	  HAL_GPIO_WritePin(e2_GPIO_Port, e2_Pin, e);
	  HAL_GPIO_WritePin(f2_GPIO_Port, f2_Pin, f);
	  HAL_GPIO_WritePin(g2_GPIO_Port, g2_Pin, g);
}

void convert_num_to_display7 (int counter){
	if(counter>9)
	{
	int firstNum = counter/10;
	int secondNum = counter%10;
	display7SEG_1(firstNum);
	display7SEG_2(secondNum);
	}
	else {
		display7SEG_1(10);
		display7SEG_2(counter);
	}
}
