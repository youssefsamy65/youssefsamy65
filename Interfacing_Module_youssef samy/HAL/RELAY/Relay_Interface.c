/*
* LED0_Interface.c
*
* Created: 2/26/2022 2:26:58 PM
*  Author: youssef samy 
*/

#include "Relay_Private.h"


void Relay_Initialize(void)
{
	DIO_SetPinDirection(RELAY_PRT, RELAY, RELAY_STATE);
}
void Relay_ON(void)
{
	DIO_SetPinValue(RELAY_PRT, RELAY, RELAY_HIGH);
}
void Relay_OFF(void)
{
	DIO_SetPinValue(RELAY_PRT, RELAY, RELAY_LOW);
}
void Relay_Toggle(void)
{
	DIO_TogglePinValue(RELAY_PRT, RELAY);
}