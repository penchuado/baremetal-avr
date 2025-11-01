/* Penchua
 * Baremetal AVR
 * Author: Penchua
 * Copyright 2025
 * MIT Lecense, see LICENSE for details
 */


#ifndef GPIO_H
#define GPIO_H

#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

#define GPIO_BASE        (0x20)
#define PORTB_BASE       (0x05)
#define DDRB_BASE        (0x04)
#define PINB_BASE        (0x03)

#define PORTB            (*(volatile unsigned char*) (GPIO_BASE + PORTB_BASE))
#define DDRB             (*(volatile unsigned char*) (GPIO_BASE + DDRB_BASE))
#define PINB             (*(volatile unsigned char*) (GPIO_BASE + PINB_BASE))

#define PB7              (7)
#define PB6              (6)
#define PB5              (5)
#define PB4              (4)
#define PB3              (3)
#define PB2              (2)
#define PB1              (1)
#define PB0              (0)

#ifdef __cplusplus
}
#endif

#endif // GPIO_H
