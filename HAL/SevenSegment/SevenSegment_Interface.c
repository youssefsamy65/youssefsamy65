
/*
 * LED0_Interface.c
 *
 * Created: 2/28/2022 8:07:50 PM
 *  Author: MOHAMED
 */ 

#include "SevenSegment_Private.h"

void Sevseg_Intialization(void){
	DIO_SetPinDirection(Sevseg_ctrl_prt,Sevseg_ctrl_EN1,Sevseg_Output);
	DIO_SetPinDirection(Sevseg_ctrl_prt,Sevseg_ctrl_EN2,Sevseg_Output);
	DIO_SetPinDirection(Sevseg_ctrl_prt,Sevseg_ctrl_DP,Sevseg_Output);
	
	DIO_SetPinDirection(Sevseg_data_prt,Sevseg_data_A,Sevseg_Output);
	DIO_SetPinDirection(Sevseg_data_prt,Sevseg_data_B,Sevseg_Output);
	DIO_SetPinDirection(Sevseg_data_prt,Sevseg_data_C,Sevseg_Output);
	DIO_SetPinDirection(Sevseg_data_prt,Sevseg_data_D,Sevseg_Output);
}
void Sevseg_Enable1(void){
	DIO_SetPinValue(Sevseg_ctrl_prt,Sevseg_ctrl_EN1,Sevseg_High);
}
void Sevseg_Enable2(void){
	DIO_SetPinValue(Sevseg_ctrl_prt,Sevseg_ctrl_EN2,Sevseg_High);
}
void Sevseg_DecimaPoint_Enable(void){
	DIO_SetPinValue(Sevseg_ctrl_prt,Sevseg_ctrl_DP,Sevseg_High);
}
void Sevseg_Disable1(void){
	DIO_SetPinValue(Sevseg_ctrl_prt,Sevseg_ctrl_EN1,Sevseg_Low);
}
void Sevseg_Disable2(void){
	DIO_SetPinValue(Sevseg_ctrl_prt,Sevseg_ctrl_EN2,Sevseg_Low);
}
void Sevseg_DecimaPoint_Disable(void){
	DIO_SetPinValue(Sevseg_ctrl_prt,Sevseg_ctrl_DP,Sevseg_Low);
}
void Sevseg_Display(uint8_t number){
	uint8_t num1=number%10;
	uint8_t num2=number/10;
	PORTA=(num1<<4) | (PORTA & 0x0F);
	Sevseg_Enable1();
	Sevseg_Disable2();
	_delay_ms(10);
	PORTA=(num2<<4) | (PORTA & 0x0F);
	Sevseg_Enable2();
	Sevseg_Disable1();
	_delay_ms(10);
} 