/*
 * LED1_Interface.c
 *
 * Created: 2/28/2022 8:07:50 PM
 *  Author: MOHAMED
 */ 

#include "LED1_Private.h"

void LED1_Initialize(void)
{
	//Define Direction of pins
	DIO_SetPinDirection(LED1_PRT, LED1, LED1_Output);
}
void LED1_On(void)
{
	//LED On
	DIO_SetPinValue(LED1_PRT, LED1, LED1_High);
}
void LED1_Off(void)
{
	//LED Off
	DIO_SetPinValue(LED1_PRT, LED1, LED1_Low);
}
void LED1_Toggle(void)
{
	//LED Toggle
	DIO_TogglePinValue(LED1_PRT, LED1);
}