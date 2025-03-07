/*
 * Ex4.c
 *
 *  Created on: Sep 11, 2024
 *      Author: Song Thuy
 */
#include "Ex4.h"
int counter2=0;


void init_Ex4(){

	    HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, SET);
	    HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, SET);
	    HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, SET);
	    HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, SET);
	    HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, SET);
	    HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, SET);
	    HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, SET);
}
void display7SEG(int num){
	switch(num){
			  case 0:
				  HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, RESET);
				  HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET);
				  HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
				  HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, RESET);
				  HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, RESET);
				  HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, RESET);
				  HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, SET);
				  break;
			  case 1:
				  HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, SET);
				  HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET);
				  HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
				  HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, SET);
				  HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, SET);
				  HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, SET);
				  HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, SET);
				  break;
			  case 2:
				  HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, RESET);
				  HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET);
				  HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, SET);
				  HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, RESET);
				  HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, RESET);
				  HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, SET);
				  HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, RESET);
				  break;
			  case 3:
				  HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, RESET);
				  HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET);
				  HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
				  HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, RESET);
				  HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, SET);
				  HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, SET);
				  HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, RESET);
				  break;
			  case 4:
				  HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, SET);
				  HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET);
				  HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
				  HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, SET);
				  HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, SET);
				  HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, RESET);
				  HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, RESET);
				  break;
			  case 5:
				  HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, RESET);
				  HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, SET);
				  HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
				  HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, RESET);
				  HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, SET);
				  HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, RESET);
				  HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, RESET);
				  break;
			  case 6:
				  HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, RESET);
				  HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, SET);
				  HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
				  HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, RESET);
				  HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, RESET);
				  HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, RESET);
				  HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, RESET);
				  break;
			  case 7:
				  HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, RESET);
				  HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET);
				  HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
				  HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, SET);
				  HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, SET);
				  HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, SET);
				  HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, SET);
				  break;
			  case 8:
				  HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, RESET);
				  HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET);
				  HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
				  HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, RESET);
				  HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, RESET);
				  HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, RESET);
				  HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, RESET);
				  break;
			  case 9:
				  HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, RESET);
				  HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET);
				  HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
				  HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, RESET);
				  HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, SET);
				  HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, RESET);
				  HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, RESET);
				  break;
			  default:
			      break;
		}
}
void display7SEG1(int num1){
	switch(num1){
				  case 0:
					  HAL_GPIO_WritePin(SEG_7_GPIO_Port, SEG_7_Pin, RESET);
					  HAL_GPIO_WritePin(SEG_8_GPIO_Port, SEG_8_Pin, RESET);
					  HAL_GPIO_WritePin(SEG_9_GPIO_Port, SEG_9_Pin, RESET);
					  HAL_GPIO_WritePin(SEG_10_GPIO_Port, SEG_10_Pin, RESET);
					  HAL_GPIO_WritePin(SEG_11_GPIO_Port, SEG_11_Pin, RESET);
					  HAL_GPIO_WritePin(SEG_12_GPIO_Port, SEG_12_Pin, RESET);
					  HAL_GPIO_WritePin(SEG_13_GPIO_Port, SEG_13_Pin, SET);
					  break;
				  case 1:
					  HAL_GPIO_WritePin(SEG_7_GPIO_Port, SEG_7_Pin, SET);
					  HAL_GPIO_WritePin(SEG_8_GPIO_Port, SEG_8_Pin, RESET);
					  HAL_GPIO_WritePin(SEG_9_GPIO_Port, SEG_9_Pin, RESET);
					  HAL_GPIO_WritePin(SEG_10_GPIO_Port, SEG_10_Pin, SET);
					  HAL_GPIO_WritePin(SEG_11_GPIO_Port, SEG_11_Pin, SET);
					  HAL_GPIO_WritePin(SEG_12_GPIO_Port, SEG_12_Pin, SET);
					  HAL_GPIO_WritePin(SEG_13_GPIO_Port, SEG_13_Pin, SET);
					  break;
				  case 2:
					  HAL_GPIO_WritePin(SEG_7_GPIO_Port, SEG_7_Pin, RESET);
					  HAL_GPIO_WritePin(SEG_8_GPIO_Port, SEG_8_Pin, RESET);
					  HAL_GPIO_WritePin(SEG_9_GPIO_Port, SEG_9_Pin, SET);
					  HAL_GPIO_WritePin(SEG_10_GPIO_Port, SEG_10_Pin, RESET);
					  HAL_GPIO_WritePin(SEG_11_GPIO_Port, SEG_11_Pin, RESET);
					  HAL_GPIO_WritePin(SEG_12_GPIO_Port, SEG_12_Pin, SET);
					  HAL_GPIO_WritePin(SEG_13_GPIO_Port, SEG_13_Pin, RESET);
					  break;
				  case 3:
					  HAL_GPIO_WritePin(SEG_7_GPIO_Port, SEG_7_Pin, RESET);
					  HAL_GPIO_WritePin(SEG_8_GPIO_Port, SEG_8_Pin, RESET);
					  HAL_GPIO_WritePin(SEG_9_GPIO_Port, SEG_9_Pin, RESET);
					  HAL_GPIO_WritePin(SEG_10_GPIO_Port, SEG_10_Pin, RESET);
					  HAL_GPIO_WritePin(SEG_11_GPIO_Port, SEG_11_Pin, SET);
					  HAL_GPIO_WritePin(SEG_12_GPIO_Port, SEG_12_Pin, SET);
					  HAL_GPIO_WritePin(SEG_13_GPIO_Port, SEG_13_Pin, RESET);
					  break;
				  case 4:
					  HAL_GPIO_WritePin(SEG_7_GPIO_Port, SEG_7_Pin, SET);
					  HAL_GPIO_WritePin(SEG_8_GPIO_Port, SEG_8_Pin, RESET);
					  HAL_GPIO_WritePin(SEG_9_GPIO_Port, SEG_9_Pin, RESET);
					  HAL_GPIO_WritePin(SEG_10_GPIO_Port, SEG_10_Pin, SET);
					  HAL_GPIO_WritePin(SEG_11_GPIO_Port, SEG_11_Pin, SET);
					  HAL_GPIO_WritePin(SEG_12_GPIO_Port, SEG_12_Pin, RESET);
					  HAL_GPIO_WritePin(SEG_13_GPIO_Port, SEG_13_Pin, RESET);
					  break;
				  case 5:
					  HAL_GPIO_WritePin(SEG_7_GPIO_Port, SEG_7_Pin, RESET);
					  HAL_GPIO_WritePin(SEG_8_GPIO_Port, SEG_8_Pin, SET);
					  HAL_GPIO_WritePin(SEG_9_GPIO_Port, SEG_9_Pin, RESET);
					  HAL_GPIO_WritePin(SEG_10_GPIO_Port, SEG_10_Pin, RESET);
					  HAL_GPIO_WritePin(SEG_11_GPIO_Port, SEG_11_Pin, SET);
					  HAL_GPIO_WritePin(SEG_12_GPIO_Port, SEG_12_Pin, RESET);
					  HAL_GPIO_WritePin(SEG_13_GPIO_Port, SEG_13_Pin, RESET);
					  break;
				  case 6:
					  HAL_GPIO_WritePin(SEG_7_GPIO_Port, SEG_7_Pin, RESET);
					  HAL_GPIO_WritePin(SEG_8_GPIO_Port, SEG_8_Pin, SET);
					  HAL_GPIO_WritePin(SEG_9_GPIO_Port, SEG_9_Pin, RESET);
					  HAL_GPIO_WritePin(SEG_10_GPIO_Port, SEG_10_Pin, RESET);
					  HAL_GPIO_WritePin(SEG_11_GPIO_Port, SEG_11_Pin, RESET);
					  HAL_GPIO_WritePin(SEG_12_GPIO_Port, SEG_12_Pin, RESET);
					  HAL_GPIO_WritePin(SEG_13_GPIO_Port, SEG_13_Pin, RESET);
					  break;
				  case 7:
					  HAL_GPIO_WritePin(SEG_7_GPIO_Port, SEG_7_Pin, RESET);
					  HAL_GPIO_WritePin(SEG_8_GPIO_Port, SEG_8_Pin, RESET);
					  HAL_GPIO_WritePin(SEG_9_GPIO_Port, SEG_9_Pin, RESET);
					  HAL_GPIO_WritePin(SEG_10_GPIO_Port, SEG_10_Pin, SET);
					  HAL_GPIO_WritePin(SEG_11_GPIO_Port, SEG_11_Pin, SET);
					  HAL_GPIO_WritePin(SEG_12_GPIO_Port, SEG_12_Pin, SET);
					  HAL_GPIO_WritePin(SEG_13_GPIO_Port, SEG_13_Pin, SET);
					  break;
				  case 8:
					  HAL_GPIO_WritePin(SEG_7_GPIO_Port, SEG_7_Pin, RESET);
					  HAL_GPIO_WritePin(SEG_8_GPIO_Port, SEG_8_Pin, RESET);
					  HAL_GPIO_WritePin(SEG_9_GPIO_Port, SEG_9_Pin, RESET);
					  HAL_GPIO_WritePin(SEG_10_GPIO_Port, SEG_10_Pin, RESET);
					  HAL_GPIO_WritePin(SEG_11_GPIO_Port, SEG_11_Pin, RESET);
					  HAL_GPIO_WritePin(SEG_12_GPIO_Port, SEG_12_Pin, RESET);
					  HAL_GPIO_WritePin(SEG_13_GPIO_Port, SEG_13_Pin, RESET);
					  break;
				  case 9:
					  HAL_GPIO_WritePin(SEG_7_GPIO_Port, SEG_7_Pin, RESET);
					  HAL_GPIO_WritePin(SEG_8_GPIO_Port, SEG_8_Pin, RESET);
					  HAL_GPIO_WritePin(SEG_9_GPIO_Port, SEG_9_Pin, RESET);
					  HAL_GPIO_WritePin(SEG_10_GPIO_Port, SEG_10_Pin, RESET);
					  HAL_GPIO_WritePin(SEG_11_GPIO_Port, SEG_11_Pin, SET);
					  HAL_GPIO_WritePin(SEG_12_GPIO_Port, SEG_12_Pin, RESET);
					  HAL_GPIO_WritePin(SEG_13_GPIO_Port, SEG_13_Pin, RESET);
					  break;
				  default:
				      break;
			}
}
void Ex4_run(){
	display7SEG(counter2++);
		  if(counter2>=10)
		    counter2=0;
}
