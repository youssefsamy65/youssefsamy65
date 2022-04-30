/*
 * SEVSEG_Configuration.h
 *
 * Created: 2/26/2022 6:30:15 PM
 *  Author: youssef samy 
 */ 


#ifndef SEVSEG_CONFIGURATION_H_
#define SEVSEG_CONFIGURATION_H_

#include "CPU_Configurations.h"

#define SEVSEG PORTA

#define SEVSEG_DATA_PRT  DIO_PORTA
#define SEVSEG_CTRL_PRT  DIO_PORTB

#define SEVSEG_DATA_A           DIO_PIN4
#define SEVSEG_DATA_B           DIO_PIN5
#define SEVSEG_DATA_C           DIO_PIN6
#define SEVSEG_DATA_D           DIO_PIN7
		
#define SEVSEG_CTRL_EN1         DIO_PIN1
#define SEVSEG_CTRL_EN2         DIO_PIN2
#define SEVSEG_CTRL_DOT         DIO_PIN3

#define SEVSEG_OUTPUT    DIO_OUTPUT

#define SEVSEG_LOW       DIO_LOW
#define SEVSEG_HIGH      DIO_HIGH




#endif /* SEVSEG_CONFIGURATION_H_ */