@defgroup    boards_same51-curiosity-nano Microchip SAM E51 Curiosity Nano
@ingroup     boards
@brief       Support for the Microchip SAM E51 Curiosity Nano board.

## Overview

The `SAM E51 Curiosity Nano` is an evaluation board by Microchip featuring an
ATSAME51J20A SoC. The SoC includes a SAM E51 ARM Cortex-M4F microcontroller.
For programming the MCU comes with 256Kb of RAM and 1024Kb of flash memory.

The `same51-curiosity-nano` is available from various hardware vendors for ~15$
(as of 2024 December).

## Hardware

![same51-curiosity-nano image](https://www.microchip.com/content/dam/mchp/mrt-dam/devtools/3368-200511-mcu32-ev76s68a-sam-e51-curiosity-nano.jpg)


### MCU
| MCU          | ATSAME51J20A          |
|:------------ |:--------------------- |
| Family       | ARM Cortex-M4F        |
| Vendor       | Microchip             |
| RAM          | 256Kb                 |
| Flash        | 1024Kb                |
| Frequency    | up to 120MHz          |
| FPU          | yes                   |
| Timers       | 8 (16-bit)            |
| ADCs         | 2x 12-bit (20 channels) |
| UARTs        | max 6 (shared with SPI and I2C) |
| SPIs         | max 6 (see UART)      |
| I2Cs         | max 6 (see UART)      |
| Vcc          | 1.62V - 3.63V         |
| Datasheet    | [Datasheet](http://ww1.microchip.com/downloads/en/DeviceDoc/60001507C.pdf) |
| Board Manual | [Board Manual](https://ww1.microchip.com/downloads/aemDocuments/documents/MCU32/ProductDocuments/UserGuides/SAM-E51-Curiosity-Nano-User-Guide-DS70005432.pdf)|

### User Interface

1 User button and 1 LED:

| Device       | PIN  |
|:------------ |:---- |
| LED0         | PA14 |
| SW0 (button) | PA15 |


## Implementation Status

| Device           | ID        | Supported | Comments  |
|:---------------- |:--------- |:--------- |:--------- |
| MCU              | same51    | yes       |           |
| Low-level driver | GPIO      | yes       |           |
|                  | ADC       | yes       |           |
|                  | CAN       | yes       |           |
|                  | DAC       | yes       |           |
|                  | PWM       | yes       |           |
|                  | UART      | yes       |           |
|                  | I2C       | yes       |           |
|                  | SPI       | yes       |           |
|                  | USB       | yes       |           |
|                  | RTT       | yes       |           |
|                  | RTC       | yes       |           |
|                  | RNG       | yes       |           |
|                  | Timer     | yes       |           |


## Flashing the device

Connect the device to your Micro-USB cable using the port labeled as
*DEBUG USB*.

The standard method for flashing RIOT to the board is using OpenOCD.
by calling: `make BOARD=same51-curiosity-nano -C tests/leds flash`

On Linux you will have to add a **udev** rule for hidraw, like
```
bash
echo 'KERNEL=="hidraw*", SUBSYSTEM=="hidraw", MODE="0664", GROUP="plugdev"' \
    | sudo tee -a /etc/udev/rules.d/99-usb.rules
sudo service udev restart
```

## Known Issues / Problems
