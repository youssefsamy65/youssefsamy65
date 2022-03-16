/*
 * LED1_Private.h
 *
 * Created: 2/28/2022 8:07:37 PM
 *  Author: MOHAMED
 */ 


#ifndef LED1_PRIVATE_H_
#define LED1_PRIVATE_H_

#include "LED1_Configuration.h"
#include "DIO_Private.h"
void LED1_Initialize(void);
void LED1_On(void);
void LED1_Off(void);
void LED1_Toggle(void);

#endif /* LED1_PRIVATE_H_ */