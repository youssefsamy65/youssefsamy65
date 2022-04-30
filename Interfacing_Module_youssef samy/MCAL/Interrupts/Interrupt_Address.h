/*
 * Interrupt_Address.h
 *
 * Created: 3/11/2022 5:43:29 PM
 *  Author: youssef samy 
 */ 


#ifndef INTERRUPT_ADDRESS_H_
#define INTERRUPT_ADDRESS_H_

#define SREG   (*(volatile uint8_t*)(0x5F))
#define GICR   (*(volatile uint8_t*)(0x5B))
#define GIFR   (*(volatile uint8_t*)(0x5A))
#define MCUCR  (*(volatile uint8_t*)(0x55))
#define MCUCSR (*(volatile uint8_t*)(0x54))



#endif /* INTERRUPT_ADDRESS_H_ */