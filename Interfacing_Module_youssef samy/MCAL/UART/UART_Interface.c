/*
* UART_Interface.c
*
* Created: 4/8/2022 2:18:15 PM
*  Author: youssef samy
*/


#include "UART_Private.h"

/*
	switch (mode)
	{
		case Asynchronous:
		break;
		case Synchronous:
		break;
	}
	switch (parity)
	{
		case Disable:
		CLR_BIT(UCSRC, UPM1);CLR_BIT(UCSRC, UPM0);
		break;
		case Even:
		SET_BIT(UCSRC, UPM1);CLR_BIT(UCSRC, UPM0);
		break;
		case Odd:
		SET_BIT(UCSRC, UPM1);SET_BIT(UCSRC, UPM0);
		break;
	}
	switch (stop)
	{
		case Bit_1:
		break;
		case Bit_2:
		break;
	}
	switch (data)
	{
		case Bits_5:
		break;
		case Bits_6:
		break;
		case Bits_7:
		break;
		case Bits_8:
		break;
		case Bits_9:
		break;
	}
*/

void UART_Initialize(UART_Mode mode, UART_Parity parity, UART_StopBits stop, UART_DataMode data)
{
	uint16_t UBRR_Val = 0;	
	DDRD &=~(1<<PD0);//CLR_BIT(DDRD, PD0);//Define direction for RX pin as input	
	DDRD |= (1<<PD1);//SET_BIT(DDRD, PD1);//Define direction for TX pin as output DDRD |= 0x02;//0000 0010	
	UCSRB |= (1<<RXEN) | (1<<TXEN);//Enable receive, transmit //USCRB = 0x18;
	UCSRC |= (1<<URSEL) | (1 << UCSZ1) | (1 << UCSZ0);//Enable UCSRC, Choose 8 bit mode //UCSRC = 0x86;
	UBRR_Val = ((FRQ) / (16 * BaudRate)) - 1;//Calculate Baud Rate register value
	UBRRL = UBRR_Val;
	UBRRH = UBRR_Val >> 8;
}
void UART_Transmit(uint8_t dataTransmit)
{
	UDR = dataTransmit;
	while(GET_BIT(UCSRA, TXC) != 1);
}
uint8_t UART_Received(void)
{
	uint8_t dataReceived = 0;
	while(GET_BIT(UCSRA, RXC) != 1);
	dataReceived = UDR;
	return dataReceived;
}