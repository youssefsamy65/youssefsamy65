/*
 * DIO_Private.h
 *
 * Created: 2/28/2022 9:00:52 PM
 *  Author: MOHAMED
 */ 


#ifndef DIO_PRIVATE_H_
#define DIO_PRIVATE_H_
#include "DIO_Configration.h"
void DIO_SetPinDirection(Port p0,Pin pi,Direction dr);
void DIO_SetPinValue(Port p0,Pin pi,State st);
void DIO_TogglePinValue(Port p0,Pin pi);
uint8_t DIO_ReadPinValue(Port p0,Pin pi);
void DIO_SetPinPullup(Port p0,Pin pi);
void DIO_SetPortValue(Port p0,State st);
void DIO_SetPortDirection(Port p0,Direction Di);



#endif /* DIO_PRIVATE_H_ */