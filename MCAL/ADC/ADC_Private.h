/*
 * ADC_Private.h
 *
 * Created: 3/16/2022 9:58:10 PM
 *  Author: MOHAMED
 */ 


#ifndef ADC_PRIVATE_H_
#define ADC_PRIVATE_H_

#include "ADC_Configuration.h"

void ADC_Initialzie(ADC_Vref volt, ADC_PreScaler prescaler);
uint16_t ADC_Read(ADC_Channel channel);



#endif /* ADC_PRIVATE_H_ */