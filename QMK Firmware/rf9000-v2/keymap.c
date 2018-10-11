#include QMK_KEYBOARD_H

#define _BASE 0
#define _LAYERUP 1

// Fillers to make layering more clear
#define _______ KC_TRNS
#define XXXXXXX KC_NO

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_BASE] = LAYOUT( \
    KC_ESC ,  KC_UP,   KC_GRAVE,  KC_1,      KC_2,          KC_3,     KC_4,       KC_5,       KC_BSPC,        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, \
    KC_LEFT,  KC_DOWN, KC_RIGHT,  KC_Q,      KC_W,          KC_E,     KC_R,       KC_T,       KC_Y,           KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, \
    KC_LBRC,  KC_RBRC, KC_TAB,    KC_A,      KC_S,          KC_D,     KC_F,       KC_G,       KC_H,           KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, \
    KC_COMM,  KC_DOT,  KC_LSHIFT, KC_Z,      KC_X,          KC_C,     KC_V,       KC_B,       KC_N,           KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, \
    KC_ESC,   KC_NO,   KC_LCTRL,  KC_LALT,   KC_LGUI,       KC_SPACE, KC_SPACE,   KC_SPACE,   KC_ENTER,       KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, \
    KC_NO,    KC_NO,   KC_NO,     KC_LSHIFT, LGUI(KC_LSFT), KC_NO,    KC_GRAVE,   MO(1),      KC_LGUI,        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO \
),

[_LAYERUP] = LAYOUT( \
    KC_ESC,   KC_UP,   KC_GRAVE,  KC_6,      KC_7,          KC_8,     KC_9,       KC_0,       KC_BSPC,        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, \
    KC_LEFT,  KC_DOWN, KC_RIGHT,  KC_NO,     KC_NO,         KC_LBRC,  KC_RBRC,    KC_NO,      KC_NO,          KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, \
    KC_LBRC,  KC_RBRC, KC_TAB,    KC_NO,     KC_NO,         KC_COMM,  KC_DOT,     KC_NO,      KC_NO,          KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, \
    KC_COMM,  KC_DOT,  KC_LSHIFT, KC_NO,     KC_NO,         KC_NO,    KC_NO,      KC_NO,      KC_NO,          KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, \
    KC_ESC,   KC_NO,   KC_LCTRL,  KC_LALT,   KC_LGUI,       KC_SPACE, KC_SPACE,   KC_SPACE,   KC_ENTER,       KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, \
    KC_NO,    KC_NO,   KC_NO,     KC_LSHIFT, LGUI(KC_LSFT), KC_NO,    KC_NO,      KC_NO,      KC_LGUI,        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO \
)
};
