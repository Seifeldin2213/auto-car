/*
 * MATH.h
 *
 * Created: 12/19/2022 6:58:59 PM
 *  Author: seif eldin
 */ 


#ifndef MATH_BTS_H_
#define MATH_BTS_H_
#define SET_BIT(REG,BIT_NO)       REG|=(1<<BIT_NO)
#define CLR_BIT(REG,BIT_NO)       REG&=~(1<<BIT_NO)
#define CHCK_BIT(REG,BIT_NO)      REG&(1<<BIT_NO)
#define TOGGLE_BIT(REG,BIT_NO)    REG^=(1<<BIT_NO)

#endif /* MATH_BTS_H_ */
