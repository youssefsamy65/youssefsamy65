/*
* LED0_Interface.c
*
* Created: 2/26/2022 2:26:58 PM
*  Author: youssef samy 
*/

#include "LED1_Private.h"


void LED1_Initialize(void)
{
	DIO_SetPinDirection(LED1_PRT, LED1, LED1_STATE);
}
void LED1_ON(void)
{
	DIO_SetPinValue(LED1_PRT, LED1, LED1_HIGH);
}
void LED1_OFF(void)
{
	DIO_SetPinValue(LED1_PRT, LED1, LED1_LOW);
}
void LED1_Toggle(void)
{
	DIO_TogglePinValue(LED1_PRT, LED1);
}