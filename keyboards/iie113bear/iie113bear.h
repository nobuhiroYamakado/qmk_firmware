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


/* #define LAYOUT_iie113bear(k0A, k0B, k0C, k0D, k0F, k0G, k0H, k0I, k0K, k0L, k6A, k6B, k6C, k6D, k6F, k6G, k6H, k6I, k6J, k6K, k6L, k1A, k1B, k1C, k1D, k1E, k1F, k1G, k1H, k1I, k1J, k1K, k7A, k7B, k7C, k7D, k7E, k7F, k7G, k7I, k7J, k7K, k7L, k2A, k2B, k2C, k2D, k2E, k2F, k2G, k2H, k2J, k2K, k2L, k8B, k8C, k8D, k8E, k8F, k8G, k8H, k8I, k8J, k8K, k8L, k3D, k3E, k3F, k3G, k3H, k3J, k3K, k9A, k9B, k9C, k9D, k9E, k9F, k9G, k9I, k4B, k4D, k4F, k4G, k4H, k4I, k4K, k4L, kAB, kAC, kAD, kAE, kAF, kAG, kAI, kAK, k5A, k5B, k5C, k5D, k5E, k5F, k5I, k5L, kBA, kBD, kBF, kBG, kBH, kBI, kBJ, kBK, kBL) {\
* 	 {k0A, k0B, k0C, k0D, KC_NO, k0F, k0G, k0H, k0I, KC_NO, k0K, k0L}, \
* 	 {k1A, k1B, k1C, k1D, k1E, k1F, k1G, k1H, k1I, k1J, k1K, KC_NO}, \
* 	 {k2A, k2B, k2C, k2D, k2E, k2F, k2G, k2H, KC_NO, k2J, k2K, k2L}, \
* 	 {KC_NO, KC_NO, KC_NO, k3D, k3E, k3F, k3G, k3H, KC_NO, k3J, k3K, KC_NO}, \
* 	 {KC_NO, k4B, KC_NO, k4D, KC_NO, k4F, k4G, k4H, k4I, KC_NO, k4K, k4L}, \
* 	 {k5A, k5B, k5C, k5D, k5E, k5F, KC_NO, KC_NO, k5I, KC_NO, KC_NO, k5L}, \
* 	 {k6A, k6B, k6C, k6D, KC_NO, k6F, k6G, k6H, k6I, k6J, k6K, k6L}, \
* 	 {k7A, k7B, k7C, k7D, k7E, k7F, k7G, KC_NO, k7I, k7J, k7K, k7L}, \
* 	 {KC_NO, k8B, k8C, k8D, k8E, k8F, k8G, k8H, k8I, k8J, k8K, k8L}, \
* 	 {k9A, k9B, k9C, k9D, k9E, k9F, k9G, KC_NO, k9I, KC_NO, KC_NO, KC_NO}, \
* 	 {KC_NO, kAB, kAC, kAD, kAE, kAF, kAG, KC_NO, kAI, KC_NO, kAK, KC_NO}, \
* 	 {kBA, KC_NO, KC_NO, kBD, KC_NO, kBF, kBG, kBH, kBI, kBJ, kBK, kBL} \
* }
*/
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
