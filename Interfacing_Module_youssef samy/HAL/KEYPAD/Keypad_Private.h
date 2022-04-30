/*
 * Keypad_Private.h
 *
 * Created: 3/5/2022 5:46:16 PM
 *  Author: youssef samy 
 */ 


#ifndef KEYPAD_PRIVATE_H_
#define KEYPAD_PRIVATE_H_

#include "Keypad_Configuration.h"

void KEYPAD_Initialize(void);
uint8_t KEYPAD_Read(void);

#endif /* KEYPAD_PRIVATE_H_ */