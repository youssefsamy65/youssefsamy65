/*
* LED_Configuration.h
*
* Created: 2/26/2022 3:24:07 PM
*  Author: youssef samy 
*/


#ifndef LED_CONFIGURATION_H_
#define LED_CONFIGURATION_H_

#include "CPU_Configurations.h"

typedef enum
{
	LED0_G = 2,
	LED1_G = 7,
	LED2_G = 3
}LED;

typedef enum
{
	LED0_PRT_G = DIO_PORTC,
	LED1_PRT_G = DIO_PORTC,
	LED2_PRT_G = DIO_PORTD
}LED_prt;

typedef enum
{
	LED_INP_G = 0,
	LED_OUT_G = 1
}LED_Dir;

typedef enum
{
	LED_L_G = 0,
	LED_H_G = 1
}LED_Ste;

#endif /* LED_CONFIGURATION_H_ */