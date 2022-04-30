/*
* BTN0_Configuration.h
*
* Created: 3/5/2022 5:17:03 PM
*  Author:youssef samy 
*/


#ifndef BTN0_CONFIGURATION_H_
#define BTN0_CONFIGURATION_H_

#include "CPU_Configurations.h"

#define BTN0_PRT   DIO_PORTB
#define BTN0       DIO_PIN0
#define BTN0_LOW   DIO_LOW
#define BTN0_HIGH  DIO_HIGH
#define BTN0_INP   DIO_INPUT

typedef enum
{
	BTN0_NPRESSED = 0,
	BTN0_PRESSED = 1
}BTN0_State;

#endif /* BTN0_CONFIGURATION_H_ */