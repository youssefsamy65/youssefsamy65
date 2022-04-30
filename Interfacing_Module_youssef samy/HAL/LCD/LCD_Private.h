/*
 * LCD_Private.h
 *
 * Created: 3/4/2022 3:39:39 PM
 *  Author: youssef samy 
 */ 


#ifndef LCD_PRIVATE_H_
#define LCD_PRIVATE_H_

#include "LCD_Configuration.h"


void LCD_Initialize(void);
void LCD_Clear(void);
void LCD_Location(uint8_t row, uint8_t column);
void LCD_Write_Command(uint8_t command);
void LCD_Write_Character(uint8_t character);
void LCD_Write_String(uint8_t* str);
void LCD_Write_Number(uint32_t number);
void LCD_Write_Float_Number(fint32_t fnumber);




#endif /* LCD_PRIVATE_H_ */