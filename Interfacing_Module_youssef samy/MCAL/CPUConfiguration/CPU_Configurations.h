/*
 * CPU_Configurations.h
 *
 * Created: 2/19/2022 3:05:49 PM
 *  Author: youssef samy 
 */ 


#ifndef CPU_CONFIGURATIONS_H_
#define CPU_CONFIGURATIONS_H_

#undef F_CPU //Disable internal oscillator
#define F_CPU 16000000 //Enable external oscillator 16MHz
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <avr/io.h> //All ports defined in avr library
#include <util/delay.h> //Enable _delay_ms() function
#include <avr/interrupt.h> //Enable interrupts function
#include "BIT_Math.h"
#include "STD_Types.h"
#include "DIO_Private.h"
#include "Interrupt_Private.h"
#include "ADC_Private.h"
#include "Timer0_Private.h"
#include "WDT_Private.h"
#include "UART_Private.h"
#include "SPI_Private.h"


#endif /* CPU_CONFIGURATIONS_H_ */