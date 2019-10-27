/*
 * hal_gpio.h
 *
 *  Created on: Oct 27, 2019
 *      Author: Edwin Koch
 */

#ifndef HAL_HAL_GPIO_H_
#define HAL_HAL_GPIO_H_

#include <stdbool.h>

void hal_gpio_init();

void hal_gpio_set_LED_1(bool level);

void hal_gpio_set_LED_2(bool level);

void hal_gpio_toggle_LED_1();

void hal_gpio_toggle_LED_2();

bool hal_gpio_get_button_1();

bool hal_gpio_get_button_2();

void hal_gpio_chipselect_MAX31865(bool level);

#endif /* HAL_HAL_GPIO_H_ */
