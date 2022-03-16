/*
 * BIT_Math.h
 *
 * Created: 2/28/2022 7:12:28 PM
 *  Author: MOHAMED
 */ 


#ifndef BIT_MATH_H_
#define BIT_MATH_H_

#define SET_BIT(REG,BIT) REG|=(1<<BIT)
#define CLR_BIT(REG,BIT) REG&=~(1<<BIT)
#define TGL_BIT(REG,BIT) REG^=(1<<BIT)
#define GET_BIT(REG,BIT) ((REG>>BIT)&1)

#endif /* BIT_MATH_H_ */