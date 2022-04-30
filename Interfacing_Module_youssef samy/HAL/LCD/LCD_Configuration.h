/*
 * LCD_Configuration.h
 *
 * Created: 3/4/2022 3:39:31 PM
 *  Author: youssef samy 
 */ 


#ifndef LCD_CONFIGURATION_H_
#define LCD_CONFIGURATION_H_

#include "CPU_Configurations.h"
//Main port for sending data
#define LCD PORTA
//Renaming port 
#define LCD_DATA_PRT DIO_PORTA
#define LCD_CTRL_PRT DIO_PORTB
//Renaming data pins
#define LCD_D0 DIO_PIN0
#define LCD_D1 DIO_PIN1
#define LCD_D2 DIO_PIN2
#define LCD_D3 DIO_PIN3
#define LCD_D4 DIO_PIN4
#define LCD_D5 DIO_PIN5
#define LCD_D6 DIO_PIN6
#define LCD_D7 DIO_PIN7
//Renaming control pins
#define LCD_RS DIO_PIN1
#define LCD_RW DIO_PIN2
#define LCD_EN DIO_PIN3
//Renaming state
#define LCD_LOW DIO_LOW
#define LCD_HIGH DIO_HIGH
//Renaming directions
#define LCD_OUT DIO_OUTPUT
//Renaming mode
#define LCD_4BIT_MODE 0
#define LCD_8BIT_MODE 1
//Renaming mode state
#define LCD_MODE LCD_4BIT_MODE
//Renaming Commands
#define CLEAR_SCREEN        0x01
#define RETURN_HOME         0x02
#define DECREMENT_CURSOR    0x04
#define INCREMENT_CURSOR    0x06
#define SHIFT_DISPLAY_RIGHT 0x05
#define SHIFT_DISPLAY_LEFT  0x07
#define DISPLAYON_CURSOROFF 0x0C
#define SHIFT_ALL_LEFT      0x18
#define SHIFT_ALL_RIGHT     0x1C
#define ROW0_FIRST_CELL     0x80
#define ROW1_FIRST_CELL     0xC0
#define D4D7_4BIT_DATA      0x28
#define D0D7_8BIT_DATA      0x38
#endif /* LCD_CONFIGURATION_H_ */