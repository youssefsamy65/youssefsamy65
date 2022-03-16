/*
 * Keypad_Configuration.h
 *
 * Created: 3/5/2022 5:46:05 PM
 *  Author: karim
 */ 


#ifndef KEYPAD_CONFIGURATION_H_
#define KEYPAD_CONFIGURATION_H_

#include "Configuration.h"

#define KEYPAD_PRT DIO_PORTC

#define KEYPAD_PIN_INP0 DIO_PIN0
#define KEYPAD_PIN_INP1 DIO_PIN1
#define KEYPAD_PIN_INP2 DIO_PIN2
#define KEYPAD_PIN_INP3 DIO_PIN3

#define KEYPAD_PIN_OUT0 DIO_PIN4
#define KEYPAD_PIN_OUT1 DIO_PIN5
#define KEYPAD_PIN_OUT2 DIO_PIN6
#define KEYPAD_PIN_OUT3 DIO_PIN7

#define KEYPAD_LOW  DIO_Low
#define KEYPAD_HIGH DIO_High

#define KEYPAD_INP  DIO_Input
#define KEYPAD_OUT  DIO_Output

#define KEYPAD_COL_STRT 4
#define KEYPAD_COL_END  7

#define KEYPAD_ROW_STRT 0
#define KEYPAD_ROW_END  3

#define KEYPAD_PRESSED  0

#endif /* KEYPAD_CONFIGURATION_H_ */