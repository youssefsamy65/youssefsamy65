/*
 * LED_Interface.c
 *
 * Created: 2/26/2022 3:24:36 PM
 *  Author: youssef samy 
 */ 

#include "LED_Private.h"



void LED_Initialize(LED_prt Port, LED Led, LED_Dir Direction)
{
	DIO_SetPinDirection(Port, Led, Direction);
}
void LED_State(LED_prt Port, LED Led, LED_Ste State)
{
	DIO_SetPinValue(Port, Led, State);
}
void LED_Toggle(LED_prt Port, LED Led)
{
	DIO_TogglePinValue(Port, Led);
}