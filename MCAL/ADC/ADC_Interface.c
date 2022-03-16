/*
* ADC_Interface.c
*
* Created: 3/16/2022 9:58:20 PM
*  Author: MOHAMED
*/

#include "ADC_Private.h"


void ADC_Initialzie(ADC_Vref volt, ADC_PreScaler prescaler)
{
	switch (volt)
	{
		case AREF:
		//set bit for select this voltage source
		break;
		case AVCC:
		break;
		case Internal:
		break;
	}
	switch(prescaler)
	{
		case Pre_2:
		//set bit for select prescaler
		break;
		case Pre_4:
		break;
		case Pre_8:
		break;
		case Pre_16:
		break;
		case Pre_32:
		break;
		case Pre_64:
		break;
		case Pre_128:
		break;
	}
	ADMUX = 0x40;  //0b 1000 0000
	/*
	ADC Enable 1-Bit
	ADC start conversion 1-Bit
	ADC Auto trigger 1-Bit
	ADC flag 1-Bit
	ADC interrupt 1-Bit
	ADC Prescaler 3-Bits
	*/
	ADCSRA = 0xA7; //0b 1010 0111
}
uint16_t ADC_Read(ADC_Channel channel)
{
	uint16_t read = 0;
	switch(channel)
	{
		case ADC0: ADMUX = 0x40; break;
		case ADC1: ADMUX = 0x41; break;
		case ADC2: ADMUX = 0x42; break;
		case ADC3: ADMUX = 0x43; break;
		case ADC4: ADMUX = 0x44; break;
		case ADC5: ADMUX = 0x45; break;
		case ADC6: ADMUX = 0x46; break;
		case ADC7: ADMUX = 0x47; break;
	}
	SET_BIT(ADCSRA, ADSC);//Start conxersion bit (SOC)
	while (GET_BIT(ADCSRA, ADIF) == 1);//Wait until conversion finished (EOC)
	read = ADC_Value;
	return read;
}