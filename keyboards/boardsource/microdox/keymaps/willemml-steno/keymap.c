#include QMK_KEYBOARD_H
#include "keymap_steno.h"
#include "split_util.h"

enum layers { _PLOVER };

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_PLOVER] = LAYOUT_split_3x5_3(     STN_N1,   STN_N2,          STN_N3,          STN_N4,          STN_N5,         STN_N6,         STN_N7,    STN_N8,           STN_N9,    STN_NC,
                                        STN_S1,   STN_TL,          STN_PL,          STN_HL,          STN_ST1,        STN_FR,         STN_PR,    STN_LR,           STN_TR,    STN_DR,
                                        STN_S2,   STN_KL,          STN_WL,          STN_RL,          STN_ST2,        STN_RR,         STN_BR,    STN_GR,           STN_SR,    STN_ZR,
                                                                   STN_NA,          STN_A,           STN_O,          STN_E,          STN_U,     STN_NB
                                    )
};

void matrix_init_user() {
  steno_set_mode(STENO_MOSTDE_GEMINI);
}

