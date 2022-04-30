/*
* LED0_Interface.c
*
* Created: 2/26/2022 2:26:58 PM
*  Author: youssef samy 
*/

#include "Buzzer_Private.h"

void Buzzer_Initialize(void)
{
	DIO_SetPinDirection(BUZZER_PRT, BUZZER, BUZZER_STATE);
}
void Buzzer_ON(void)
{
	DIO_SetPinValue(BUZZER_PRT, BUZZER, BUZZER_HIGH);
}
void Buzzer_OFF(void)
{
	DIO_SetPinValue(BUZZER_PRT, BUZZER, BUZZER_LOW);
}
void Buzzer_Toggle(void)
{
	DIO_TogglePinValue(BUZZER_PRT, BUZZER);
}