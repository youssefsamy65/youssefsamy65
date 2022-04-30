/*
 * SPI_Private.h
 *
 * Created: 4/8/2022 5:06:00 PM
 *  Author: youssef samy 
 */ 


#ifndef SPI_PRIVATE_H_
#define SPI_PRIVATE_H_

#include "SPI_Configuration.h"

void SPI_Master_Initialize(void);
void SPI_SLave_Initialize(void);
void SPI_Transmit(uint8_t dataTransmit);
uint8_t SPI_Receive(void);
uint8_t SPI_TranCeive(uint8_t data);
void SPI_SlaveSelect(uint8_t slave);


#endif /* SPI_PRIVATE_H_ */