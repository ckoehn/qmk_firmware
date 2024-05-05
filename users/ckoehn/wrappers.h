#pragma once
#include "ckoehn.h"

#define LAYOUT_wrapper(...) LAYOUT(__VA_ARGS__)
#define CK_LAYOUT_WRAPPER(...) CK_LAYOUT(__VA_ARGS__)

#define ___________________________________________ _______, _______, _______, _______, _______

#define _________________QWERTY_L1_________________ KC_Q,    CK_W,    CK_E,    CK_R,    KC_T
#define _________________QWERTY_L2_________________ CK_A,    KC_S,    KC_D,    CK_F,    KC_G
#define _________________QWERTY_L3_________________ KC_Z,    KC_X,    KC_C,    KC_V,    KC_B

#define _________________QWERTY_R1_________________ KC_Y,    CK_U,    CK_I,    CK_O,    KC_P
#define _________________QWERTY_R2_________________ KC_H,    KC_J,    KC_K,    KC_L,    CK_SCLN
#define ____________QWERTY_R3S____________          KC_N,    KC_M,    KC_COMM, KC_DOT
#define _________________QWERTY_R3_________________ ____________QWERTY_R3S____________, _______

#define ___________________DEV_L1__________________ KC_QUES, KC_EXLM, CK_EUR,  KC_DQUO, KC_TILD
#define ___________________DEV_L2__________________ KC_AT,   KC_SLSH, KC_DLR,  KC_QUOT, KC_AMPR
#define ___________________DEV_L3__________________ _______, KC_PIPE, KC_CIRC, KC_PERC, KC_BSLS

#define ___________________DEV_R1__________________ KC_HASH, KC_LPRN, KC_RPRN, KC_MINS, KC_PLUS
#define ___________________DEV_R2__________________ KC_GRV,  KC_LCBR, KC_RCBR, KC_UNDS, KC_EQL
#define ______________DEV_R3S_____________          KC_ASTR, KC_LBRC, KC_RBRC, _______
#define ___________________DEV_R3__________________ ______________DEV_R3S_____________, _______

#define ___________________NUM_L1__________________ _______, _______, _______, _______, _______
#define ___________________NUM_L2__________________ _______, _______, _______, _______, _______
#define ___________________NUM_L3__________________ ___________________________________________

#define ___________________NUM_R1__________________ _______, KC_7,    KC_8,    KC_9,    _______
#define ___________________NUM_R2__________________ KC_0,    KC_1,    KC_2,    KC_3,    _______
#define _____________NUM_R3S______________          _______, KC_4,    KC_5,    KC_6
#define ___________________NUM_R3__________________ _____________NUM_R3S______________, _______

#define __________________MISC_L1__________________ _______, _______, CK_AE,   _______, _______
#define __________________MISC_L2__________________ _______, CK_SS,   _______, CK_NAV,  _______
#define __________________MISC_L3__________________ _______, _______, _______, _______, _______

#define __________________MISC_R1__________________ _______, CK_UE,   _______, CK_OE,   _______
#define __________________MISC_R2__________________ KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______
#define _____________MISC_R3S_____________          _______, _______, _______, _______
#define __________________MISC_R3__________________ _____________MISC_R3S_____________, ______

#define ___________________NAV_L1__________________ RGB_TOG, RGB_MOD, RGB_RMOD, _______, _______
#define ___________________NAV_L2__________________ RGB_VAI, RGB_VAD, _______, _______, _______
#define ___________________NAV_L3__________________ _______, _______, _______, _______, _______

#define ___________________NAV_R1__________________ _______, _______, _______, _______, _______
#define ___________________NAV_R2__________________ KC_HOME, KC_PGDN, KC_PGUP, KC_END,  _______
#define ______________NAV_R3S_____________          _______, _______, _______, _______
#define ___________________NAV_R3__________________ ______________NAV_R3S_____________, _______

#define __________________GAME_L1__________________ KC_Q,    KC_W,    KC_E,    KC_R,    KC_T
#define __________________GAME_L2__________________ KC_A,    KC_S,    KC_D,    KC_F,    KC_G
#define __________________GAME_L3__________________ KC_Z,    KC_X,    KC_C,    KC_V,    KC_B

#define __________________GAME_R1__________________ KC_Y,    KC_U,    KC_I,    KC_O,    KC_P
#define __________________GAME_R2__________________ KC_H,    KC_J,    KC_K,    KC_L,    KC_ENT
#define ____________GAME_R3S______________          KC_N,    KC_M,    KC_COMM, KC_DOT
#define __________________GAME_R3__________________ ____________GAME_R3S______________, _______

#define ________QWERTY_SPC_______ CK_LSPC, CK_TAB,  CK_RSPC
#define _________DEV_SPC_________ KC_ENT,  _______, KC_BSPC
#define _________MISC_SPC________ _______, _______, KC_DEL
#define _________GAME_SPC________ KC_SPC, KC_TAB,  CK_RSPC

#define __QWERTY_SPC_2__ CK_LSPC, CK_RSPC
#define ___DEV_SPC_2____ KC_ENT,  KC_BSPC
#define ___MISC_SPC_2___ _______, KC_DEL
#define ___GAME_SPC_2___ KC_SPC,  CK_RSPC
