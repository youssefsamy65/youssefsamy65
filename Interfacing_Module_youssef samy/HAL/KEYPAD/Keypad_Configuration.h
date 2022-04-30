/*
 * Keypad_Configuration.h
 *
 * Created: 3/5/2022 5:46:05 PM
 *  Author: youssef samy 
 */ 


#ifndef KEYPAD_CONFIGURATION_H_
#define KEYPAD_CONFIGURATION_H_

#include "CPU_Configurations.h"

#define KEYPAD_PRT DIO_PORTD

#define KEYPAD_PIN_OUT0 DIO_PIN0
#define KEYPAD_PIN_OUT1 DIO_PIN1
#define KEYPAD_PIN_OUT2 DIO_PIN2
#define KEYPAD_PIN_OUT3 DIO_PIN3

#define KEYPAD_PIN_INP0 DIO_PIN4
#define KEYPAD_PIN_INP1 DIO_PIN5
#define KEYPAD_PIN_INP2 DIO_PIN6
#define KEYPAD_PIN_INP3 DIO_PIN7

#define KEYPAD_LOW  DIO_LOW
#define KEYPAD_HIGH DIO_HIGH

#define KEYPAD_INP  DIO_INPUT
#define KEYPAD_OUT  DIO_OUTPUT

#define KEYPAD_COL_STRT 0
#define KEYPAD_COL_END  3

#define KEYPAD_ROW_STRT 4
#define KEYPAD_ROW_END  7

#define KEYPAD_PRESSED  0

#endif /* KEYPAD_CONFIGURATION_H_ */