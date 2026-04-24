// Copyright 2022 Matthew Dews (@matthew-dews)
// SPDX-License-Identifier: GPL-2.0-or-later
#include QMK_KEYBOARD_H

void keyboard_post_init_user(void) {
  debug_enable=true;
  debug_matrix=true;
}

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT(
		C(S(KC_ESC)), KC_GRV,  KC_BSLS, KC_PAST,  KC_PMNS,
        G(S(KC_S)),   KC_7,    KC_8,    KC_9,     KC_PPLS,
        C(KC_S),      KC_4,    KC_5,    KC_6,
		KC_LCAP,      KC_1,    KC_2,    KC_3,     
		MS_BTN3,      KC_0,    KC_DOT,	KC_PENT,
		MS_BTN1,      MS_BTN2, MS_BTN1
    ),

  [1] = LAYOUT(
		G(S(KC_S)),   KC_GRV,  KC_BSLS, KC_PAST,  KC_PMNS,
        C(S(KC_ESC)), KC_7,    KC_8,    KC_9,     KC_PPLS,
        C(KC_S),      KC_4,    KC_5,    KC_6,
		KC_LCAP,      KC_1,    KC_2,    KC_3,     
		MS_BTN3,      KC_0,    KC_DOT,	KC_PENT,
		MS_BTN1,      MS_BTN2, MS_BTN1
    )
};

const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][1] = {
  [0] =   { ENCODER_CCW_CW(MS_WHLU, MS_WHLD) },
  [1] =   { ENCODER_CCW_CW(MS_VOLD, MS_VOLU) }
};
