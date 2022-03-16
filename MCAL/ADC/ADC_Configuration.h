/*
* ADC_Configuration.h
*
* Created: 3/16/2022 9:57:50 PM
*  Author: MOHAMED
*/


#ifndef ADC_CONFIGURATION_H_
#define ADC_CONFIGURATION_H_

#include "ADC_Address.h"
#include "Configuration.h"
//Voltage Reference
typedef enum
{
	AREF = 0,
	AVCC = 1,
	Internal = 2
}ADC_Vref;
//ADC channel
typedef enum
{
	ADC0 = 0,
	ADC1 = 1,
	ADC2 = 2,
	ADC3 = 3,
	ADC4 = 4,
	ADC5 = 5,
	ADC6 = 6,
	ADC7 = 7
}ADC_Channel;
//Prescaler
typedef enum
{
	Pre_2 = 0,
	Pre_4 = 1,
	Pre_8 = 2,
	Pre_16 = 3,
	Pre_32 = 4,
	Pre_64 = 5,
	Pre_128 = 6
}ADC_PreScaler;


#endif /* ADC_CONFIGURATION_H_ */