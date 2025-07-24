/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2025 STMicroelectronics.
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
#include "stm32f0xx_hal.h"

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

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define ADC_ANEMO_Pin GPIO_PIN_0
#define ADC_ANEMO_GPIO_Port GPIOA
#define ESP_TX_Pin GPIO_PIN_2
#define ESP_TX_GPIO_Port GPIOA
#define ESP_RX_Pin GPIO_PIN_3
#define ESP_RX_GPIO_Port GPIOA
#define T3C1_MOTOR_PWM_Pin GPIO_PIN_6
#define T3C1_MOTOR_PWM_GPIO_Port GPIOA
#define T3C2_R_LED_Pin GPIO_PIN_7
#define T3C2_R_LED_GPIO_Port GPIOA
#define T3C3_G_LED_Pin GPIO_PIN_0
#define T3C3_G_LED_GPIO_Port GPIOB
#define T3C4_B_LED_Pin GPIO_PIN_1
#define T3C4_B_LED_GPIO_Port GPIOB
#define USB_TX_Pin GPIO_PIN_9
#define USB_TX_GPIO_Port GPIOA
#define USB_RX_Pin GPIO_PIN_10
#define USB_RX_GPIO_Port GPIOA
#define SCL_OLED_Pin GPIO_PIN_6
#define SCL_OLED_GPIO_Port GPIOB
#define SDA_OLED_Pin GPIO_PIN_7
#define SDA_OLED_GPIO_Port GPIOB
#define DHT11_PIN_Pin GPIO_PIN_9
#define DHT11_PIN_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
