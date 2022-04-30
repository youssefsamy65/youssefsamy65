/*
 * SEVSEG_Private.h
 *
 * Created: 2/26/2022 6:30:23 PM
 *  Author: youssef samy 
 */ 


#ifndef SEVSEG_PRIVATE_H_
#define SEVSEG_PRIVATE_H_

#include "SEVSEG_Configuration.h"

void SEVSEG_Initialize(void);

void SEVSEG_Enable1(void);
void SEVSEG_Disable1(void);

void SEVSEG_Enable2(void);
void SEVSEG_Disable2(void);

void SEVSEG_DOT_Enable(void);
void SEVSEG_DOT_Disable(void);

void SEVSEG_Display(uint8_t number);


#endif /* SEVSEG_PRIVATE_H_ */