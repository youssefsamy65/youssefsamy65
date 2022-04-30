/*
* Servo_Interface.c
*
* Created: 3/26/2022 6:05:18 PM
*  Author: youssef samy 
*/

#include "Servo_Private.h"


void ServoMotor_Initialize(void)
{
	//Define Direction for OC1A pin as output
	SET_BIT(DDRD, PD5);
	//Choose mode from timer1 modes
	SET_BIT(TCCR1B, WGM13);SET_BIT(TCCR1B, WGM12);SET_BIT(TCCR1A, WGM11);CLR_BIT(TCCR1A, WGM10);
	//Choose non-inverting mode
	SET_BIT(TCCR1A, COM1A1);CLR_BIT(TCCR1A, COM1A0);
	//Choose Prescaler
	SET_BIT(TCCR1B, CS12);CLR_BIT(TCCR1B, CS11);CLR_BIT(TCCR1B, CS10);
	//Set new top value
	ICR1 = 1250;
}
void ServoMotor_Rotate(uint8_t angle)
{
	OCR1A = ((ICR1 * angle) / 100) - 1;
}