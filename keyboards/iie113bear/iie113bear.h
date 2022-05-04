#pragma once

#include "quantum.h"

#define LAYOUT_iie113bear( \
        K00, K01, K02, K03,      K05, K06, K07, K08,      K10, K11, \
        KC0, KC1, KC2, KC3,      KC5, KC6, KC7, KC8, KC9, KD0, KD1, \
        K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K30,      \
        KE0, KE1, KE2, KE3, KE4, KE5, KE6,      KE8, KE9, KF0, KF1, \
        K40, K41, K42, K43, K44, K45, K46, K47,      K49, K50, K51, \
             KG1, KG2, KG3, KG4, KG5, KG6, KG7, KG8, KG9, KH0, KH1, \
                       K63, K64, K65, K66, K67,      K69, K70,      \
        KI0, KI1, KI2, KI3, KI4, KI5, KI6,      KI8,                \
             K81,      K83,      K85, K86, K87, K88,      K90, K91, \
             KK1, KK2, KK3, KK4, KK5, KK6,      KK8,      KL0,      \
        KA0, KA1, KA2, KA3, KA4, KA5,           KA8,           KB1, \
        KM0,           KM3,      KM5, KM6, KM7, KM8, KM9, KN0, KN1  \
) { \
        { K00,   K01,   K02,   K03,   KC_NO, K05,   K06,   K07,   K08,   KC_NO, K10,   K11 }, \
        { K20,   K21,   K22,   K23,   K24,   K25,   K26,   K27,   K28,   K29,   K30,   KC_NO }, \
        { K40,   K41,   K42,   K43,   K44,   K45,   K46,   K47,   KC_NO, K49,   K50,   K51 }, \
        { KC_NO, KC_NO, KC_NO, K63,   K64,   K65,   K66,   K67,   KC_NO, K69,   K70,   KC_NO }, \
        { KC_NO, K81,   KC_NO, K83,   KC_NO, K85,   K86,   K87,   K88,   KC_NO, K90,   K91 }, \
        { KA0,   KA1,   KA2,   KA3,   KA4,   KA5,   KC_NO, KC_NO, KA8,   KC_NO, KC_NO, KB1 }, \
        { KC0,   KC1,   KC2,   KC3,   KC_NO, KC5,   KC6,   KC7,   KC8,   KC9,   KD0,   KD1 }, \
        { KE0,   KE1,   KE2,   KE3,   KE4,   KE5,   KE6,   KC_NO, KE8,   KE9,   KF0,   KF1 }, \
        { KC_NO, KG1,   KG2,   KG3,   KG4,   KG5,   KG6,   KG7,   KG8,   KG9,   KH0,   KH1 }, \
        { KI0,   KI1,   KI2,   KI3,   KI4,   KI5,   KI6,   KC_NO, KI8,   KC_NO, KC_NO, KC_NO }, \
        { KC_NO, KK1,   KK2,   KK3,   KK4,   KK5,   KK6,   KC_NO, KK8,   KC_NO, KL0,   KC_NO }, \
        { KM0,   KC_NO, KC_NO, KM3,   KC_NO, KM5,   KM6,   KM7,   KM8,   KM9,   KN0,   KN1 } \
}

    /*
     * ┌───┬───┬───┐ ┌───┐   ┌───┬───┬───┬───┐ ┌───┬───┐    ┌───┬───┬───┬───┐ ┌───┬───┬───┬───┐ ┌───┬───┬───┐
     * │PSc│Scr│Pse│ │Esc│   │F1 │F2 │F3 │F4 │ │F5 │F6 │    │F5 │F6 │F7 │F8 │ │F9 │F10│F11│F12│ │PSc│Scr│Pse│
     * └───┴───┴───┘ └───┘   └───┴───┴───┴───┘ └───┴───┘    └───┴───┴───┴───┘ └───┴───┴───┴───┘ └───┴───┴───┘
     * ┌───┬───┬───┐ ┌───┬───┬───┬───┬───┬───┬───┬───┐    ┌───┬───┬───┬───┬───┬───┬───┬───────┐ ┌───┬───┬───┐
     * │Ins│Hom│PgU│ │ ` │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │    │ 6 │ 7 │ 8 │ 9 │ 0 │ - │ = │ Backsp│ │Ins│Hom│PgU│
     * ├───┼───┼───┤ ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┘─┐  └─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤ ├───┼───┼───┤
     * │Del│End│PgD│ │ Tab │ Q │ W │ E │ R │ T │ Y │ U │    │ Y │ U │ I │ O │ P │ [ │ ] │  \  │ │Del│End│PgD│
     * └───┴───┴───┘ ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┘ ┌──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────┤ └───┴───┴───┘
     *               │ Caps │ A │ S │ D │ F │ G │ H │    │ G │ H │ J │ K │ L │ ; │ ' │  Enter │
     *     ┌───┐     ├──────┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┐  └─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────────┤     ┌───┐
     *     │ ↑ │     │ Shift  │ Z │ X │ C │ V │ B │ N │    │ B │ N │ M │ , │ . │ / │    Shift │     │ ↑ │
     * ┌───┼───┼───┐ ├────┬───┴┬──┴─┬─┴───┴───┴┬──┴───┘┐   └┬──┴──┬┴───┴──┬┴───┼───┴┬────┬────┤ ┌───┼───┼───┐
     * │ ← │ ↓ │ → │ │Ctrl│GUI │Alt │          │       │    │     │       │ Alt│ GUI│Menu│Ctrl│ │ ← │ ↓ │ → │
     * └───┴───┴───┘ └────┴────┴────┴──────────┴───────┘    └─────┴───────┴────┴────┴────┴────┘ └───┴───┴───┘
     */
#define LAYOUT LAYOUT
