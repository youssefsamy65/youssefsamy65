/*
 * Relay_Interface.c
 *
 * Created: 2/28/2022 8:07:50 PM
 *  Author: MOHAMED
 */ 

#include "Relay_Private.h"

void Relay_Initialize(void)
{
	//Define Direction of pins
	DIO_SetPinDirection(Relay_PRT, Relay, Relay_Output);
}
void Relay_On(void)
{
	//LED On
	DIO_SetPinValue(Relay_PRT, Relay, Relay_High);
}
void Relay_Off(void)
{
	//LED Off
	DIO_SetPinValue(Relay_PRT, Relay, Relay_Low);
}
void Relay_Toggle(void)
{
	//LED Toggle
	DIO_TogglePinValue(Relay_PRT, Relay);
}