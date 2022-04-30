/*
* UART_Configuration.h
*
* Created: 4/8/2022 2:17:52 PM
*  Author: youssef samy
*/


#ifndef UART_CONFIGURATION_H_
#define UART_CONFIGURATION_H_

#include "UART_Address.h"
#include "CPU_Configurations.h"

#define FRQ      160000
#define BaudRate 96
//UART mode 
typedef enum
{
	Asynchronous = 0,
	Synchronous = 1
}UART_Mode;
//UART Parity
typedef enum
{
	Disable = 0,
	Even = 1,
	Odd = 2
}UART_Parity;
//UART Stop Bits
typedef enum
{
	Bit_1 = 0,
	Bit_2 = 1
}UART_StopBits;
//UART Data Modes
typedef enum
{
	Bits_5 = 0,
	Bits_6 = 1,
	Bits_7 = 2,
	Bits_8 = 3,
	Bits_9 = 4
}UART_DataMode;

#endif /* UART_CONFIGURATION_H_ */