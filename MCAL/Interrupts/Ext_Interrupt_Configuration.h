/*
* Ext_Interrupt_Configuration.h
*
* Created: 3/14/2022 9:31:35 PM
*  Author: MOHAMED
*/


#ifndef EXT_INTERRUPT_CONFIGURATION_H_
#define EXT_INTERRUPT_CONFIGURATION_H_

#include "Ext_Interrupt_Address.h"
#include "Configuration.h"

#define Global_Interrupt_DS 0
#define Global_Interrupt_EN 1

typedef enum
{
	INT0_Interrupt = 0,
	INT1_Interrupt = 1,
	INT2_Interrupt = 2
}Ext_Interrupt;
typedef enum
{
	LOW_Signal = 0,
	HIGH_Signal = 1,
	Falling_Signal = 2,
	Rising_Signal = 3
}Ext_Interrupt_Sense;

#define Global_Interrupt_State Global_Interrupt_EN

#endif /* EXT_INTERRUPT_CONFIGURATION_H_ */