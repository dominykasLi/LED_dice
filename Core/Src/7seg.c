/** 
  ******************************************************************************
  * @file           : 7seg.c
  * @brief          : This file sets the 7 segment dislay numbers to turn on.
  ******************************************************************************
*/
/* Includes ------------------------------------------------------------------*/
#include "7seg.h"

/* Private functions ---------------------------------------------------------*/

/**
  * @brief Sets the number on the 7 segment display
  * @param Number to display
  * @retval None
  */
void Display_Number(unsigned int number)
{
    switch(number){
        case 1:
            HAL_GPIO_WritePin(B_PORT, B_PIN,1);
            HAL_GPIO_WritePin(C_PORT, C_PIN,1);
            break;
        case 2:
            HAL_GPIO_WritePin(A_PORT, A_PIN,1);
            HAL_GPIO_WritePin(B_PORT, B_PIN,1);
            HAL_GPIO_WritePin(G_PORT, G_PIN,1);
            HAL_GPIO_WritePin(E_PORT, E_PIN,1);
            HAL_GPIO_WritePin(D_PORT, D_PIN,1);
            break;
        case 3:
            HAL_GPIO_WritePin(A_PORT, A_PIN,1);
            HAL_GPIO_WritePin(B_PORT, B_PIN,1);
            HAL_GPIO_WritePin(G_PORT, G_PIN,1);
            HAL_GPIO_WritePin(C_PORT, C_PIN,1);
            HAL_GPIO_WritePin(D_PORT, D_PIN,1);
            break;
        case 4:
            HAL_GPIO_WritePin(F_PORT, F_PIN,1);
            HAL_GPIO_WritePin(B_PORT, B_PIN,1);
            HAL_GPIO_WritePin(G_PORT, G_PIN,1);
            HAL_GPIO_WritePin(C_PORT, C_PIN,1);
            break;
        case 5:
            HAL_GPIO_WritePin(A_PORT, A_PIN,1);
            HAL_GPIO_WritePin(F_PORT, F_PIN,1);
            HAL_GPIO_WritePin(G_PORT, G_PIN,1);
            HAL_GPIO_WritePin(C_PORT, C_PIN,1);
            HAL_GPIO_WritePin(D_PORT, D_PIN,1);
            break;
        case 6:
            HAL_GPIO_WritePin(A_PORT, A_PIN,1);
            HAL_GPIO_WritePin(F_PORT, F_PIN,1);
            HAL_GPIO_WritePin(C_PORT, C_PIN,1);
            HAL_GPIO_WritePin(E_PORT, E_PIN,1);
            HAL_GPIO_WritePin(G_PORT, G_PIN,1);
            HAL_GPIO_WritePin(D_PORT, D_PIN,1);
            break;
        case 7:
            HAL_GPIO_WritePin(A_PORT, A_PIN,1);
            HAL_GPIO_WritePin(B_PORT, B_PIN,1);
            HAL_GPIO_WritePin(C_PORT, C_PIN,1);
            break;
        case 8:
            HAL_GPIO_WritePin(A_PORT, A_PIN,1);
            HAL_GPIO_WritePin(B_PORT, B_PIN,1);
            HAL_GPIO_WritePin(C_PORT, C_PIN,1);
            HAL_GPIO_WritePin(G_PORT, G_PIN,1);
            HAL_GPIO_WritePin(F_PORT, F_PIN,1);
            HAL_GPIO_WritePin(E_PORT, E_PIN,1);
            HAL_GPIO_WritePin(D_PORT, D_PIN,1);
            break;
        case 9:
            HAL_GPIO_WritePin(A_PORT, A_PIN,1);
            HAL_GPIO_WritePin(B_PORT, B_PIN,1);
            HAL_GPIO_WritePin(F_PORT, F_PIN,1);
            HAL_GPIO_WritePin(G_PORT, G_PIN,1);
            HAL_GPIO_WritePin(C_PORT, C_PIN,1);
            HAL_GPIO_WritePin(D_PORT, D_PIN,1);
            break;
        case 0:
            HAL_GPIO_WritePin(A_PORT, A_PIN,1);
            HAL_GPIO_WritePin(B_PORT, B_PIN,1);
            HAL_GPIO_WritePin(F_PORT, F_PIN,1);
            HAL_GPIO_WritePin(E_PORT, E_PIN,1);
            HAL_GPIO_WritePin(C_PORT, C_PIN,1);
            HAL_GPIO_WritePin(D_PORT, D_PIN,1);
            break;
        // The dot on the 7-segment
        case 10:
            HAL_GPIO_WritePin(DP_PORT, DP_PIN,1);
            break;
    }
}

/**
  * @brief Clears the 7 segment display
  * @retval None
  */
 void Clear_Display(void)
 {
    HAL_GPIO_WritePin(A_PORT, A_PIN, 0);
    HAL_GPIO_WritePin(B_PORT, B_PIN, 0);
    HAL_GPIO_WritePin(C_PORT, C_PIN, 0);
    HAL_GPIO_WritePin(G_PORT, G_PIN, 0);
    HAL_GPIO_WritePin(F_PORT, F_PIN, 0);
    HAL_GPIO_WritePin(E_PORT, E_PIN, 0);
    HAL_GPIO_WritePin(D_PORT, D_PIN, 0);
    HAL_GPIO_WritePin(DP_PORT, DP_PIN, 0);
 }

 /**
  * @brief Clears the 7 segment display with animation
  * @retval None
  */
 void Clear_Display_Animation(void)
 {
    Clear_Display();
    for(int i = 0; i < 10; i++){
        Display_Number(i);
        HAL_Delay(100);
        Clear_Display();
    }
 }