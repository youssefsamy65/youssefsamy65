/*
* Interfacing_Modules_NASR28.c
*
* Created: 2/28/2022 7:09:56 PM
* Author : MOHAMED
*/

#include "main.h"

int main(void)
{
	uint16_t read = 0;
	LCD_Initialize();
	LCD_Clear();
	ADC_Initialzie(AVCC, Pre_128);
	/* Replace with your application code */
	while(1)
	{
		_delay_ms(250);
		read = ADC_Read(ADC1);
		if(read != 0)
		{
			LCD_Clear();
			LCD_Write_Number((read * 5) / 1023);
			LCD_Write_String((uint8_t*)" Volts");
			read = 0;
		}
	}
	
}

