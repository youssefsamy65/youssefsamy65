/*
 * PWM0_Private.h
 *
 * Created: 3/19/2022 4:46:14 PM
 *  Author: youssef samy 
 */ 


#ifndef PWM0_PRIVATE_H_
#define PWM0_PRIVATE_H_

#include "PWM0_Configuration.h"

void PWM0_Fast_Initialize(void);
void PWM0_Fast_Start(void);
void PWM0_Fast_Stop(void);
void PWM0_Fast_SetDutyCycle(uint8_t dutycycle);

void PWM0_PhaseCorrect_Initialize(void);
void PWM0_PhaseCorrect_Start(void);
void PWM0_PhaseCorrect_Stop(void);
void PWM0_PhaseCorrect_SetDutyCycle(uint8_t dutycycle);


#endif /* PWM0_PRIVATE_H_ */