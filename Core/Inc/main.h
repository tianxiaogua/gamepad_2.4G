/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32g4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define LED0_Pin GPIO_PIN_13
#define LED0_GPIO_Port GPIOC
#define ADC_RY_Pin GPIO_PIN_0
#define ADC_RY_GPIO_Port GPIOC
#define ADC_RX_Pin GPIO_PIN_1
#define ADC_RX_GPIO_Port GPIOC
#define BEEP_Pin GPIO_PIN_2
#define BEEP_GPIO_Port GPIOC
#define LCD_RS_Pin GPIO_PIN_3
#define LCD_RS_GPIO_Port GPIOC
#define KEY_CHA_Pin GPIO_PIN_0
#define KEY_CHA_GPIO_Port GPIOA
#define ADC_LX_Pin GPIO_PIN_1
#define ADC_LX_GPIO_Port GPIOA
#define ADC_LY_Pin GPIO_PIN_2
#define ADC_LY_GPIO_Port GPIOA
#define ADC_BAT_Pin GPIO_PIN_3
#define ADC_BAT_GPIO_Port GPIOA
#define GT_24_IRQ_Pin GPIO_PIN_4
#define GT_24_IRQ_GPIO_Port GPIOA
#define GT_24_CSN_Pin GPIO_PIN_4
#define GT_24_CSN_GPIO_Port GPIOC
#define GT_24_CE_Pin GPIO_PIN_5
#define GT_24_CE_GPIO_Port GPIOC
#define KEY_DOWN_1_Pin GPIO_PIN_10
#define KEY_DOWN_1_GPIO_Port GPIOB
#define KEY_DOWN_2_Pin GPIO_PIN_11
#define KEY_DOWN_2_GPIO_Port GPIOB
#define KEY_DOWN_3_Pin GPIO_PIN_12
#define KEY_DOWN_3_GPIO_Port GPIOB
#define KEY_up_Pin GPIO_PIN_6
#define KEY_up_GPIO_Port GPIOC
#define KEY_down_Pin GPIO_PIN_7
#define KEY_down_GPIO_Port GPIOC
#define KEY_left_Pin GPIO_PIN_8
#define KEY_left_GPIO_Port GPIOC
#define KEY_right_Pin GPIO_PIN_9
#define KEY_right_GPIO_Port GPIOC
#define POWER_EN_Pin GPIO_PIN_8
#define POWER_EN_GPIO_Port GPIOA
#define MPU_INT_Pin GPIO_PIN_10
#define MPU_INT_GPIO_Port GPIOC
#define KEY_USB_Pin GPIO_PIN_11
#define KEY_USB_GPIO_Port GPIOC
#define KEY_select_Pin GPIO_PIN_12
#define KEY_select_GPIO_Port GPIOC
#define KEY_start_Pin GPIO_PIN_2
#define KEY_start_GPIO_Port GPIOD
#define LCD_LEDA_Pin GPIO_PIN_3
#define LCD_LEDA_GPIO_Port GPIOB
#define KEY_1_Pin GPIO_PIN_4
#define KEY_1_GPIO_Port GPIOB
#define kEY_2_Pin GPIO_PIN_5
#define kEY_2_GPIO_Port GPIOB
#define SPI2_CS0_Pin GPIO_PIN_6
#define SPI2_CS0_GPIO_Port GPIOB
#define LCD_REST_Pin GPIO_PIN_9
#define LCD_REST_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
