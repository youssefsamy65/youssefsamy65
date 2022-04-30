/*
* WDT_Interface.c
*
* Created: 3/26/2022 3:15:30 PM
*  Author: youssef samy 
*/


#include "WDT_Private.h"



void WDT_Initialization(void)
{
	//Enable watchdog timer turn_off
	SET_BIT(WDTCR, WDTOE);
	//Enable watchdog timer peripheral
	SET_BIT(WDTCR, WDE);
}
void WDT_Start(WDT_Voltage volt, WDT_Prescaler_3V pre_3V, WDT_Prescaler_5V pre_5V)
{
	switch (volt)
	{
		case WDT_3V:
		switch (pre_3V)
		{
			case WDT_3V_17ms:
			CLR_BIT(WDTCR, WDP2);CLR_BIT(WDTCR, WDP1);CLR_BIT(WDTCR, WDP0);//0 0 0
			break;
			case WDT_3V_34ms:
			CLR_BIT(WDTCR, WDP2);CLR_BIT(WDTCR, WDP1);SET_BIT(WDTCR, WDP0);//0 0 1
			break;
			case WDT_3V_68ms:
			CLR_BIT(WDTCR, WDP2);SET_BIT(WDTCR, WDP1);CLR_BIT(WDTCR, WDP0);//0 1 0
			break;
			case WDT_3V_140ms:
			CLR_BIT(WDTCR, WDP2);SET_BIT(WDTCR, WDP1);SET_BIT(WDTCR, WDP0);//0 1 1
			break;
			case WDT_3V_270ms:
			SET_BIT(WDTCR, WDP2);CLR_BIT(WDTCR, WDP1);CLR_BIT(WDTCR, WDP0);//1 0 0
			break;
			case WDT_3V_550ms:
			SET_BIT(WDTCR, WDP2);CLR_BIT(WDTCR, WDP1);SET_BIT(WDTCR, WDP0);//1 0 1
			break;
			case WDT_3V_1100ms:
			SET_BIT(WDTCR, WDP2);SET_BIT(WDTCR, WDP1);CLR_BIT(WDTCR, WDP0);//1 1 0
			break;
			case WDT_3V_2200ms:
			SET_BIT(WDTCR, WDP2);SET_BIT(WDTCR, WDP1);SET_BIT(WDTCR, WDP0);//1 1 1
			break;
		}
		break;
		case WDT_5V:
		switch (pre_5V)
		{
			case WDT_5V_16ms:
			CLR_BIT(WDTCR, WDP2);CLR_BIT(WDTCR, WDP1);CLR_BIT(WDTCR, WDP0);//0 0 0
			break;
			case WDT_5V_32ms:
			CLR_BIT(WDTCR, WDP2);CLR_BIT(WDTCR, WDP1);SET_BIT(WDTCR, WDP0);//0 0 1
			break;
			case WDT_5V_65ms:
			CLR_BIT(WDTCR, WDP2);SET_BIT(WDTCR, WDP1);CLR_BIT(WDTCR, WDP0);//0 1 0
			break;
			case WDT_5V_130ms:
			CLR_BIT(WDTCR, WDP2);SET_BIT(WDTCR, WDP1);SET_BIT(WDTCR, WDP0);//0 1 1
			break;
			case WDT_5V_260ms:
			SET_BIT(WDTCR, WDP2);CLR_BIT(WDTCR, WDP1);CLR_BIT(WDTCR, WDP0);//1 0 0
			break;
			case WDT_5V_520ms:
			SET_BIT(WDTCR, WDP2);CLR_BIT(WDTCR, WDP1);SET_BIT(WDTCR, WDP0);//1 0 1
			break;
			case WDT_5V_1000ms:
			SET_BIT(WDTCR, WDP2);SET_BIT(WDTCR, WDP1);CLR_BIT(WDTCR, WDP0);//1 1 0
			break;
			case WDT_5V_2100ms:
			SET_BIT(WDTCR, WDP2);SET_BIT(WDTCR, WDP1);SET_BIT(WDTCR, WDP0);//1 1 1
			break;
		}
		break;
	}
}
void WDT_Timer_Refresh(void)
{
	//Watchdog Reset functionality
	asm("WDR");
}