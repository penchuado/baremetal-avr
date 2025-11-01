/* Penchua
 * Baremetal AVR
 * Author: Penchua
 * Copyright 2025
 * MIT Lecense, see LICENSE for details
 */

#define F_CPU 16000000UL

#include <util/delay.h>
#include "gpio.h"


int main()
{
    DDRB |= (1 << PB5); // D13 on Arduino

    while(1) {
	PORTB |= (1 << PB5);
	_delay_ms(200);
	PORTB &= ~(1 << PB5);
	_delay_ms(800);
    }
}
