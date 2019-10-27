/*
 * hal_gpio.c
 *
 *  Created on: Oct 27, 2019
 *      Author: Edwin
 */
#include "../HAL/hal_gpio.h"
#include <msp430.h>
#include <stdbool.h>

void hal_gpio_init()
{
    // TODO: init LEDs
    // enable PORT1 and PORT9
    PM5CTL0 &= ~LOCKLPM5;

    // LED1 init
    P1DIR |= 0x01;
    P1REN |= 0x01;
    P1SEL0 &= ~0x01;
    P1SEL1 &= ~0x01;
    P1OUT &= ~0x01;

    // LED2 init
    P9DIR |= 0x80;
    P9REN |= 0x80;
    P9SEL0 &= ~0x80;
    P9SEL1 &= ~0x80;
    P9OUT &= ~0x80;



    // TODO: init buttons
    // TODO: init chipslect
    // TODO: init UART pins
    // TODO: init SPI pins
    // TODO: init PWM pins
}

void hal_gpio_set_LED_1(bool level)
{
    if(level){
        P1OUT |= 0x01;
    } else{
        P1OUT &= ~0x01;
    }
}

void hal_gpio_set_LED_2( bool level)
{
    if(level){
        P9OUT |= 0x80;
    } else{
        P9OUT &= ~0x80;
    }
}

bool hal_gpio_get_button_1()
{
    return false;
}

bool hal_gpio_get_button_2()
{
    return false;
}

void hal_gpio_chipselect_MAX31865(bool level)
{

}
