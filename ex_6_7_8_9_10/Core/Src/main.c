/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2022 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */
/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */
/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/

/* USER CODE BEGIN PV */

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */

/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */

void clearAllClock () {
	  int led1state = 0;
	  int led2state = 0;
	  int led3state = 0;
	  int led4state = 0;
	  int led5state = 0;
	  int led6state = 0;
	  int led7state = 0;
	  int led8state = 0;
	  int led9state = 0;
	  int led10state = 0;
	  int led11state = 0;
	  int led12state = 0;
	  HAL_GPIO_WritePin(LED1_GPIO_Port,LED1_Pin, led1state);
	  HAL_GPIO_WritePin(LED2_GPIO_Port,LED2_Pin, led2state);
	  HAL_GPIO_WritePin(LED3_GPIO_Port,LED3_Pin, led3state);
	  HAL_GPIO_WritePin(LED4_GPIO_Port,LED4_Pin, led4state);
	  HAL_GPIO_WritePin(LED5_GPIO_Port,LED5_Pin, led5state);
	  HAL_GPIO_WritePin(LED6_GPIO_Port,LED6_Pin, led6state);
	  HAL_GPIO_WritePin(LED7_GPIO_Port,LED7_Pin, led7state);
	  HAL_GPIO_WritePin(LED8_GPIO_Port,LED8_Pin, led8state);
	  HAL_GPIO_WritePin(LED9_GPIO_Port,LED9_Pin, led9state);
	  HAL_GPIO_WritePin(LED10_GPIO_Port,LED10_Pin, led10state);
	  HAL_GPIO_WritePin(LED11_GPIO_Port,LED11_Pin, led11state);
	  HAL_GPIO_WritePin(LED12_GPIO_Port,LED12_Pin, led12state);
}

void setNumberOnClock(int num){
	  int led1state = 0;
	  int led2state = 0;
	  int led3state = 0;
	  int led4state = 0;
	  int led5state = 0;
	  int led6state = 0;
	  int led7state = 0;
	  int led8state = 0;
	  int led9state = 0;
	  int led10state = 0;
	  int led11state = 0;
	  int led12state = 0;
	  switch (num){
	  		  case 1:
	  			  led1state = 1;
	  			  HAL_GPIO_WritePin(LED1_GPIO_Port,LED1_Pin, led1state);
	  			  break;
	  		  case 2:
	  			  led2state=1;
	  			  HAL_GPIO_WritePin(LED2_GPIO_Port,LED2_Pin, led2state);
	  			  break;
	  		  case 3:
	  			  led3state=1;
	  			  HAL_GPIO_WritePin(LED3_GPIO_Port,LED3_Pin, led3state);
	  			  break;
	  		  case 4:
	  			  led4state=1;
	  			  HAL_GPIO_WritePin(LED4_GPIO_Port,LED4_Pin, led4state);
	  			  break;
	  		  case 5:
	  			  led5state=1;
	  			  HAL_GPIO_WritePin(LED5_GPIO_Port,LED5_Pin, led5state);
	  			  break;
	  		  case 6:
	  			  led6state=1;
	  			  HAL_GPIO_WritePin(LED6_GPIO_Port,LED6_Pin, led6state);
	  			  break;
	  		  case 7:
	  			  led7state = 1;
	  			  HAL_GPIO_WritePin(LED7_GPIO_Port,LED7_Pin, led7state);
	  			  break;
	  		  case 8:
	  			  led8state = 1;
	  			  HAL_GPIO_WritePin(LED8_GPIO_Port,LED8_Pin, led8state);
	  			  break;
	  		  case 9:
	  			  led9state = 1;
	  			  HAL_GPIO_WritePin(LED9_GPIO_Port,LED9_Pin, led9state);
	  			  break;
	  		  case 10:
	  			  led10state = 1;
	  			  HAL_GPIO_WritePin(LED10_GPIO_Port,LED10_Pin, led10state);
	  			  break;
	  		  case 11:
	  			  led11state = 1;
	  			  HAL_GPIO_WritePin(LED11_GPIO_Port,LED11_Pin, led11state);
	  			  break;
	  		  case 12:
	  			  led12state = 1;
	  			  HAL_GPIO_WritePin(LED12_GPIO_Port,LED12_Pin, led12state);
	  			  break;
	  		  default:
	  			  break;
	  	  }
}


