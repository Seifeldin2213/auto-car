/*
 * DELAY.h
 *
 * Created: 12/19/2022 6:57:26 PM
 *  Author: seif eldin
 */ 


#ifndef _UTIL_DELAY_H_
#define _UTIL_DELAY_H_ 1

#include <inttypes.h>
#include <util/delay_basic.h>


#if !defined(__DOXYGEN__)
static inline void _delay_us(double __us) __attribute__((always_inline));
static inline void _delay_ms(double __ms) __attribute__((always_inline));
#endif

#ifndef F_CPU
/* prevent compiler error by supplying a default */
# warning "F_CPU not defined for <util/delay.h>"
# define F_CPU 1000000UL
#endif

#ifndef __OPTIMIZE__
# warning "Compiler optimizations disabled; functions from <util/delay.h> won't work as designed"
#endif

void
_delay_ms(double __ms)
{
	uint16_t __ticks;
	double __tmp = ((F_CPU) / 4e3) * __ms;
	if (__tmp < 1.0)
	__ticks = 1;
	else if (__tmp > 65535)
	{
		//	__ticks = requested delay in 1/10 ms
		__ticks = (uint16_t) (__ms * 10.0);
		while(__ticks)
		{
			// wait 1/10 ms
			_delay_loop_2(((F_CPU) / 4e3) / 10);
			__ticks --;
		}
		return;
	}
	else
	__ticks = (uint16_t)__tmp;
	_delay_loop_2(__ticks);
}

void
_delay_us(double __us)
{
	uint8_t __ticks;
	double __tmp = ((F_CPU) / 3e6) * __us;
	if (__tmp < 1.0)
	__ticks = 1;
	else if (__tmp > 255)
	{
		_delay_ms(__us / 1000.0);
		return;
	}
	else
	__ticks = (uint8_t)__tmp;
	_delay_loop_1(__ticks);
}


#endif /* _UTIL_DELAY_H_ */

