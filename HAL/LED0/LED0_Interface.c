
/*
 * LED0_Interface.c
 *
 * Created: 2/28/2022 8:07:50 PM
 *  Author: MOHAMED
 */ 

#include "LED0_Private.h"

void LED0_Initialize(void)
{
	//Define Direction of pins
	DIO_SetPinDirection(LED0_PRT, LED0, LED0_Output);
}
void LED0_On(void)
{
	//LED On
	DIO_SetPinValue(LED0_PRT, LED0, LED0_High);
}
void LED0_Off(void)
{
	//LED Off
	DIO_SetPinValue(LED0_PRT, LED0, LED0_Low);
}
void LED0_Toggle(void)
{
	//LED Toggle
	DIO_TogglePinValue(LED0_PRT, LED0);
}