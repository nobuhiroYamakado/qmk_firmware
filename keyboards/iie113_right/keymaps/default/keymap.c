#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
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
    // [0] = LAYOUT_left(
    //     KC_ESC,           KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,

    //     KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,
    //     KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC,
    //     KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
    //     KC_LSFT,          KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,
    //     KC_LCTL, KC_LGUI, KC_LALT,                            KC_SPC,                             KC_RALT, KC_RGUI
    // )
//      0        1        2        3        4        5        6        7        8        9        10       11        12       13       14       15       16       17       18       19       20          21       22       23
    [0] = LAYOUT_all_iie113_right(
        KC_PSCR, KC_SCRL, KC_PAUS, KC_ESC,           KC_F1,   KC_F2,   KC_F3,   KC_F4,            KC_F5,   KC_F6,    KC_F5,   KC_F6,   KC_F7,   KC_F8,            KC_F9,   KC_F10,  KC_F11,  KC_F12,     KC_PSCR, KC_SCRL, KC_PAUS,
        KC_INS,  KC_HOME, KC_PGUP, KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,              KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,           KC_BSPC,    KC_INS,  KC_HOME, KC_PGUP,
        KC_DEL,  KC_END,  KC_PGDN, KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,             KC_T,    KC_Y,    KC_U,              KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,    KC_DEL,  KC_END,  KC_PGDN,
                                   KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,             KC_G,    KC_H,              KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,
                 KC_UP,            KC_LSFT,          KC_Z,    KC_X,    KC_C,    KC_V,             KC_B,    KC_N,              KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,          KC_RSFT,             KC_UP,
        KC_LEFT, KC_DOWN, KC_RGHT, KC_LCTL, KC_LGUI, KC_LALT,                   KC_SPC,                    KC_TRNS,  KC_TRNS,                   KC_SPC,           KC_RALT, KC_RGUI, KC_APP,  KC_RCTL,    KC_LEFT, KC_DOWN, KC_RGHT
    )
};


// KC_PSCR, KC_SCRL, KC_PAUS, KC_ESC,           KC_F1,   KC_F2,   KC_F3,   KC_F4,            KC_F5,   KC_F6,    KC_F5,   KC_F6,   KC_F7,   KC_F8,            KC_F9,   KC_F10,  KC_F11,  KC_F12,     KC_PSCR, KC_SCRL, KC_PAUS,
// KC_INS,  KC_HOME, KC_PGUP, KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,              KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,           KC_BSPC,    KC_INS,  KC_HOME, KC_PGUP,
// KC_DEL,  KC_END,  KC_PGDN, KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,             KC_T,    KC_Y,    KC_U,              KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,    KC_DEL,  KC_END,  KC_PGDN,
//                            KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,             KC_G,    KC_H,              KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,
//          KC_UP,            KC_LSFT,          KC_Z,    KC_X,    KC_C,    KC_V,             KC_B,    KC_N,              KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,          KC_RSFT,             KC_UP,
// KC_LEFT, KC_DOWN, KC_RGHT, KC_LCTL, KC_LGUI, KC_LALT,                   KC_SPC,                    KC_TRNS,  KC_TRNS,                   KC_SPC,           KC_RALT, KC_RGUI, KC_APP,  KC_RCTL,    KC_LEFT, KC_DOWN, KC_RGHT


//
//
//
//
//
//







// KC_PSCR, KC_SCRL, KC_PAUS, KC_ESC,           KC_F1,   KC_F2,   KC_F3,   KC_F4,            KC_F5,   KC_F6,
// KC_INS,  KC_HOME, KC_PGUP, KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,
// KC_DEL,  KC_END,  KC_PGDN, KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,             KC_T,    KC_Y,    KC_U,
//                            KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,             KC_G,    KC_H,
//          KC_UP,            KC_LSFT,          KC_Z,    KC_X,    KC_C,    KC_V,             KC_B,    KC_N,
// KC_LEFT, KC_DOWN, KC_RGHT, KC_LCTL, KC_LGUI, KC_LALT,                   KC_SPC,                    KC_TRNS,



// KC_F5,   KC_F6,   KC_F7,   KC_F8,            KC_F9,   KC_F10,  KC_F11,  KC_F12,     KC_PSCR, KC_SCRL, KC_PAUS,
// KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,           KC_BSPC,    KC_INS,  KC_HOME, KC_PGUP,
//          KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,    KC_DEL,  KC_END,  KC_PGDN,
// KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,
//          KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,          KC_RSFT,             KC_UP,
// KC_TRNS,                   KC_SPC,           KC_RALT, KC_RGUI, KC_APP,  KC_RCTL,    KC_LEFT, KC_DOWN, KC_RGHT


// void oled_task_user(void) {
//     oled_write_P(PSTR("this is iie113"), false);
// }
