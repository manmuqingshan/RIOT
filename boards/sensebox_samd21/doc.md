@defgroup    boards_sensebox_samd21 SenseBox MCU with SAMD21
@ingroup     boards
@brief       Support for the SenseBox MCU with SAMD21 board.

### General information

[SenseBox](https://www.sensebox.de/) is a do-it-yourself kit for stationary
and mobile sensor stations.

SenseBox board is based on the Atmel SAMD21G18A microcontroller. See
@ref cpu_samd21.


### Flash the board

1. Put the board in bootloader mode by double tapping the reset button.<br/>
    When the board is in bootloader mode, the user led (red) oscillates smoothly.


2. Use `BOARD=sensebox_samd21` with the `make` command.<br/>
    Example with `hello-world` application:
```
    make BOARD=sensebox_samd21 -C examples/basic/hello-world flash
```

### Accessing STDIO via UART

STDIO of RIOT is directly available over the USB port.

The `TERM_DELAY` environment variable can be used to add a delay (in second)
before opening the serial terminal. The default value is 2s which should be
enough in most of the situation.

### On I2C port
I2C port is enabled by default. To disable it use ```I2C_DISABLE```. To
re-enable use ```I2C_ENABLE```.

### On XBEE ports
XBEE1 and XBEE2 ports are enabled by default. To disable any of them use
```XBEEn_DISABLE```. To re-enable use ```XBEEn_ENABLE```.

On the board there is a reset circuit for this ports that delays the reset
signal from the enable signal for about 300ms. Because of that a delay has
been introduced in the ```board_init``` function, so that any SPI device
connected to the ports is reset before use.

#### SX127X radio
The pin configuration for the SX127X radio on the
*boards/sensebox_samd21/include/board.h** file assumes that it will be connected to
the XBEE1 port. If a different configuration is needed please modify this
file.

#### SD card
The pin configuration for the mSD-Bee module radio on the
*boards/sensebox_samd21/include/sdcard_spi_params.h** file assumes that it will be
connected to the XBEE2 port. If a different configuration is needed please
modify this file.

#### Limitations
There is only one interrupt pin on the XBEE headers. This means that interrupt
pins DIO0 and DIO1 from the LoRa Bee are multiplexed through an OR gate.

This has the following limitations:

- FSK mode is not possible
- The interrupt pins can have different configurations, so caution is required
when making changes.
