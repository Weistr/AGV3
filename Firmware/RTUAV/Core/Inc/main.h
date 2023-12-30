/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2023 STMicroelectronics.
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
#include "stm32h7xx_hal.h"

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
#define UART8_IO_Pin GPIO_PIN_2
#define UART8_IO_GPIO_Port GPIOE
#define OLED_DC_Pin GPIO_PIN_4
#define OLED_DC_GPIO_Port GPIOC
#define OLED_RST_Pin GPIO_PIN_5
#define OLED_RST_GPIO_Port GPIOC
#define IMU_IO_Pin GPIO_PIN_0
#define IMU_IO_GPIO_Port GPIOB
#define UART7_IO_Pin GPIO_PIN_2
#define UART7_IO_GPIO_Port GPIOB
#define ICM0_CS_Pin GPIO_PIN_9
#define ICM0_CS_GPIO_Port GPIOE
#define BMI055_CS_Pin GPIO_PIN_10
#define BMI055_CS_GPIO_Port GPIOE
#define BMP_CS_Pin GPIO_PIN_11
#define BMP_CS_GPIO_Port GPIOE
#define AK8975_CS_Pin GPIO_PIN_15
#define AK8975_CS_GPIO_Port GPIOE
#define USART1_IO_Pin GPIO_PIN_8
#define USART1_IO_GPIO_Port GPIOA
#define I2C1_IO_Pin GPIO_PIN_3
#define I2C1_IO_GPIO_Port GPIOD
#define FMC_CS_Pin GPIO_PIN_7
#define FMC_CS_GPIO_Port GPIOD
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
