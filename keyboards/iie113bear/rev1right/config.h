// Copyright 2022 Nobuhiro Kimura (@ymkd)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT

#define VENDOR_ID       0x113F
#define PRODUCT_ID      0x0001
#define DEVICE_VER      0x0003
#define MANUFACTURER    NobuhiroKimura
#define PRODUCT         IIE113D3Data

#define MATRIX_ROWS 12
#define MATRIX_ROW_PINS { D2, D4, D7, C7, B3, F6 }
//left v1

#define MATRIX_COLS 12
#define MATRIX_COL_PINS { B0, B6, C6, B7, F1, F7, F0, B1, B5, D5, F5, F4 }
//left v1

#define DIODE_DIRECTION COL2ROW

#define MATRIX_ROW_PINS_RIGHT { D2, E6, D7, B3, F5, B0 }
//right v0
#define MATRIX_COL_PINS_RIGHT { F4, C6, F6, B2, B6, F0, F1, F7, B1, C7, B4, D4 }
//right v0

#define SOFT_SERIAL_PIN D3


#define SPLIT_USB_DETECT
#define SPLIT_USB_TIMEOUT_POLL 10


#define MASTER_RIGHT

#define TAP_HOLD_CAPS_DELAY 80

#define SELECT_SOFT_SERIAL_SPEED 2


//right v0(black) D3 data
// #define MATRIX_ROW_PINS_RIGHT { D2, E6, D7, B3, F5, B0 }
// #define MATRIX_COL_PINS_RIGHT { F4, C6, F6, B2, B6, F0, F1, F7, B1, C7, B4, D4 }


//left v1(red) D2 data
// #define MATRIX_ROW_PINS_RIGHT {D3, D4, D7, C7, B3, F6}
// #define MATRIX_COL_PINS_RIGHT {B0, B6, C6, B7, F1, F7, F0, B1, B5, D5, F5, F4}
// #define MATRIX_ROW_PINS { D3, D4, D7, C7, B3, F6 }
// #define MATRIX_COL_PINS { B0, B6, C6, B7, F1, F7, F0, B1, B5, D5, F5, F4 }


//left v0(white) D2 data
// #define MATRIX_COL_PINS { D1, D0, D4, C6, D7, E6, B4, B5, B7, D5, C7, F1 }
// #define MATRIX_ROW_PINS { F4, F5, F6, F7, B1, B3}

/*
 * Display OLED SSD1306 128x32
 */
#define OLED_DISPLAY_ADDRESS 0x3C
#define OLED_BRIGHTNESS 255
#define OLED_IC OLED_IC_SSD1306
#define OLED_DISPLAY_WIDTH 128
#define OLED_DISPLAY_HEIGHT 32
#define OLED_TIMEOUT 31000
