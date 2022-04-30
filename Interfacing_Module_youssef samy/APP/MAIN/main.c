/*
* Interfacing_Module_D26.c
*
* Created: 2/19/2022 2:50:16 PM
* Author : youssef samy
*/

#include "main.h"


extern uint8_t Initial_Value;
extern uint32_t Number_OVF;
extern uint32_t Number_CTC;

int main(void)
{
	
	/* Replace with your application code */
	while (1)
	{	
		
	}
}

ISR(INT0_vect)
{
	LED0_Toggle();
}
ISR(INT1_vect)
{
	LED1_Toggle();
}
ISR(TIMER0_OVF_vect)
{
	static uint8_t cnt = 0;
	if(cnt == Number_OVF)
	{
		//WDT_Timer_Refresh();
		LED0_Toggle();
		TCNT0 = Initial_Value;
		cnt = 0;
	}
	cnt++;
}
ISR(TIMER0_COMP_vect)
{
	static uint8_t cntr = 0;
	if(cntr == Number_CTC)
	{
		LED0_Toggle();
		cntr = 0;
	}
	cntr++;
}