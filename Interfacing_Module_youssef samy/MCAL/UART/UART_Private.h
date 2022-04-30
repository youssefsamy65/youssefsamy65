/*
 * UART_Private.h
 *
 * Created: 4/8/2022 2:18:02 PM
 *  Author: youssef samy
 */ 


#ifndef UART_PRIVATE_H_
#define UART_PRIVATE_H_

#include "UART_Configuration.h"


void UART_Initialize(UART_Mode mode, UART_Parity parity, UART_StopBits stop, UART_DataMode data);
void UART_Transmit(uint8_t dataTransmit);
uint8_t UART_Received(void);



#endif /* UART_PRIVATE_H_ */