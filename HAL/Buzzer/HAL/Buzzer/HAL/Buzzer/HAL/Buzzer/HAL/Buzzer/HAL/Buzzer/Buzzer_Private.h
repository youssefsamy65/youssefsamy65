/*
 * Buzzer_Private.h
 *
 * Created: 2/28/2022 8:07:37 PM
 *  Author: MOHAMED
 */ 


#ifndef Buzzer_PRIVATE_H_
#define Buzzer_PRIVATE_H_

#include "Buzzer_Configuration.h"
#include "DIO_Private.h"
void Buzzer_Initialize(void);
void Buzzer_On(void);
void Buzzer_Off(void);
void Buzzer_Toggle(void);

#endif /* Buzzer_PRIVATE_H_ */