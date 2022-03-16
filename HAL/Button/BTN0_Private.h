/*
 * BTN0_Private.h
 *
 * Created: 3/5/2022 5:17:18 PM
 *  Author: karim
 */ 


#ifndef BTN0_PRIVATE_H_
#define BTN0_PRIVATE_H_

#include "BTN0_Configuration.h"

void BTN0_Initialize(void);
uint8_t BTN0_Read(void);
uint8_t BTN0_Read_method2(void);

#endif /* BTN0_PRIVATE_H_ */