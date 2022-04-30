/*
 * LED_Private.h
 *
 * Created: 2/26/2022 3:24:23 PM
 *  Author: youssef samy 
 */ 


#ifndef LED_PRIVATE_H_
#define LED_PRIVATE_H_


#include "LED_Configuration.h"

void LED_Initialize(LED_prt Port, LED Led, LED_Dir Direction);
void LED_State(LED_prt Port, LED Led, LED_Ste State);
void LED_Toggle(LED_prt Port, LED Led);


#endif /* LED_PRIVATE_H_ */