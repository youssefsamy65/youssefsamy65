/*
* Ext_Interrupt_Interface.c
*
* Created: 3/14/2022 9:32:14 PM
*  Author: MOHAMED
*/

#include "Ext_Interrupt_Private.h"


void Ext_Interrupt_Initialize(Ext_Interrupt ext_int, Ext_Interrupt_Sense sense)
{
	#if Global_Interrupt_State == Global_Interrupt_EN
	SET_BIT(SREG, 7);
	#elif Global_Interrupt_State == Global_Interrupt_DS
	CLR_BIT(SREG, 7);
	#endif

	switch (ext_int)
	{
		case INT0_Interrupt:
		CLR_BIT(DDRD, 2);//Define pin as input		
		switch (sense)//Choose sense for interrupt trigger
		{
			case LOW_Signal:
			CLR_BIT(MCUCR, ISC01);CLR_BIT(MCUCR, ISC00);
			break;
			case HIGH_Signal:
			CLR_BIT(MCUCR, ISC01);SET_BIT(MCUCR, ISC00);
			break;
			case Falling_Signal:
			SET_BIT(MCUCR, ISC01);CLR_BIT(MCUCR, ISC00);
			break;
			case Rising_Signal:
			SET_BIT(MCUCR, ISC01);SET_BIT(MCUCR, ISC00);
			break;
		}
		SET_BIT(GICR, INT0);//Enable door room (peripheral interrupt)
		break;
		case INT1_Interrupt:
		CLR_BIT(DDRD, 3);		
		switch (sense)
		{
			case LOW_Signal:
			CLR_BIT(MCUCR, ISC11);CLR_BIT(MCUCR, ISC10);
			break;
			case HIGH_Signal:
			CLR_BIT(MCUCR, ISC11);SET_BIT(MCUCR, ISC10);
			break;
			case Falling_Signal:
			SET_BIT(MCUCR, ISC11);CLR_BIT(MCUCR, ISC10);
			break;
			case Rising_Signal:
			SET_BIT(MCUCR, ISC11);SET_BIT(MCUCR, ISC10);
			break;
		}
		SET_BIT(GICR, INT1);
		break;
		case INT2_Interrupt:
		SET_BIT(GICR, INT2);
		break;
	}
}