void clearNumberOnClock(int num){
	switch (num){
		case 1:
		  HAL_GPIO_WritePin(LED1_GPIO_Port,LED1_Pin, 0);
		  break;
	  case 2:
		  HAL_GPIO_WritePin(LED2_GPIO_Port,LED2_Pin, 0);
		  break;
	  case 3:
		  HAL_GPIO_WritePin(LED3_GPIO_Port,LED3_Pin, 0);
		  break;
	  case 4:
		  HAL_GPIO_WritePin(LED4_GPIO_Port,LED4_Pin, 0);
		  break;
	  case 5:
		  HAL_GPIO_WritePin(LED5_GPIO_Port,LED5_Pin, 0);
		  break;
	  case 6:
		  HAL_GPIO_WritePin(LED6_GPIO_Port,LED6_Pin, 0);
		  break;
	  case 7:
		  HAL_GPIO_WritePin(LED7_GPIO_Port,LED7_Pin, 0);
		  break;
	  case 8:
		  HAL_GPIO_WritePin(LED8_GPIO_Port,LED8_Pin, 0);
		  break;
	  case 9:
		  HAL_GPIO_WritePin(LED9_GPIO_Port,LED9_Pin, 0);
		  break;
	  case 10:
		  HAL_GPIO_WritePin(LED10_GPIO_Port,LED10_Pin, 0);
		  break;
	  case 11:
		  HAL_GPIO_WritePin(LED11_GPIO_Port,LED11_Pin, 0);
		  break;
	  case 12:
		  HAL_GPIO_WritePin(LED12_GPIO_Port,LED12_Pin, 0);
		  break;
	  default:
		  break;
	}
}
int main(void)
{
  /* USER CODE BEGIN 1 */

  /* USER CODE END 1 */

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  /* USER CODE BEGIN 2 */
////////////////////////////////////////////////////////////////////////////////////
//  For lab6 outside while
//  int hour = 1;
//  int led1state = 1;
//  int led2state = 0;
//  int led3state = 0;
//  int led4state = 0;
//  int led5state = 0;
//  int led6state = 0;
//  int led7state = 0;
//  int led8state = 0;
//  int led9state = 0;
//  int led10state = 0;
//  int led11state = 0;
//  int led12state = 0;
//  HAL_GPIO_WritePin(LED1_GPIO_Port,LED1_Pin, led1state);
//  HAL_GPIO_WritePin(LED2_GPIO_Port,LED2_Pin, led2state);
//  HAL_GPIO_WritePin(LED3_GPIO_Port,LED3_Pin, led3state);
//  HAL_GPIO_WritePin(LED4_GPIO_Port,LED4_Pin, led4state);
//  HAL_GPIO_WritePin(LED5_GPIO_Port,LED5_Pin, led5state);
//  HAL_GPIO_WritePin(LED6_GPIO_Port,LED6_Pin, led6state);
//  HAL_GPIO_WritePin(LED7_GPIO_Port,LED7_Pin, led7state);
//  HAL_GPIO_WritePin(LED8_GPIO_Port,LED8_Pin, led8state);
//  HAL_GPIO_WritePin(LED9_GPIO_Port,LED9_Pin, led9state);
//  HAL_GPIO_WritePin(LED10_GPIO_Port,LED10_Pin, led10state);
//  HAL_GPIO_WritePin(LED11_GPIO_Port,LED11_Pin, led11state);
//  HAL_GPIO_WritePin(LED12_GPIO_Port,LED12_Pin, led12state);
  ////////////////////////////////////////////////////////////////////////////////////
//  For lab7 outside while
//  int led1state = 1;
//  int led2state = 1;
//  int led3state = 1;
//  int led4state = 1;
//  int led5state = 1;
//  int led6state = 1;
//  int led7state = 1;
//  int led8state = 1;
//  int led9state = 1;
//  int led10state = 1;
//  int led11state = 1;
//  int led12state = 1;
//	HAL_GPIO_WritePin(LED1_GPIO_Port,LED1_Pin, led1state);
//	HAL_GPIO_WritePin(LED2_GPIO_Port,LED2_Pin, led2state);
//	HAL_GPIO_WritePin(LED3_GPIO_Port,LED3_Pin, led3state);
//	HAL_GPIO_WritePin(LED4_GPIO_Port,LED4_Pin, led4state);
//	HAL_GPIO_WritePin(LED5_GPIO_Port,LED5_Pin, led5state);
//	HAL_GPIO_WritePin(LED6_GPIO_Port,LED6_Pin, led6state);
//	HAL_GPIO_WritePin(LED7_GPIO_Port,LED7_Pin, led7state);
//	HAL_GPIO_WritePin(LED8_GPIO_Port,LED8_Pin, led8state);
//	HAL_GPIO_WritePin(LED9_GPIO_Port,LED9_Pin, led9state);
//	HAL_GPIO_WritePin(LED10_GPIO_Port,LED10_Pin, led10state);
//	HAL_GPIO_WritePin(LED11_GPIO_Port,LED11_Pin, led11state);
//	HAL_GPIO_WritePin(LED12_GPIO_Port,LED12_Pin, led12state);
//	int turnOff = 0;
	  ////////////////////////////////////////////////////////////////////////////////////
//  For lab8 and lab9 outside while
    int led1state = 0;
    int led2state = 0;
    int led3state = 0;
    int led4state = 0;
    int led5state = 0;
    int led6state = 0;
    int led7state = 0;
    int led8state = 0;
    int led9state = 0;
    int led10state = 0;
    int led11state = 0;
    int led12state = 0;
	HAL_GPIO_WritePin(LED1_GPIO_Port,LED1_Pin, led1state);
	HAL_GPIO_WritePin(LED2_GPIO_Port,LED2_Pin, led2state);
	HAL_GPIO_WritePin(LED3_GPIO_Port,LED3_Pin, led3state);
	HAL_GPIO_WritePin(LED4_GPIO_Port,LED4_Pin, led4state);
	HAL_GPIO_WritePin(LED5_GPIO_Port,LED5_Pin, led5state);
	HAL_GPIO_WritePin(LED6_GPIO_Port,LED6_Pin, led6state);
	HAL_GPIO_WritePin(LED7_GPIO_Port,LED7_Pin, led7state);
	HAL_GPIO_WritePin(LED8_GPIO_Port,LED8_Pin, led8state);
	HAL_GPIO_WritePin(LED9_GPIO_Port,LED9_Pin, led9state);
	HAL_GPIO_WritePin(LED10_GPIO_Port,LED10_Pin, led10state);
	HAL_GPIO_WritePin(LED11_GPIO_Port,LED11_Pin, led11state);
	HAL_GPIO_WritePin(LED12_GPIO_Port,LED12_Pin, led12state);
	  int hour = 4;
//	  For lab10 in addition with code above
	  int minute = 55;
	  int second = 0;

  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  while (1)
  {
	  ///////////////////////////////////////////////////////////////////////////////////////
//	  For lab6 inside while
//	  switch (hour){
//	  		  case 1:
//	  			  led1state = 1;
//	  			  led12state = 0;
//	  			  break;
//	  		  case 2:
//	  			  led1state = 0;
//	  			  led2state = 1;
//	  			  break;
//	  		  case 3:
//	  			  led2state = 0;
//	  			  led3state = 1;
//	  			  break;
//	  		  case 4:
//	  			  led3state = 0;
//	  			  led4state = 1;
//	  			  break;
//	  		  case 5:
//	  			  led4state = 0;
//	  			  led5state = 1;
//	  			  break;
//	  		  case 6:
//	  			  led5state = 0;
//	  			  led6state = 1;
//	  			  break;
//	  		  case 7:
//	  			  led6state = 0;
//	  			  led7state = 1;
//	  			  break;
//	  		  case 8:
//	  			  led7state = 0;
//	  			  led8state = 1;
//	  			  break;
//	  		  case 9:
//	  			  led8state = 0;
//	  			  led9state = 1;
//	  			  break;
//	  		  case 10:
//	  			  led9state = 0;
//	  			  led10state = 1;
//	  			  break;
//	  		  case 11:
//	  			  led10state = 0;
//	  			  led11state = 1;
//	  			  break;
//	  		  case 12:
//	  			  led11state = 0;
//	  			  led12state = 1;
//	  			  break;
//	  		  default:
//	  			  led1state = 1;
//	  			  led2state = 1;
//	  			  led3state = 1;
//	  			  led4state = 1;
//	  			  led5state = 1;
//	  			  led6state = 1;
//	  			  led7state = 1;
//	  			  led8state = 1;
//	  			  led9state = 1;
//	  			  led10state = 1;
//	  			  led11state = 1;
//	  			  led12state = 1;
//	  			  break;
//	  	  }
//	  	  hour++;
//	  	  if(hour>12) hour=1;
//	  	  HAL_GPIO_WritePin(LED1_GPIO_Port,LED1_Pin, led1state);
//	  	  HAL_GPIO_WritePin(LED2_GPIO_Port,LED2_Pin, led2state);
//	  	  HAL_GPIO_WritePin(LED3_GPIO_Port,LED3_Pin, led3state);
//	  	  HAL_GPIO_WritePin(LED4_GPIO_Port,LED4_Pin, led4state);
//	  	  HAL_GPIO_WritePin(LED5_GPIO_Port,LED5_Pin, led5state);
//	  	  HAL_GPIO_WritePin(LED6_GPIO_Port,LED6_Pin, led6state);
//	  	  HAL_GPIO_WritePin(LED7_GPIO_Port,LED7_Pin, led7state);
//	  	  HAL_GPIO_WritePin(LED8_GPIO_Port,LED8_Pin, led8state);
//	  	  HAL_GPIO_WritePin(LED9_GPIO_Port,LED9_Pin, led9state);
//	  	  HAL_GPIO_WritePin(LED10_GPIO_Port,LED10_Pin, led10state);
//	  	  HAL_GPIO_WritePin(LED11_GPIO_Port,LED11_Pin, led11state);
//	  	  HAL_GPIO_WritePin(LED12_GPIO_Port,LED12_Pin, led12state);
//	  	  HAL_Delay(200);
////////////////////////////////////////////////////////////////////////////////////////
//	  	  For Lab7 inside while
//	  		  if(turnOff == 0)
//	  		  {
//	  			  HAL_Delay(2000);
//	  			  clearAllClock();
//	  			  turnOff = 1;
//	  		  }
	  ////////////////////////////////////////////////////////////////////////////////////////
	  //	  	  For Lab8 inside while
//	  clearAllClock();
//	  switch (hour){
//			  case 1:
//				  setNumberOnClock(hour);
//				  break;
//			  case 2:
//				  setNumberOnClock(hour);
//				  break;
//			  case 3:
//				  setNumberOnClock(hour);
//				  break;
//			  case 4:
//				  setNumberOnClock(hour);
//				  break;
//			  case 5:
//				  setNumberOnClock(hour);
//				  break;
//			  case 6:
//				  setNumberOnClock(hour);
//				  break;
//			  case 7:
//				  setNumberOnClock(hour);
//				  break;
//			  case 8:
//				  setNumberOnClock(hour);
//				  break;
//			  case 9:
//				  setNumberOnClock(hour);
//				  break;
//			  case 10:
//				  setNumberOnClock(hour);
//				  break;
//			  case 11:
//				  setNumberOnClock(hour);
//				  break;
//			  case 12:
//				  setNumberOnClock(hour);
//				  break;
//			  default:
//				  break;
//	  	  	  }
//	  	  	  hour++;
//	  	  	  if(hour>12) hour=1;
//	  	  	  HAL_Delay(500);

  ////////////////////////////////////////////////////////////////////////////////////////
  //	  	  For Lab9 inside while
//	  switch (hour){
//			  case 1:
//				  setNumberOnClock(hour);
//				  break;
//			  case 2:
//				  setNumberOnClock(hour);
//				  break;
//			  case 3:
//				  setNumberOnClock(hour);
//				  break;
//			  case 4:
//				  setNumberOnClock(hour);
//				  break;
//			  case 5:
//				  setNumberOnClock(hour);
//				  break;
//			  case 6:
//				  setNumberOnClock(hour);
//				  break;
//			  case 7:
//				  setNumberOnClock(hour);
//				  break;
//			  case 8:
//				  setNumberOnClock(hour);
//				  break;
//			  case 9:
//				  setNumberOnClock(hour);
//				  break;
//			  case 10:
//				  setNumberOnClock(hour);
//				  break;
//			  case 11:
//				  setNumberOnClock(hour);
//				  break;
//			  case 12:
//				  setNumberOnClock(hour);
//				  break;
//			  default:
//				  break;
//	  	  	  }
//	  	  	  HAL_Delay(500);
//	  	  	  clearNumberOnClock(hour);
//	  	  	  hour++;
//	  	  	  if(hour>12) hour=1;
	  ////////////////////////////////////////////////////////////////////////////////////////
//	  For lab10 inside while
	  if(second%5==0)
	  {
		  if(second==0)
		  {
			  if(minute/5 != 11 && hour!=11)
			  clearNumberOnClock(11);
			  setNumberOnClock(12);
		  }
		  else
		  {
			  if((second-5)/5 == 0 && minute/5 != 0 && hour!=0)
				clearNumberOnClock(12);
			  else{
				  if(minute/5 != (second-5)/5 && hour != (second-5)/5)
				clearNumberOnClock((second-5)/5);
			  }
			  setNumberOnClock(second/5);
		  }
	  }
	  if(minute%5==0)
	  {
		  if(minute==0)
		  {
			  if(second/5 != 11 && hour != 11)
			  clearNumberOnClock(11);
			  setNumberOnClock(12);
		  }
		  else{
			  if((minute-5)/5 == 0 && second/5 != 0 && hour != 0)
				clearNumberOnClock(12);
			  else{
				  if(second/5 != (minute-5)/5 && hour != (minute-5)/5)
				clearNumberOnClock((minute-5)/5);
			  }
			  setNumberOnClock(minute/5);
		  }
	  }
	  if(hour==0)
	  {
		  clearNumberOnClock(11);
		  setNumberOnClock(12);
	  }
	  else{
		  if(hour-1==0 && second/5 != 0 && minute/5 != 0)
		  clearNumberOnClock(12);
		  else{
			  if(second/5 != hour-1 && minute/5 != hour-1)
			  clearNumberOnClock(hour-1);
		  }
		  setNumberOnClock(hour);
	  }
	  HAL_Delay(50);
	  second++;
	  if(second==60)
	  {
		  minute++;
		  second=0;
	  }
	  if(minute==60)
	  {
		  hour++;
		  minute=0;
	  }
	  if(hour==12)
	  {
		  hour=0;
	  }
    /* USER CODE END WHILE */

    /* USER CODE BEGIN 3 */
  }
  /* USER CODE END 3 */
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_NONE;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }
  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_HSI;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_0) != HAL_OK)
  {
    Error_Handler();
  }
}

/**
  * @brief GPIO Initialization Function
  * @param None
  * @retval None
  */
static void MX_GPIO_Init(void)
{
  GPIO_InitTypeDef GPIO_InitStruct = {0};

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOA_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOA, LED1_Pin|LED2_Pin|LED3_Pin|LED4_Pin
                          |LED5_Pin|LED6_Pin|LED7_Pin|LED8_Pin
                          |LED9_Pin|LED10_Pin|LED11_Pin|LED12_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pins : LED1_Pin LED2_Pin LED3_Pin LED4_Pin
                           LED5_Pin LED6_Pin LED7_Pin LED8_Pin
                           LED9_Pin LED10_Pin LED11_Pin LED12_Pin */
  GPIO_InitStruct.Pin = LED1_Pin|LED2_Pin|LED3_Pin|LED4_Pin
                          |LED5_Pin|LED6_Pin|LED7_Pin|LED8_Pin
                          |LED9_Pin|LED10_Pin|LED11_Pin|LED12_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

}

/* USER CODE BEGIN 4 */

/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */
  __disable_irq();
  while (1)
  {
  }
  /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
