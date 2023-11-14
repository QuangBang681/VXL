/*
 * button.c
 *
 *  Created on: Nov 3, 2023
 *      Author: Bryce
 */


#include "button.h"
int KeyReg0 = NORMAL_STATE;
int KeyReg1 = NORMAL_STATE;
int KeyReg2 = NORMAL_STATE;
int KeyReg3 = NORMAL_STATE;

int TimeOutForKeyPress_1 =  500;
int button1_flag = 0;

int isButton1Pressed(){
	if(button1_flag == 1){
		button1_flag = 0;
		return 1;
	}
	return 0;
}

void subKeyProcess_1(){
	button1_flag = 1;
}

void getKeyInput_1(){
  KeyReg2 = KeyReg1;
  KeyReg1 = KeyReg0;
  //Add your button here
  KeyReg0 = HAL_GPIO_ReadPin(button_GPIO_Port,button_Pin);

  if ((KeyReg1 == KeyReg0) && (KeyReg1 == KeyReg2)){
    if (KeyReg2 != KeyReg3){
      KeyReg3 = KeyReg2;

      if (KeyReg3 == PRESSED_STATE){
        TimeOutForKeyPress_1 = 500;
        subKeyProcess_1();
      }
    }else{
       TimeOutForKeyPress_1 --;
        if (TimeOutForKeyPress_1 == 0){
        	TimeOutForKeyPress_1 = 500;
        	if (KeyReg3 == PRESSED_STATE)
        	{
        		subKeyProcess_1();
        	}
        }
    }
  }
}

int KeyReg0_2 = NORMAL_STATE;
int KeyReg1_2 = NORMAL_STATE;
int KeyReg2_2 = NORMAL_STATE;
int KeyReg3_2 = NORMAL_STATE;

int TimeOutForKeyPress_2 =  500;
int button2_flag = 0;

int isButton2Pressed(){
	if(button2_flag == 1){
		button2_flag = 0;
		return 1;
	}
	return 0;
}

void subKeyProcess_2(){
	button2_flag = 1;
}

void getKeyInput_2(){
  KeyReg2_2 = KeyReg1_2;
  KeyReg1_2 = KeyReg0_2;
  //Add your button here
  KeyReg0_2 = HAL_GPIO_ReadPin(button2_GPIO_Port,button2_Pin);

  if ((KeyReg1_2 == KeyReg0_2) && (KeyReg1_2 == KeyReg2_2)){
    if (KeyReg2_2 != KeyReg3_2){
      KeyReg3_2 = KeyReg2_2;

      if (KeyReg3_2 == PRESSED_STATE){
        TimeOutForKeyPress_2 = 500;
        subKeyProcess_2();
      }
    }else{
       TimeOutForKeyPress_2--;
        if (TimeOutForKeyPress_2 == 0){
        	TimeOutForKeyPress_2 = 500;
        	if (KeyReg3_2 == PRESSED_STATE)
        	{
        		subKeyProcess_2();
        	}
        }
    }
  }
}

int KeyReg0_3 = NORMAL_STATE;
int KeyReg1_3 = NORMAL_STATE;
int KeyReg2_3 = NORMAL_STATE;
int KeyReg3_3 = NORMAL_STATE;

int TimeOutForKeyPress_3 =  500;
int button3_flag = 0;

int isButton3Pressed(){
	if(button3_flag == 1){
		button3_flag = 0;
		return 1;
	}
	return 0;
}

void subKeyProcess_3(){
	button3_flag = 1;
}

void getKeyInput_3(){
  KeyReg2_3 = KeyReg1_3;
  KeyReg1_3 = KeyReg0_3;
  //Add your button here
  KeyReg0_3 = HAL_GPIO_ReadPin(button3_GPIO_Port,button3_Pin);

  if ((KeyReg1_3 == KeyReg0_3) && (KeyReg1_3 == KeyReg2_3)){
    if (KeyReg2_3 != KeyReg3_3){
      KeyReg3_3 = KeyReg2_3;

      if (KeyReg3_3 == PRESSED_STATE){
        TimeOutForKeyPress_3 = 500;
        subKeyProcess_3();
      }
    }else{
       TimeOutForKeyPress_3--;
        if (TimeOutForKeyPress_3 == 0){
        	TimeOutForKeyPress_3 = 500;
        	if (KeyReg3_3 == PRESSED_STATE)
        	{
        		subKeyProcess_3();
        	}
        }
    }
  }
}



















