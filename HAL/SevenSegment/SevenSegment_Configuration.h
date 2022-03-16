/*
 * LED0_Configuration.h
 *
 * Created: 2/28/2022 8:07:27 PM
 *  Author: MOHAMED
 */ 


#ifndef SEVENSEGMENT_CONFIGURATION_H_
#define SEVENSEGMENT_CONFIGURATION_H_

#include "Configuration.h"
/*renaming pins and ports*/
#define Sevseg_ctrl_prt DIO_PORTB
#define Sevseg_data_prt DIO_PORTA

#define Sevseg_data_A DIO_PIN4
#define Sevseg_data_B DIO_PIN5
#define Sevseg_data_C DIO_PIN6
#define Sevseg_data_D DIO_PIN7

#define Sevseg_ctrl_EN1 DIO_PIN1
#define Sevseg_ctrl_EN2 DIO_PIN2
#define Sevseg_ctrl_DP  DIO_PIN3

#define Sevseg_Low    DIO_Low
#define Sevseg_High   DIO_High
#define Sevseg_Output DIO_Output



#endif 