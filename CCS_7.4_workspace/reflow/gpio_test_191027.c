/*
 * gpio_test_191027.c
 *
 *  Created on: Oct 27, 2019
 *      Author: Edwin
 */
#include <msp430.h>
#include <stdbool.h>
#include "HAL/hal_gpio.h"

int main(void)
{
    WDTCTL = WDTPW | WDTHOLD;   // stop watchdog timer

    hal_gpio_init();
    hal_gpio_set_LED_1(true);
    hal_gpio_set_LED_2(true);

    while(1)
    {

    }
    return 0;
}




