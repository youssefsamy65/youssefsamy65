/*
 * ADC_Private.h
 *
 * Created: 3/12/2022 6:07:19 PM
 *  Author: youssef samy 
 */ 


#ifndef ADC_PRIVATE_H_
#define ADC_PRIVATE_H_

#include "ADC_Configuration.h"

void ADC_Initialize(void);
uint16_t ADC_Read(ADC_Chanel adc);




#endif /* ADC_PRIVATE_H_ */