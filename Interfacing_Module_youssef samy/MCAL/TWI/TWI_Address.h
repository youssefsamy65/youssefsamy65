/*
 * TWI_Address.h
 *
 * Created: 4/15/2022 2:37:21 PM
 *  Author: youssef samy
 */ 


#ifndef TWI_ADDRESS_H_
#define TWI_ADDRESS_H_


#define TWAR (*(volatile uint8_t*)(0x22))
#define TWBR (*(volatile uint8_t*)(0x20))
#define TWCR (*(volatile uint8_t*)(0x))
#define TWDR (*(volatile uint8_t*)(0x23))
#define TWSR (*(volatile uint8_t*)(0x21))


#endif /* TWI_ADDRESS_H_ */