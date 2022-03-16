/*
 * Relay_Private.h
 *
 * Created: 2/28/2022 8:07:37 PM
 *  Author: MOHAMED
 */ 


#ifndef Relay_PRIVATE_H_
#define Relay_PRIVATE_H_

#include "Relay_Configuration.h"
#include "DIO_Private.h"
void Relay_Initialize(void);
void Relay_On(void);
void Relay_Off(void);
void Relay_Toggle(void);

#endif /* Relay_PRIVATE_H_ */