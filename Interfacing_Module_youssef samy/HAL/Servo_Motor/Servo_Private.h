/*
 * Servo_Private.h
 *
 * Created: 3/26/2022 6:05:05 PM
 *  Author: youssef samy 
 */ 


#ifndef SERVO_PRIVATE_H_
#define SERVO_PRIVATE_H_

#include "Servo_Configuration.h"


void ServoMotor_Initialize(void);
void ServoMotor_Rotate(uint8_t angle);


#endif /* SERVO_PRIVATE_H_ */