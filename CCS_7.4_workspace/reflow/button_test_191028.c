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
    hal_gpio_set_LED_1(false);
    hal_gpio_set_LED_2(true);

    while(1)
    {
        if(hal_gpio_get_button_1()){
            hal_gpio_set_LED_1(true);
        } else {
            hal_gpio_set_LED_1(false);
        }

        hal_gpio_set_LED_2(hal_gpio_get_button_2());
    }
    return 0;
}




