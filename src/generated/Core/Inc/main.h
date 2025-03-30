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
#include "stm32f4xx_hal.h"

#include "stm32f4xx_ll_system.h"
#include "stm32f4xx_ll_gpio.h"
#include "stm32f4xx_ll_exti.h"
#include "stm32f4xx_ll_bus.h"
#include "stm32f4xx_ll_cortex.h"
#include "stm32f4xx_ll_rcc.h"
#include "stm32f4xx_ll_utils.h"
#include "stm32f4xx_ll_pwr.h"
#include "stm32f4xx_ll_dma.h"

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
#define ADDR13_Pin LL_GPIO_PIN_13
#define ADDR13_GPIO_Port GPIOC
#define ADDR14_Pin LL_GPIO_PIN_14
#define ADDR14_GPIO_Port GPIOC
#define ADDR15_Pin LL_GPIO_PIN_15
#define ADDR15_GPIO_Port GPIOC
#define ADDR0_Pin LL_GPIO_PIN_0
#define ADDR0_GPIO_Port GPIOC
#define ADDR1_Pin LL_GPIO_PIN_1
#define ADDR1_GPIO_Port GPIOC
#define ADDR2_Pin LL_GPIO_PIN_2
#define ADDR2_GPIO_Port GPIOC
#define ADDR3_Pin LL_GPIO_PIN_3
#define ADDR3_GPIO_Port GPIOC
#define DATA0_Pin LL_GPIO_PIN_0
#define DATA0_GPIO_Port GPIOA
#define DATA1_Pin LL_GPIO_PIN_1
#define DATA1_GPIO_Port GPIOA
#define DATA2_Pin LL_GPIO_PIN_2
#define DATA2_GPIO_Port GPIOA
#define DATA3_Pin LL_GPIO_PIN_3
#define DATA3_GPIO_Port GPIOA
#define DATA4_Pin LL_GPIO_PIN_4
#define DATA4_GPIO_Port GPIOA
#define DATA5_Pin LL_GPIO_PIN_5
#define DATA5_GPIO_Port GPIOA
#define DATA6_Pin LL_GPIO_PIN_6
#define DATA6_GPIO_Port GPIOA
#define DATA7_Pin LL_GPIO_PIN_7
#define DATA7_GPIO_Port GPIOA
#define ADDR4_Pin LL_GPIO_PIN_4
#define ADDR4_GPIO_Port GPIOC
#define ADDR5_Pin LL_GPIO_PIN_5
#define ADDR5_GPIO_Port GPIOC
#define SYSTEMCLK_Pin LL_GPIO_PIN_0
#define SYSTEMCLK_GPIO_Port GPIOB
#define M1_Pin LL_GPIO_PIN_1
#define M1_GPIO_Port GPIOB
#define MREQ_Pin LL_GPIO_PIN_2
#define MREQ_GPIO_Port GPIOB
#define IOREQ_Pin LL_GPIO_PIN_10
#define IOREQ_GPIO_Port GPIOB
#define RD_Pin LL_GPIO_PIN_12
#define RD_GPIO_Port GPIOB
#define WR_Pin LL_GPIO_PIN_13
#define WR_GPIO_Port GPIOB
#define WAIT_Pin LL_GPIO_PIN_14
#define WAIT_GPIO_Port GPIOB
#define HALT_Pin LL_GPIO_PIN_15
#define HALT_GPIO_Port GPIOB
#define ADDR6_Pin LL_GPIO_PIN_6
#define ADDR6_GPIO_Port GPIOC
#define ADDR7_Pin LL_GPIO_PIN_7
#define ADDR7_GPIO_Port GPIOC
#define ADDR8_Pin LL_GPIO_PIN_8
#define ADDR8_GPIO_Port GPIOC
#define ADDR9_Pin LL_GPIO_PIN_9
#define ADDR9_GPIO_Port GPIOC
#define EXTWR_Pin LL_GPIO_PIN_8
#define EXTWR_GPIO_Port GPIOA
#define LEVELEN_Pin LL_GPIO_PIN_10
#define LEVELEN_GPIO_Port GPIOA
#define CTRLDirection_Pin LL_GPIO_PIN_15
#define CTRLDirection_GPIO_Port GPIOA
#define ADDR10_Pin LL_GPIO_PIN_10
#define ADDR10_GPIO_Port GPIOC
#define ADDR11_Pin LL_GPIO_PIN_11
#define ADDR11_GPIO_Port GPIOC
#define ADDR12_Pin LL_GPIO_PIN_12
#define ADDR12_GPIO_Port GPIOC
#define PRGRM1_Pin LL_GPIO_PIN_2
#define PRGRM1_GPIO_Port GPIOD
#define DATADirection_Pin LL_GPIO_PIN_3
#define DATADirection_GPIO_Port GPIOB
#define INT_Pin LL_GPIO_PIN_4
#define INT_GPIO_Port GPIOB
#define NMI_Pin LL_GPIO_PIN_5
#define NMI_GPIO_Port GPIOB
#define RESET_Pin LL_GPIO_PIN_6
#define RESET_GPIO_Port GPIOB
#define BUSRQ_Pin LL_GPIO_PIN_7
#define BUSRQ_GPIO_Port GPIOB
#define BUSACK_Pin LL_GPIO_PIN_8
#define BUSACK_GPIO_Port GPIOB
#define CLK_LOOPBACK_Pin LL_GPIO_PIN_9
#define CLK_LOOPBACK_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
