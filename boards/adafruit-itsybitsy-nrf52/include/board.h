/*
 * SPDX-FileCopyrightText: 2020 Bruno Chianca <brunobcf@gmail.com>
 * SPDX-License-Identifier: LGPL-2.1-only
 */

#pragma once

/**
 * @ingroup     boards_adafruit-itsybitsy-nrf52
 * @{
 *
 * @file
 * @brief       Board specific configuration for Adafruit ItsyBitsy nRF52840
 *
 * @author      Bruno Chianca <brunobcf@gmail.com>
 */

#include "cpu.h"
#include "board_common.h"
#include "periph/gpio.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @name    LED pin configuration
 * @{
 */
 /** @brief The LED labelled LD1 */
#define LED0_PIN            GPIO_PIN(0, 6)

/** @} */

/**
 * @name    LED access macros
 * @{
 */

/** Enable LD1 */
#define LED0_ON gpio_clear(LED0_PIN)
/** Disable LD1 */
#define LED0_OFF gpio_set(LED0_PIN)
/** Toggle LD1 */
#define LED0_TOGGLE gpio_toggle(LED0_PIN)

/** @} */

/**
 * @name APA102 / DotStar configuration
 * @{
 */
#define APA102_PARAM_LED_NUMOF      (1)
#define APA102_PARAM_DATA_PIN       GPIO_PIN(0, 8)
#define APA102_PARAM_CLK_PIN        GPIO_PIN(1, 9)
/** @} */

/**
 * @name    Button pin configuration
 * @{
 */
/** @brief The button labelled SW1 */
#define BTN0_PIN GPIO_PIN(0, 29)
/** @brief The GPIO pin mode of the button labelled SW1 */
#define BTN0_MODE GPIO_IN_PU
/** @} */

#ifdef __cplusplus
}
#endif

/** @} */
