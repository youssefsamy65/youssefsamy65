/*
 * BIT_Math.h
 *
 * Created: 2/19/2022 2:58:52 PM
 *  Author: youssef samy 
 */ 


#ifndef BIT_MATH_H_
#define BIT_MATH_H_

#define SET_BIT(REG,BIT) REG|=(1<<BIT)
#define CLR_BIT(REG,BIT) REG&=~(1<<BIT)
#define TGL_BIT(REG,BIT) REG^=(1<<BIT)
#define GET_BIT(REG,BIT) ((REG>>BIT)&1)

#endif /* BIT_MATH_H_ */