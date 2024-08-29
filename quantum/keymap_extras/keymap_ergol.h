// Copyright 2024 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

/*******************************************************************************
  88888888888 888      d8b                .d888 d8b 888               d8b
      888     888      Y8P               d88P"  Y8P 888               Y8P
      888     888                        888        888
      888     88888b.  888 .d8888b       888888 888 888  .d88b.       888 .d8888b
      888     888 "88b 888 88K           888    888 888 d8P  Y8b      888 88K
      888     888  888 888 "Y8888b.      888    888 888 88888888      888 "Y8888b.
      888     888  888 888      X88      888    888 888 Y8b.          888      X88
      888     888  888 888  88888P'      888    888 888  "Y8888       888  88888P'
                                                        888                 888
                                                        888                 888
                                                        888                 888
     .d88b.   .d88b.  88888b.   .d88b.  888d888 8888b.  888888 .d88b.   .d88888
    d88P"88b d8P  Y8b 888 "88b d8P  Y8b 888P"      "88b 888   d8P  Y8b d88" 888
    888  888 88888888 888  888 88888888 888    .d888888 888   88888888 888  888
    Y88b 888 Y8b.     888  888 Y8b.     888    888  888 Y88b. Y8b.     Y88b 888
     "Y88888  "Y8888  888  888  "Y8888  888    "Y888888  "Y888 "Y8888   "Y88888
         888
    Y8b d88P
     "Y88P"
*******************************************************************************/

#pragma once
#include "keycodes.h"
// clang-format off

// Aliases
#define EL_GRV  KC_GRV  // `
#define EL_1    KC_1    // 1
#define EL_2    KC_2    // 2
#define EL_3    KC_3    // 3
#define EL_4    KC_4    // 4
#define EL_5    KC_5    // 5
#define EL_6    KC_6    // 6
#define EL_7    KC_7    // 7
#define EL_8    KC_8    // 8
#define EL_9    KC_9    // 9
#define EL_0    KC_0    // 0
#define EL_SLHS KC_MINS // /
#define EL_EQL  KC_EQL  // =
#define EL_Q    KC_Q    // Q
#define EL_C    KC_W    // C
#define EL_O    KC_E    // O
#define EL_P    KC_R    // P
#define EL_W    KC_T    // W
#define EL_J    KC_Y    // J
#define EL_M    KC_U    // M
#define EL_D    KC_I    // D
#define EL_DEAD KC_O    // *** (dead)
#define EL_Y    KC_P    // Y
#define EL_LBRC KC_LBRC // [
#define EL_RBRC KC_RBRC // ]
#define EL_A    KC_A    // A
#define EL_S    KC_S    // S
#define EL_E    KC_D    // E
#define EL_N    KC_F    // N
#define EL_F    KC_G    // F
#define EL_L    KC_H    // L
#define EL_R    KC_J    // R
#define EL_T    KC_K    // T
#define EL_I    KC_L    // I
#define EL_U    KC_SCLN // U
#define EL_QUOT KC_QUOT // '
#define EL_BSLS KC_NUHS // (backslash)
#define EL_LABK KC_NUBS // <
#define EL_Z    KC_Z    // Z
#define EL_X    KC_X    // X
#define EL_MINS KC_C    // -
#define EL_V    KC_V    // V
#define EL_B    KC_B    // B
#define EL_DOT  KC_N    // .
#define EL_H    KC_M    // H
#define EL_G    KC_COMM // G
#define EL_COMM KC_DOT  // ,
#define EL_K    KC_SLSH // K
#define EL_TILD S(EL_GRV)  // ~
#define EL_EURO S(EL_1)    // €
#define EL_LDAQ S(EL_2)    // «
#define EL_RDAQ S(EL_3)    // »
#define EL_DLR  S(EL_4)    // $
#define EL_PERC S(EL_5)    // %
#define EL_CIRC S(EL_6)    // ^
#define EL_AMPR S(EL_7)    // &
#define EL_ASTR S(EL_8)    // *
#define EL_HASH S(EL_9)    // #
#define EL_AT   S(EL_0)    // @
#define EL_UNDS S(EL_SLHS) // _
#define EL_PLUS S(EL_EQL)  // +
#define EL_EXLM S(EL_DEAD) // !
#define EL_LCBR S(EL_LBRC) // {
#define EL_RCBR S(EL_RBRC) // }
#define EL_DQUO S(EL_QUOT) // "
#define EL_PIPE S(EL_BSLS) // |
#define EL_RABK S(EL_LABK) // >
#define EL_QUES S(EL_MINS) // ?
#define EL_COLN S(EL_DOT)  // :
#define EL_SCLN S(EL_COMM) // ;
#define BP_NBSP S(KC_SPC)  // (non-breaking space)

