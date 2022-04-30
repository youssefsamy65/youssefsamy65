/*
* LCD_Interface.c
*
* Created: 3/4/2022 3:39:51 PM
*  Author: youssef samy 
*/


#include "LCD_Private.h"

void reverse(char* str, int len)
{
	int i = 0, j = len - 1, temp;
	while (i < j) {
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i++;
		j--;
	}
}
int intToStr(int x, char str[], int d)
{
	int i = 0;
	while (x) {
		str[i++] = (x % 10) + '0';
		x = x / 10;
	}
	
	// If number of digits required is more, then
	// add 0s at the beginning
	while (i < d)
	str[i++] = '0';
	
	reverse(str, i);
	str[i] = '\0';
	return i;
}
void ftoa(float n, char* res, int afterpoint)
{
	// Extract integer part
	int ipart = (int)n;
	
	// Extract floating part
	float fpart = n - (float)ipart;
	
	// convert integer part to string
	int i = intToStr(ipart, res, 0);
	
	// check for display option after point
	if (afterpoint != 0) {
		res[i] = '.'; // add dot
		
		// Get the value of fraction part upto given no.
		// of points after dot. The third parameter
		// is needed to handle cases like 233.007
		fpart = fpart * pow(10, afterpoint);
		
		intToStr((int)fpart, res + i + 1, afterpoint);
	}
}
void LCD_Initialize(void)
{
	
	//Define control pin directions
	DIO_SetPinDirection(LCD_CTRL_PRT, LCD_RS, LCD_OUT);
	DIO_SetPinDirection(LCD_CTRL_PRT, LCD_RW, LCD_OUT);
	DIO_SetPinDirection(LCD_CTRL_PRT, LCD_EN, LCD_OUT);
	//Define data pin direction
	DIO_SetPinDirection(LCD_DATA_PRT, LCD_D4, LCD_OUT);
	DIO_SetPinDirection(LCD_DATA_PRT, LCD_D5, LCD_OUT);
	DIO_SetPinDirection(LCD_DATA_PRT, LCD_D6, LCD_OUT);
	DIO_SetPinDirection(LCD_DATA_PRT, LCD_D7, LCD_OUT);
	LCD_Write_Command(0x33);
	LCD_Write_Command(0x32);
	LCD_Write_Command(D4D7_4BIT_DATA);
	LCD_Write_Command(RETURN_HOME);
	LCD_Write_Command(CLEAR_SCREEN);
	LCD_Write_Command(DISPLAYON_CURSOROFF);
	LCD_Write_Command(INCREMENT_CURSOR);
	
	#if LCD_MODE == LCD_4BIT_MODE

	#elif LCD_MODE == LCD_8BIT_MODE
	//Define control pin directions
	DIO_SetPinDirection(LCD_CTRL_PRT, LCD_RS, LCD_OUT);
	DIO_SetPinDirection(LCD_CTRL_PRT, LCD_RW, LCD_OUT);
	DIO_SetPinDirection(LCD_CTRL_PRT, LCD_EN, LCD_OUT);
	//Define data pin direction
	DIO_SetPinDirection(LCD_DATA_PRT, LCD_D0, LCD_OUT);
	DIO_SetPinDirection(LCD_DATA_PRT, LCD_D1, LCD_OUT);
	DIO_SetPinDirection(LCD_DATA_PRT, LCD_D2, LCD_OUT);
	DIO_SetPinDirection(LCD_DATA_PRT, LCD_D3, LCD_OUT);
	DIO_SetPinDirection(LCD_DATA_PRT, LCD_D4, LCD_OUT);
	DIO_SetPinDirection(LCD_DATA_PRT, LCD_D5, LCD_OUT);
	DIO_SetPinDirection(LCD_DATA_PRT, LCD_D6, LCD_OUT);
	DIO_SetPinDirection(LCD_DATA_PRT, LCD_D7, LCD_OUT);
	LCD_Write_Command(D0D7_8BIT_DATA);
	LCD_Write_Command(RETURN_HOME);
	LCD_Write_Command(CLEAR_SCREEN);
	LCD_Write_Command(DISPLAYON_CURSOROFF);
	LCD_Write_Command(INCREMENT_CURSOR);
	#else
	#warning "LCD Mode is incorrect"
	#endif
}
void LCD_Clear(void)
{
	LCD_Write_Command(CLEAR_SCREEN);
}
void LCD_Location(uint8_t row, uint8_t column)
{
	uint8_t location_row0 = ROW0_FIRST_CELL;
	uint8_t location_row1 = ROW1_FIRST_CELL;
	switch (row)
	{
		case 0:
		if(column < 16)
		{
			location_row0 += column;
			LCD_Write_Command(location_row0);
		}
		else
		{
			LCD_Write_Command(location_row0);
		}
		break;
		case 1:
		if(column < 16)
		{
			location_row1 += column;
			LCD_Write_Command(location_row1);
		}
		else
		{
			LCD_Write_Command(location_row1);
		}
		break;
		default:
		LCD_Write_Command(location_row0);
		break;
	}
}
void LCD_Write_Command(uint8_t command)//Write a command on LCD
{
	//Select Control register
	DIO_SetPinValue(LCD_CTRL_PRT, LCD_RS, LCD_LOW);
	//Select write on LCD
	DIO_SetPinValue(LCD_CTRL_PRT, LCD_RW, LCD_LOW);
	//Disable LCD before writing commands
	DIO_SetPinValue(LCD_CTRL_PRT, LCD_EN, LCD_LOW);
	#if LCD_MODE == LCD_4BIT_MODE
	//Start sending commands by sending high Nibble
	LCD = (command & 0xF0) | (LCD & 0x0F);
	//Send high to low pulse
	DIO_SetPinValue(LCD_CTRL_PRT, LCD_EN, LCD_HIGH);
	_delay_ms(1);
	DIO_SetPinValue(LCD_CTRL_PRT, LCD_EN, LCD_LOW);
	//Start sending commands by sending low Nibble
	LCD = ((command<<4) & 0xF0) | (LCD & 0x0F);
	//Send high to low pulse
	DIO_SetPinValue(LCD_CTRL_PRT, LCD_EN, LCD_HIGH);
	_delay_ms(1);
	DIO_SetPinValue(LCD_CTRL_PRT, LCD_EN, LCD_LOW);
	_delay_ms(5);
	#elif LCD_MODE == LCD_8BIT_MODE
	//Start sending commands by sending low Nibble
	LCD = command;
	//Send high to low pulse
	DIO_SetPinValue(LCD_CTRL_PRT, LCD_EN, LCD_HIGH);
	_delay_ms(1);
	DIO_SetPinValue(LCD_CTRL_PRT, LCD_EN, LCD_LOW);
	_delay_ms(5);
	#else
	#warning "LCD Mode is incorrect"
	#endif
}
void LCD_Write_Character(uint8_t character)//Write a data on LCD
{
	//Select Data register
	DIO_SetPinValue(LCD_CTRL_PRT, LCD_RS, LCD_HIGH);
	//Select write on LCD
	DIO_SetPinValue(LCD_CTRL_PRT, LCD_RW, LCD_LOW);
	//Disable LCD before writing commands
	DIO_SetPinValue(LCD_CTRL_PRT, LCD_EN, LCD_LOW);
	#if LCD_MODE == LCD_4BIT_MODE
	//Start sending commands by sending high Nibble
	LCD = (character & 0xF0) | (LCD & 0x0F);
	//Send high to low pulse
	DIO_SetPinValue(LCD_CTRL_PRT, LCD_EN, LCD_HIGH);
	_delay_ms(1);
	DIO_SetPinValue(LCD_CTRL_PRT, LCD_EN, LCD_LOW);
	//Start sending commands by sending low Nibble
	LCD = ((character<<4) & 0xF0) | (LCD & 0x0F);
	//Send high to low pulse
	DIO_SetPinValue(LCD_CTRL_PRT, LCD_EN, LCD_HIGH);
	_delay_ms(1);
	DIO_SetPinValue(LCD_CTRL_PRT, LCD_EN, LCD_LOW);
	_delay_ms(5);
	#elif LCD_MODE == LCD_8BIT_MODE
	//Start sending commands by sending low Nibble
	LCD = character;
	//Send high to low pulse
	DIO_SetPinValue(LCD_CTRL_PRT, LCD_EN, LCD_HIGH);
	_delay_ms(1);
	DIO_SetPinValue(LCD_CTRL_PRT, LCD_EN, LCD_LOW);
	_delay_ms(5);
	#else
	#warning "LCD Mode is incorrect"
	#endif
}
void LCD_Write_String(uint8_t* str)//Write a string on LCD
{
	while (*str != '\0')
	{
		LCD_Write_Character(*str);
		_delay_ms(10);
		str++;
	}
}
void LCD_Write_Number(uint32_t number)
{
	char num[10];
	ltoa(number, (char*)num, 10);
	LCD_Write_String((uint8_t*)num);
}
void LCD_Write_Float_Number(fint32_t fnumber)
{
	char fnum[10];
	ftoa(fnumber, fnum, 3);
	LCD_Write_String((uint8_t*)fnum);
}