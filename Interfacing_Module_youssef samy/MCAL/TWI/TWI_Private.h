/*
 * TWI_Private.h
 *
 * Created: 4/15/2022 2:37:50 PM
 *  Author: youssef samy
 */ 


#ifndef TWI_PRIVATE_H_
#define TWI_PRIVATE_H_

#include "TWI_Configuration.h"
//Another option
void TWI_Initialize(TWI_mode mode, uint8_t slaveAddress);
void TWI_Transmit(uint8_t data, uint8_t addres);
uint8_t TWI_Receive(uint8_t addres);
// Define Mode of Operation
void TWI_Master_Initialize(void);
void TWI_SLave_Initialize(uint8_t slaveNumber);
/*Frame of I2C*/
//Start Condition Or Repeated Start
void TWI_Start_Condition(void);
void TWI_RepeatedStart_Condition(void);
//Slave Address + Operation 
void TWI_Slave_Write_Operation(uint8_t addres);
void TWI_Slave_Read_Operation(uint8_t addres);
//Data + Operation
void TWI_Trasmit_Byte(uint8_t data);
uint8_t TWI_Receive_Byte(void);
//Stop Condition
void TWI_Stop_Condition(void);

#endif /* TWI_PRIVATE_H_ */