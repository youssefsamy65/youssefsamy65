/*
 * Buzzer_Interface.c
 *
 * Created: 2/28/2022 8:07:50 PM
 *  Author: MOHAMED
 */ 

#include "Buzzer_Private.h"

void Buzzer_Initialize(void)
{
	//Define Direction of pins
	DIO_SetPinDirection(Buzzer_PRT, Buzzer, Buzzer_Output);
}
void Buzzer_On(void)
{
	//LED On
	DIO_SetPinValue(Buzzer_PRT, Buzzer, Buzzer_High);
}
void Buzzer_Off(void)
{
	//LED Off
	DIO_SetPinValue(Buzzer_PRT, Buzzer, Buzzer_Low);
}
void Buzzer_Toggle(void)
{
	//LED Toggle
	DIO_TogglePinValue(Buzzer_PRT, Buzzer);
}