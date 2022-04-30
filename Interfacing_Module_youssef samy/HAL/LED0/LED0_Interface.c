/*
* LED0_Interface.c
*
* Created: 2/26/2022 2:26:58 PM
*  Author: youssef samy 
*/

#include "LED0_Private.h"


void LED0_Initialize(void)
{
	DIO_SetPinDirection(LED0_PRT, LED0, LED0_STATE);
}
void LED0_ON(void)
{
	DIO_SetPinValue(LED0_PRT, LED0, LED0_HIGH);
}
void LED0_OFF(void)
{
	DIO_SetPinValue(LED0_PRT, LED0, LED0_LOW);
}
void LED0_Toggle(void)
{
	DIO_TogglePinValue(LED0_PRT, LED0);
}