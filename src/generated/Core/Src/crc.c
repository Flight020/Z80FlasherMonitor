/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file    crc.c
  * @brief   This file provides code for the configuration
  *          of the CRC instances.
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
/* Includes ------------------------------------------------------------------*/
#include "crc.h"

CRC_HandleTypeDef hcrc;

/* CRC init function */
void MX_CRC_Init(void)
{

  hcrc.Instance = CRC;
  if (HAL_CRC_Init(&hcrc) != HAL_OK)
  {
    Error_Handler();
  }

}

void HAL_CRC_MspInit(CRC_HandleTypeDef* crcHandle)
{

  if(crcHandle->Instance==CRC)
  {
    /* CRC clock enable */
    __HAL_RCC_CRC_CLK_ENABLE();
  }
}

void HAL_CRC_MspDeInit(CRC_HandleTypeDef* crcHandle)
{

  if(crcHandle->Instance==CRC)
  {
    /* Peripheral clock disable */
    __HAL_RCC_CRC_CLK_DISABLE();
  }
}
