/*
 * SEVSEG_Interface.c
 *
 * Created: 2/26/2022 6:30:35 PM
 *  Author: youssef samy 
 */ 


#include "SEVSEG_Private.h"

void SEVSEG_Initialize(void)
{
	//Define direction of pins
	DIO_SetPinDirection(SEVSEG_DATA_PRT, SEVSEG_DATA_A, SEVSEG_OUTPUT);
	DIO_SetPinDirection(SEVSEG_DATA_PRT, SEVSEG_DATA_B, SEVSEG_OUTPUT);
	DIO_SetPinDirection(SEVSEG_DATA_PRT, SEVSEG_DATA_C, SEVSEG_OUTPUT);
	DIO_SetPinDirection(SEVSEG_DATA_PRT, SEVSEG_DATA_D, SEVSEG_OUTPUT);
	
	DIO_SetPinDirection(SEVSEG_CTRL_PRT, SEVSEG_CTRL_EN1, SEVSEG_OUTPUT);
	DIO_SetPinDirection(SEVSEG_CTRL_PRT, SEVSEG_CTRL_EN2, SEVSEG_OUTPUT);
	DIO_SetPinDirection(SEVSEG_CTRL_PRT, SEVSEG_CTRL_DOT, SEVSEG_OUTPUT);
}

void SEVSEG_Enable1(void)
{
	DIO_SetPinValue(SEVSEG_CTRL_PRT, SEVSEG_CTRL_EN1, SEVSEG_HIGH);
}
void SEVSEG_Disable1(void)
{
	DIO_SetPinValue(SEVSEG_CTRL_PRT, SEVSEG_CTRL_EN1, SEVSEG_LOW);
}

void SEVSEG_Enable2(void)
{
	DIO_SetPinValue(SEVSEG_CTRL_PRT, SEVSEG_CTRL_EN2, SEVSEG_HIGH);
}
void SEVSEG_Disable2(void)
{
	DIO_SetPinValue(SEVSEG_CTRL_PRT, SEVSEG_CTRL_EN2, SEVSEG_LOW);
}

void SEVSEG_DOT_Enable(void)
{
	DIO_SetPinValue(SEVSEG_CTRL_PRT, SEVSEG_CTRL_DOT, SEVSEG_HIGH);
}
void SEVSEG_DOT_Disable(void)
{
	DIO_SetPinValue(SEVSEG_CTRL_PRT, SEVSEG_CTRL_DOT, SEVSEG_HIGH);
}

void SEVSEG_Display(uint8_t number)
{
	uint8_t num1 = number%10;
	uint8_t num2 = number/10;
	SEVSEG = (num1 << 4);
	SEVSEG_Enable1();
	SEVSEG_Disable2();
	_delay_ms(10);
	SEVSEG = (num2 << 4);
	SEVSEG_Disable1();
	SEVSEG_Enable2();
	_delay_ms(10);
}