#include QMK_KEYBOARD_H
#include "sendstring_colemak.h"
#include "g/keymap_combo.h"
#include "split_util.h"

enum layers { _QWERTY, _COLEMAK, _SPECIALS, _NUMPAD };

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_COLEMAK] = LAYOUT_split_3x5_3(    KC_Q,    KC_W,          KC_F,          KC_P,          KC_G,        KC_J,         KC_L,    KC_U,           KC_Y,    KC_SCLN,
                                        KC_A,    KC_R,          KC_S,          KC_T,          KC_D,        KC_H,         KC_N,    KC_E,           KC_I,    KC_O,
                                        KC_Z,    KC_X,          KC_C,          KC_V,          KC_B,        KC_K,         KC_M,    KC_COMM,        KC_DOT,  KC_SLSH,
                                                                MO(_NUMPAD),   KC_LSFT,       KC_SPC,      KC_BSPC,      KC_LGUI, MO(_SPECIALS)
                                    ),

	[_QWERTY] = LAYOUT_split_3x5_3(     KC_Q,    KC_W,          KC_E,          KC_R,          KC_T,        KC_Y,         KC_U,    KC_I,           KC_O,    KC_P,
                                        KC_A,    KC_S,          KC_D,          KC_F,          KC_G,        KC_H,         KC_J,    KC_K,           KC_L,    KC_SCLN,
                                        KC_Z,    KC_X,          KC_C,          KC_V,          KC_B,        KC_N,         KC_M,    KC_COMM,        KC_DOT,  KC_SLSH,
                                                                MO(_NUMPAD),   KC_LSFT,       KC_SPC,      KC_BSPC,      KC_LGUI, MO(_SPECIALS)
                                    ),

	[_SPECIALS] = LAYOUT_split_3x5_3(   KC_TRNS, KC_TRNS,       KC_GRV,        KC_QUOT,       KC_TRNS,     TO(_COLEMAK), KC_TRNS, KC_UP,          KC_TRNS, KC_COLN,
                                        KC_ESC,  OSM(MOD_LALT), OSM(MOD_LCTL), OSM(MOD_LGUI), KC_TAB,      KC_TRNS,      KC_LEFT, KC_DOWN,        KC_RGHT, KC_PIPE,
                                        KC_EXLM, KC_AT,         KC_HASH,       KC_DLR,        KC_PERC,     KC_TRNS,      KC_TRNS, KC_TRNS,        KC_TRNS, KC_QUES,
                                                                KC_TRNS,       KC_TRNS,       KC_TRNS,     KC_TRNS,      KC_TRNS, KC_TRNS
                                    ),

	[_NUMPAD] = LAYOUT_split_3x5_3(     KC_TRNS, KC_LBRC,       KC_RBRC,       KC_TRNS,       TO(_QWERTY), KC_7,         KC_8,    KC_9,           KC_ASTR, KC_PSLS,
                                        KC_LPRN, KC_RPRN,       KC_LCBR,       KC_RCBR,       KC_TRNS,     KC_4,         KC_5,    KC_6,           KC_0,    KC_PLUS,
                                        KC_TRNS, KC_TRNS,       KC_TRNS,       KC_BSLS,       KC_TRNS,     KC_1,         KC_2,    KC_3,           KC_MINS, KC_PEQL,
                                                                KC_TRNS,       KC_TRNS,       KC_TRNS,     KC_TRNS,      KC_TRNS, KC_TRNS
                                    )
};
