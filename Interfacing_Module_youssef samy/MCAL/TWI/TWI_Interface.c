/*
* TWI_Interface.c
*
* Created: 4/15/2022 2:37:59 PM
*  Author: youssef samy
*/

#include "TWI_Private.h"

// Define Mode of Operation
void TWI_Master_Initialize(void)
{
	TWBR = 0xC0;
	TWCR = (1<<TWEN);// Reinitialize flag + Enable TWI
	//TWI_Initialize(TWI_Master, 1);
}
void TWI_SLave_Initialize(uint8_t slaveNumber)
{
	TWAR = 0x00;
	TWAR = (slaveNumber << 1) | (0x01);
	TWCR = (1<<TWEA) | (1<<TWEN);// Reinitialize flag + Enable TWI
	//TWI_Initialize(TWI_SLave, 1);
}
/*Frame of I2C*/
//Start Condition Or Repeated Start
void TWI_Start_Condition(void)
{
	TWCR = (1<<TWINT) | (1<<TWSTA) | (1<<TWEN);// Reinitialize flag + Enable TWI
	while (GET_BIT(TWCR, TWINT) != 1);//Wait until job finish
	while((TWSR & 0xF8) != START_ACK);//Wait until receive start acknowledgment
}
void TWI_RepeatedStart_Condition(void)
{
	TWCR = (1<<TWINT) | (1<<TWSTA) | (1<<TWEN);// Reinitialize flag + Enable TWI
	while (GET_BIT(TWCR, TWINT) != 1);//Wait until job finish
	while((TWSR & 0xF8) != START_ACK);//Wait until receive start acknowledgment
}
//Slave Address + Operation
void TWI_Slave_Write_Operation(uint8_t addres)
{
	TWDR = (1<< addres) | (0x00);
	TWCR = (1<<TWINT) | (1<<TWEN);// Reinitialize flag + Enable TWI
	while (GET_BIT(TWCR, TWINT) != 1);//Wait until job finish
	while((TWSR & 0xF8) != SLAVE_ADD_RCVD_WR_REQ);//Wait until receive start acknowledgment
}
void TWI_Slave_Read_Operation(uint8_t addres)
{
	TWDR = (1<< addres) | (0x01);
	TWCR = (1<<TWINT) | (1<<TWEN);// Reinitialize flag + Enable TWI
	while (GET_BIT(TWCR, TWINT) != 1);//Wait until job finish
	while((TWSR & 0xF8) != SLAVE_ADD_RCVD_RD_REQ);//Wait until receive start acknowledgment
}
//Data + Operation
void TWI_Trasmit_Byte(uint8_t data)
{
	TWDR = data;
	TWCR = (1<<TWINT) | (1<<TWEN);// Reinitialize flag + Enable TWI
	while (GET_BIT(TWCR, TWINT) != 1);//Wait until job finish
	while((TWSR & 0xF8) != WR_BYTE_ACK);//Wait until receive write acknowledgment
}
uint8_t TWI_Receive_Byte(void)
{
	TWCR = (1<<TWINT) | (1<<TWEN);// Reinitialize flag + Enable TWI
	while (GET_BIT(TWCR, TWINT) != 1);//Wait until job finish
	while((TWSR & 0xF8) != RD_BYTE_ACK);//Wait until receive read acknowledgment
	return TWDR;
}
//Stop Condition
void TWI_Stop_Condition(void)
{
	TWCR |= (1<<TWINT) | (1<<TWSTO) | (1<<TWEN);// Reinitialize flag + Enable TWI
	while (GET_BIT(TWCR, TWINT) != 1);//Wait until job finish
	while((TWSR & 0xF8) != STOP_ACK);//Wait until receive start acknowledgment
}
/*Another way of witting I2C functions*/
//Full operation in one function
void TWI_Initialize(TWI_mode mode, uint8_t slaveAddress)
{
	switch (mode)
	{
		case TWI_SLave:
		TWAR = 0x00;
		TWAR = (slaveAddress << 1) | (0x01);
		TWCR = (1<<TWEA) | (1<<TWEN);
		break;
		case TWI_Master:
		TWBR = 0xC0;
		TWCR = (1<<TWEN);
		break;
	}
}
void TWI_Transmit(uint8_t data, uint8_t addres, uint8_t operation)
{
	TWCR = (1<<TWINT) | (1<<TWSTA) | (1<<TWEN);// Reinitialize flag + Enable TWI
	while (GET_BIT(TWCR, TWINT) != 1);//Wait until job finish
	while((TWSR & 0xF8) != START_ACK);//Wait until receive start acknowledgment
	
	if(operation == 0)//Slave Address + Write
	{
		TWDR = (1<< addres) | (0x00);
		TWCR = (1<<TWINT) | (1<<TWEN);// Reinitialize flag + Enable TWI
		while (GET_BIT(TWCR, TWINT) != 1);//Wait until job finish
		while((TWSR & 0xF8) != SLAVE_ADD_RCVD_WR_REQ);//Wait until receive start acknowledgment
	}
	else if(operation == 1)// Slave Address + Read
	{
		TWDR = (1<< addres) | (0x01);
		TWCR = (1<<TWINT) | (1<<TWEN);// Reinitialize flag + Enable TWI
		while (GET_BIT(TWCR, TWINT) != 1);//Wait until job finish
		while((TWSR & 0xF8) != SLAVE_ADD_RCVD_RD_REQ);//Wait until receive start acknowledgment
	}
	
	TWDR = data;
	TWCR = (1<<TWINT) | (1<<TWEN);// Reinitialize flag + Enable TWI
	while (GET_BIT(TWCR, TWINT) != 1);//Wait until job finish
	while((TWSR & 0xF8) != WR_BYTE_ACK);//Wait until receive write acknowledgment
	
	TWCR |= (1<<TWINT) | (1<<TWSTO) | (1<<TWEN);// Reinitialize flag + Enable TWI
	while (GET_BIT(TWCR, TWINT) != 1);//Wait until job finish
	while((TWSR & 0xF8) != STOP_ACK);//Wait until receive start acknowledgment
}
uint8_t TWI_Receive(uint8_t addres)
{
	uint8_t ownAddress = 0;
	ownAddress = TWAR >> 1;
	if(ownAddress == addres)
	{
		TWCR = (1<<TWINT) | (1<<TWEN);// Reinitialize flag + Enable TWI
		while (GET_BIT(TWCR, TWINT) != 1);//Wait until job finish
		while((TWSR & 0xF8) != RD_BYTE_ACK);//Wait until receive read acknowledgment
		return TWDR;
	}
}