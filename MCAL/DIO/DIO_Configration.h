/*
* DIO_Configration.h
*
* Created: 2/28/2022 8:53:04 PM
*  Author: MOHAMED
*/


#ifndef DIO_CONFIGRATION_H_
#define DIO_CONFIGRATION_H_
#include "Configuration.h"
typedef enum
{
	DIO_PORTA=0,
	DIO_PORTB=1,
	DIO_PORTC=2,
	DIO_PORTD=3
}Port;
typedef enum
{
	DIO_PIN0=0,
	DIO_PIN1=1,
	DIO_PIN2=2,
	DIO_PIN3=3,
	DIO_PIN4=4,
	DIO_PIN5=5,
	DIO_PIN6=6,
	DIO_PIN7=7
}Pin;
typedef enum
{
	DIO_Input=0,
	DIO_Output=1
}Direction;
typedef enum
{
	DIO_Low=0,
	DIO_High=1
}State;
typedef enum
{
	DIO_False=0,
	DIO_True=1
}Boolean;




#endif /* DIO_CONFIGRATION_H_ */