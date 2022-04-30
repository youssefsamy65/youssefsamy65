/*
 * Interrupt_Configuration.h
 *
 * Created: 3/11/2022 5:43:06 PM
 *  Author: youssef samy 
 */ 


#ifndef INTERRUPT_CONFIGURATION_H_
#define INTERRUPT_CONFIGURATION_H_

#include "Interrupt_Address.h"
#include "CPU_Configurations.h"

#define GLOBAL_INTERRUPT_DISABLE    0
#define GLOBAL_INTERRUPT_ENABLE	    1

#define EXT_INT0 0
#define EXT_INT1 1
#define EXT_INT2 2

#define LOW_SIGNAL      0
#define HIGH_SIGNAL     1
#define FALLING_SIGNAL  2
#define RISING_SIGNAL   3

#define INTERRUPT_SENSE             LOW_SIGNAL
#define GLOBAL_INTERRUPT_STATUS     GLOBAL_INTERRUPT_ENABLE

#endif /* INTERRUPT_CONFIGURATION_H_ */