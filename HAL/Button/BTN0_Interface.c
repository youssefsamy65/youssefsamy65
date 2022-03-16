/*
* BTN0_Interface.c
*
* Created: 3/5/2022 5:17:29 PM
*  Author: karim
*/

#include "BTN0_Private.h"

void BTN0_Initialize(void)
{
	DIO_SetPinDirection(BTN0_PRT, BTN0, BTN0_INP);// Initialize pin as input
	DIO_SetPinPullup(BTN0_PRT, BTN0);//Activate internal pull up resistor
}
uint8_t BTN0_Read(void)
{
	uint8_t BTN = BTN0_NPRESSED;//Define button not pressed
	uint8_t Val = 1;//Reading of button
	Val = DIO_ReadPinValue(BTN0_PRT, BTN0);//Read button value
	_delay_ms(10);//Neglect noise
	while(BTN == BTN0_PRESSED)//Wait high to low pulse
	{
		BTN = DIO_ReadPinValue(BTN0_PRT, BTN0);
	}
	return Val;
}
uint8_t BTN0_Read_method2(void)
{
	uint8_t read = 1;
	_delay_ms(10);//Neglect noise
	read = DIO_ReadPinValue(BTN0_PRT, BTN0);//Read pin value
	return read;
}
