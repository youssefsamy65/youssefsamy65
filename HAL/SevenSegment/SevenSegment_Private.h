/*
 * LED0_Private.h
 *
 * Created: 2/28/2022 8:07:37 PM
 *  Author: MOHAMED
 */ 


#ifndef SEVENSEGMENT_PRIVATE_H_
#define SEVENSEGMENT_PRIVATE_H_

#include "SevenSegment_Configuration.h"
#include "DIO_Private.h"

void Sevseg_Intialization(void);
void Sevseg_Enable1(void);
void Sevseg_Enable2(void);
void Sevseg_DecimaPoint_Enable(void);
void Sevseg_Disable1(void);
void Sevseg_Disable2(void);
void Sevseg_DecimaPoint_Disable(void);
void Sevseg_Display(uint8_t number);

#endif /* LED0_PRIVATE_H_ */