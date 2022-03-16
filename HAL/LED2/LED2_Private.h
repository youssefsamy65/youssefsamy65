/*
 * LED2_Private.h
 *
 * Created: 2/28/2022 8:07:37 PM
 *  Author: MOHAMED
 */ 


#ifndef LED2_PRIVATE_H_
#define LED2_PRIVATE_H_

#include "LED2_Configuration.h"
#include "DIO_Private.h"
void LED2_Initialize(void);
void LED2_On(void);
void LED2_Off(void);
void LED2_Toggle(void);

#endif /* LED2_PRIVATE_H_ */