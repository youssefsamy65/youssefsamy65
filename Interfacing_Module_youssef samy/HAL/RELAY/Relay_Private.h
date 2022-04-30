/*
 * LED0_Private.h
 *
 * Created: 2/26/2022 2:27:14 PM
 *  Author: youssef samy 
 */ 


#ifndef RELAY_PRIVATE_H_
#define RELAY_PRIVATE_H_


#include "Relay_Configuration.h"

void Relay_Initialize(void);
void Relay_ON(void);
void Relay_OFF(void);
void Relay_Toggle(void);

#endif /* LED0_PRIVATE_H_ */