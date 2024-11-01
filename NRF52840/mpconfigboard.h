
/*
 * This file is part of the MicroPython project, http://micropython.org/
 *
 * The MIT License (MIT)
 *
 * Copyright (c) 2016 Glenn Ruben Bakke
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#define MICROPY_HW_BOARD_NAME       "FEATHER-NRF52840"
#define MICROPY_HW_MCU_NAME         "NRF52840"
#define MICROPY_PY_SYS_PLATFORM     "nrf52840-feather"

#define MICROPY_PY_MACHINE_BITSTREAM (1)
#define MICROPY_PY_MACHINE_UART      (1)
#define MICROPY_PY_MACHINE_HW_PWM    (1)
#define MICROPY_PY_MACHINE_HW_SPI    (1)
#define MICROPY_PY_MACHINE_RTCOUNTER (1)
#define MICROPY_PY_MACHINE_I2C       (1)
#define MICROPY_PY_MACHINE_ADC       (1)
#define MICROPY_PY_MACHINE_TEMP      (1)
#define MICROPY_PY_FRAMEBUF          (1)

#define MICROPY_HW_ENABLE_USBDEV    (1)
#define MICROPY_HW_USB_CDC          (1) //very important to get USB-Serial to work
//#define MICROPY_HW_USB_VID          (0x2886)
//#define MICROPY_HW_USB_PID          (0x0045)
#define MICROPY_HW_USB_CDC_1200BPS_TOUCH (1)

#define MICROPY_HW_ENABLE_RNG       (1)
//#define MICROPY_HW_HAS_FLASH        (1)
//#define QSPI_FLASH_FILESYSTEM       (1)

#define MICROPY_HW_NEOPIXEL         (16)

#if QSPI_FLASH_FILESYSTEM
#define MICROPY_QSPI_DATA0          (17)
#define MICROPY_QSPI_DATA1          (22)
#define MICROPY_QSPI_DATA2          (23)
#define MICROPY_QSPI_DATA3          (21)
#define MICROPY_QSPI_SCK            (19)
#define MICROPY_QSPI_CS             (20)
#endif

#define MICROPY_HW_HAS_LED          (1)
#define MICROPY_HW_LED_COUNT        (2)
#define MICROPY_HW_LED_PULLUP       (0)

#define MICROPY_HW_LED2             (32+10) // Red LED
#define MICROPY_HW_LED1             (32+15) // Blue LED

// UART config
#define MICROPY_HW_UART1_RX         (24)
#define MICROPY_HW_UART1_TX         (25)
//#define MICROPY_HW_UART1_CTS        (7)
//#define MICROPY_HW_UART1_RTS        (5)
#define MICROPY_HW_UART1_HWFC       (0)

// SPI0 config
#define MICROPY_HW_SPI0_NAME        "SPI0"

#define MICROPY_HW_SPI0_SCK         (14)
#define MICROPY_HW_SPI0_MOSI        (13)
#define MICROPY_HW_SPI0_MISO        (15)

#define MICROPY_HW_PWM0_NAME        "PWM0"
#define MICROPY_HW_PWM1_NAME        "PWM1"
#define MICROPY_HW_PWM2_NAME        "PWM2"
#if 0
#define MICROPY_HW_PWM3_NAME        "PWM3"
#endif

#define HELP_TEXT_BOARD_LED         "1,2"