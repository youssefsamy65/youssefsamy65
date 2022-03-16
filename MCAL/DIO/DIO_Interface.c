/*
* DIO_Interface.c
*
* Created: 2/28/2022 9:17:20 PM
*  Author: MOHAMED
*/
#include "DIO_Private.h"
void DIO_SetPinDirection(Port p0,Pin pi,Direction dr)
{
	switch(dr)
	{
		case DIO_Input:
		switch(p0)
		{
			case DIO_PORTA: CLR_BIT(DDRA,pi);break;
			case DIO_PORTB: CLR_BIT(DDRB,pi);break;
			case DIO_PORTC: CLR_BIT(DDRC,pi);break;
			case DIO_PORTD: CLR_BIT(DDRD,pi);break;
		}
		break;
		case DIO_Output:
		switch(p0)
		{
			case DIO_PORTA: SET_BIT(DDRA,pi);break;
			case DIO_PORTB:	SET_BIT(DDRB,pi);break;
			case DIO_PORTC:	SET_BIT(DDRC,pi);break;
			case DIO_PORTD:	SET_BIT(DDRD,pi);break;
		}
		break;
	}
}
void DIO_SetPinValue(Port p0,Pin pi,State st){
	switch(st)
	{
		case DIO_Low:
		switch(p0)
		{
			case DIO_PORTA: CLR_BIT(PORTA,pi);break;
			case DIO_PORTB: CLR_BIT(PORTB,pi);break;
			case DIO_PORTC: CLR_BIT(PORTC,pi);break;
			case DIO_PORTD: CLR_BIT(PORTD,pi);break;
		}
		break;
		case DIO_High:
		switch(p0)
		{
			case DIO_PORTA: SET_BIT(PORTA,pi);break;
			case DIO_PORTB:	SET_BIT(PORTB,pi);break;
			case DIO_PORTC:	SET_BIT(PORTC,pi);break;
			case DIO_PORTD:	SET_BIT(PORTD,pi);break;
		}
		break;
	}
}
void DIO_TogglePinValue(Port p0,Pin pi)
{
	switch(p0)
	{
		case DIO_PORTA: TGL_BIT(PORTA,pi);break;
		case DIO_PORTB:	TGL_BIT(PORTB,pi);break;
		case DIO_PORTC:	TGL_BIT(PORTC,pi);break;
		case DIO_PORTD:	TGL_BIT(PORTD,pi);break;
		break;
	}
}
uint8_t DIO_ReadPinValue(Port p0,Pin pi){
	uint8_t data=0;
	switch(p0){
		case DIO_PORTA: data=GET_BIT(PINA,pi);break;
		case DIO_PORTB:	data=GET_BIT(PINB,pi);break;
		case DIO_PORTC:	data=GET_BIT(PINC,pi);break;
		case DIO_PORTD:	data=GET_BIT(PIND,pi);break;
		break;
	}
	return data;
}
void DIO_SetPinPullup(Port p0,Pin pi)
{
	switch(p0)
	{
		case DIO_PORTA: CLR_BIT(PORTA,pi);break;
		case DIO_PORTB: CLR_BIT(PORTB,pi);break;
		case DIO_PORTC: CLR_BIT(PORTC,pi);break;
		case DIO_PORTD: CLR_BIT(PORTD,pi);break;
	}
}
void DIO_SetPortDirection(Port p0,Direction Di){
	switch(Di){
		case DIO_Input:
		switch(p0){
			case DIO_PORTA: DDRA=0x00;break;
			case DIO_PORTB: DDRB=0x00;break;
			case DIO_PORTC: DDRC=0x00;break;
			case DIO_PORTD: DDRD=0x00;break;
		}break;
		case DIO_Output:
		switch(p0){
			case DIO_PORTA: DDRA=0xFF;break;
			case DIO_PORTB: DDRB=0xFF;break;
			case DIO_PORTC: DDRC=0xFF;break;
			case DIO_PORTD: DDRD=0xFF;break;
		}break;
	}
}
void DIO_SetPortValue(Port p0,State st){
	switch(st){
		case DIO_Low:
		switch(p0){
			case DIO_PORTA: PORTA=0x00;break;
			case DIO_PORTB: PORTB=0x00;break;
			case DIO_PORTC: PORTC=0x00;break;
			case DIO_PORTD: PORTD=0x00;break;
		}break;
		case DIO_High:
		switch(p0){
			case DIO_PORTA: PORTA=0xFF;break;
			case DIO_PORTB: PORTB=0xFF;break;
			case DIO_PORTC: PORTC=0xFF;break;
			case DIO_PORTD: PORTD=0xFF;break;
		}break;
	}
}