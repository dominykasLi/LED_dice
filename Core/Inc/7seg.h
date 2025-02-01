/**
  ******************************************************************************
  * @file           : 7seg.h
  * @brief          : Header for 7seg.c file.
  *                   This file sets the 7 segment dislay numbers to turn on.
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __7SEG_H
#define __7SEG_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

/* Exported functions prototypes ---------------------------------------------*/
void Display_Number(unsigned int number);
void Clear_Display(void);
void Clear_Display_Animation(void);

/* Variables*/
/*Display 7 segment 5161AS
    --A--
    F   B
    --G--
    E   C
    --D--  DP
*/
#define A_PIN           GPIO_PIN_14
#define A_PORT          GPIOB
#define B_PIN           GPIO_PIN_15
#define B_PORT          GPIOB
#define C_PIN           GPIO_PIN_9
#define C_PORT          GPIOA
#define D_PIN           GPIO_PIN_10
#define D_PORT          GPIOA
#define E_PIN           GPIO_PIN_11
#define E_PORT          GPIOA
#define F_PIN           GPIO_PIN_13
#define F_PORT          GPIOB
#define G_PIN           GPIO_PIN_12
#define G_PORT          GPIOB
#define DP_PIN          GPIO_PIN_8
#define DP_PORT         GPIOA


#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
