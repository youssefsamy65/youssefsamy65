/*
* LED0_Configuration.h
*
* Created: 2/19/2022 5:11:57 PM
*  Author: youssef samy 
*/


#ifndef RELAY_CONFIGURATION_H_
#define RELAY_CONFIGURATION_H_

#include "CPU_Configurations.h"

#define RELAY_PRT   DIO_PORTA
#define RELAY_STATE DIO_OUTPUT
	
#define RELAY_HIGH  DIO_HIGH
#define RELAY_LOW   DIO_LOW

#define RELAY       DIO_PIN2

#endif /* RELAY_CONFIGURATION_H_ */