/*
* LED0_Interface.c
*
* Created: 2/26/2022 2:26:58 PM
*  Author: youssef samy 
*/

#include "LED2_Private.h"


void LED2_Initialize(void)
{
	DIO_SetPinDirection(LED2_PRT, LED2, LED2_STATE);
}
void LED2_ON(void)
{
	DIO_SetPinValue(LED2_PRT, LED2, LED2_HIGH);
}
void LED2_OFF(void)
{
	DIO_SetPinValue(LED2_PRT, LED2, LED2_LOW);
}
void LED2_Toggle(void)
{
	DIO_TogglePinValue(LED2_PRT, LED2);
}