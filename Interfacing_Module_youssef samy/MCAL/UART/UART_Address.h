/*
 * UART_Address.h
 *
 * Created: 4/8/2022 2:17:40 PM
 *  Author: youssef samy
 */ 


#ifndef UART_ADDRESS_H_
#define UART_ADDRESS_H_

#define UDR   (*(volatile uint8_t*)(0x2C))
#define UCSRA (*(volatile uint8_t*)(0x2B))
#define UCSRB (*(volatile uint8_t*)(0x2A))
#define UCSRC (*(volatile uint8_t*)(0x40))
#define UBRRL (*(volatile uint8_t*)(0x29))
#define UBRRH (*(volatile uint8_t*)(0x40))

#endif /* UART_ADDRESS_H_ */