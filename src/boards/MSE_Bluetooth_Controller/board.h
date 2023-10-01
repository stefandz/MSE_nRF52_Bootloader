/*
 * The MIT License (MIT)
 *
 * Copyright (c) 2018 Ha Thach for Adafruit Industries
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

#ifndef _MSE_BLUETOOTH_CONTROLLER
#define _MSE_BLUETOOTH_CONTROLLER

#define _PINNUM(port, pin)    ((port)*32 + (pin))

/*------------------------------------------------------------------*/
/* LED
 *------------------------------------------------------------------*/
#define LEDS_NUMBER           2
#define LED_PRIMARY_PIN       _PINNUM(1, 11)
#define LED_SECONDARY_PIN     _PINNUM(1, 13)
#define LED_STATE_ON          0

/*------------------------------------------------------------------*/
/* BUTTON
 *------------------------------------------------------------------*/
// we have to have two buttons for the BSP, but we actually have none
// set these two to unused pins
#define BUTTONS_NUMBER        2
#define BUTTON_1              _PINNUM(0, 20)
#define BUTTON_2              _PINNUM(0, 21)
#define BUTTON_PULL           NRF_GPIO_PIN_PULLUP

//--------------------------------------------------------------------+
// BLE OTA
//--------------------------------------------------------------------+
#define BLEDIS_MANUFACTURER   "MSE"
#define BLEDIS_MODEL          "Bluetooth Controller"

//--------------------------------------------------------------------+
// USB
//--------------------------------------------------------------------+
// NOTE: This is using Nordic Semiconductor's VID which is apparently
// OK, but PID clash is our problem

// see https://devzone.nordicsemi.com/f/nordic-q-a/33851/nrf52840---usb-vendor-id-and-usb-product-id
// and https://devzone.nordicsemi.com/f/nordic-q-a/30440/nrf24lu1-pid-vid

// PIDs randomly generated (build PID = 0x59B2)

#define USB_DESC_VID           0x1915
#define USB_DESC_UF2_PID       0x59B0
#define USB_DESC_CDC_ONLY_PID  0x59B1

//------------- UF2 -------------//
#define UF2_PRODUCT_NAME      "MSE Bluetooth Controller"
#define UF2_VOLUME_LABEL      "MSE_BT_CON"
#define UF2_BOARD_ID          "MSE_Bluetooth_Controller_AW1"
#define UF2_INDEX_URL         ""

#endif // _MSE_BLUETOOTH_CONTROLLER
