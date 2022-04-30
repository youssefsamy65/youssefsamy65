/*
* SPI_Interface.c
*
* Created: 4/8/2022 5:06:10 PM
*  Author: youssef samy 
*/


#include "SPI_Private.h"

void SPI_Master_Initialize(void)
{
	//Define directions of pins for master
	SET_BIT(DDRB, 5);//MOSI pins
	CLR_BIT(DDRB, 6);//MISO pins
	SET_BIT(DDRB, 7);//SCK pins
	SET_BIT(DDRB, 4);//SS pins
	//One Line
	SPCR = 0x53;
}
void SPI_SLave_Initialize(void)
{
	//Define direction of pins for slave
	CLR_BIT(DDRB, MOSI);//MOSI pins
	SET_BIT(DDRB, MISO);//MISO pins
	CLR_BIT(DDRB, SCK);//SCK pins
	CLR_BIT(DDRB, SS);//SS pins
	//One Line
	SPCR = 0x43;
	
}
void SPI_Transmit(uint8_t dataTransmit)
{
	//Two Lines
	SPDR = dataTransmit;
	while (GET_BIT(SPSR, SPIF) != 1);
}
uint8_t SPI_Receive(void)
{
	//Two Lines
	while (GET_BIT(SPSR, SPIF) != 1);
	return SPDR;
}
uint8_t SPI_TranCeive(uint8_t data)
{
	SPDR = data;
	while (GET_BIT(SPSR, SPIF) != 1);
	return SPDR;
}
void SPI_SlaveSelect(uint8_t slave)
{
	//Six Lines
	switch (slave)
	{
		case Slave0:
		PORTB |= 0x1F;
		PORTB &=~(1<<SS);
		break;
		case Slave1:
		PORTB |= 0x1F;
		PORTB &=~(1<<SS);
		break;
		case Slave2:
		PORTB |= 0x1F;
		PORTB &=~(1<<SS);
		break;
		case Slave3:
		PORTB |= 0x1F;
		PORTB &=~(1<<SS);
		break;
		case Slave4:
		PORTB |= 0x1F;
		PORTB &=~(1<<SS);
		break;
	}
}
