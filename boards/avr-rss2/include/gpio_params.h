/*
 * SPDX-FileCopyrightText: 2019 Robert Olsson <roolss@kth.se>
 * SPDX-License-Identifier: LGPL-2.1-only
 */

#pragma once

/**
 * @ingroup     boards_avr-rss2
 * @{
 *
 * @file
 * @brief       Configuration of SAUL mapped GPIO pins
 *
 * @author      Robert Olsson <roolss@kth.se>
 */

#include "board.h"
#include "saul/periph.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief   GPIO configuration
 */
static const  saul_gpio_params_t saul_gpio_params[] =
{
    {
        .name = "BTN0 (S2 BUTTON)",
        .pin  = BTN0_PIN,
        .mode = BTN0_MODE,
        .flags = SAUL_GPIO_INVERTED,
    },
    {
        .name = "LED0 (Red)",
        .pin = LED0_PIN,
        .mode = LED0_MODE,
        .flags = (SAUL_GPIO_INVERTED | SAUL_GPIO_INIT_CLEAR),
    },
    {
        .name = "LED1 (Yellow)",
        .pin = LED1_PIN,
        .mode = LED1_MODE,
        .flags = (SAUL_GPIO_INVERTED | SAUL_GPIO_INIT_CLEAR),
    },
};

#ifdef __cplusplus
}
#endif

/** @} */
