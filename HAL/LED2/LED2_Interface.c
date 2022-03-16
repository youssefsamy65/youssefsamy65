/*
 * LED2_Interface.c
 *
 * Created: 2/28/2022 8:07:50 PM
 *  Author: MOHAMED
 */ 

#include "LED2_Private.h"

void LED2_Initialize(void)
{
	//Define Direction of pins
	DIO_SetPinDirection(LED2_PRT, LED2, LED2_Output);
}
void LED2_On(void)
{
	//LED On
	DIO_SetPinValue(LED2_PRT, LED2, LED2_High);
}
void LED2_Off(void)
{
	//LED Off
	DIO_SetPinValue(LED2_PRT, LED2, LED2_Low);
}
void LED2_Toggle(void)
{
	//LED Toggle
	DIO_TogglePinValue(LED2_PRT, LED2);
}