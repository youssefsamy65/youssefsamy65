/*
 * LED0_Private.h
 *
 * Created: 2/28/2022 8:07:37 PM
 *  Author: MOHAMED
 */ 


#ifndef LED0_PRIVATE_H_
#define LED0_PRIVATE_H_

#include "LED0_Configuration.h"
#include "DIO_Private.h"
void LED0_Initialize(void);
void LED0_On(void);
void LED0_Off(void);
void LED0_Toggle(void);

#endif /* LED0_PRIVATE_H_ */