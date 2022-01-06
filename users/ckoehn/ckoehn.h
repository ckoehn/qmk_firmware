#pragma once

#include QMK_KEYBOARD_H
#include "wrappers.h"

enum layers {
    _BASE = 0,
    _DEV,
    _MISC,
    _NUM,
    _EMPTY,
};

#define CK_A MT(MOD_LSFT, KC_A)
#define CK_E MT(MOD_LALT, KC_E)
#define CK_I MT(MOD_RALT, KC_I)
#define CK_LSPC LT(_DEV, KC_SPC)
#define CK_O LT(_NUM, KC_O)
#define CK_R MT(MOD_LCTL, KC_R)
#define CK_RSPC LT(_DEV, KC_ESC)
#define CK_SCLN MT(MOD_RSFT, KC_SCLN)
#define CK_TAB LT(_MISC, KC_TAB)
#define CK_U MT(MOD_RCTL, KC_U)
#define CK_W LT(_NUM, KC_W)

// Deprecated
#define CK_ENT MT(MOD_RCTL, KC_ENT)
#define CK_ESC MT(MOD_LCTL, KC_ESC)

enum unicode_names {
    DE_AE = 0,
    DE_AE_CAP,
    DE_OE,
    DE_OE_CAP,
    DE_UE,
    DE_UE_CAP,
    DE_SS,
    DE_EUR,
};

#define CK_AE XP(DE_AE, DE_AE_CAP)
#define CK_OE XP(DE_OE, DE_OE_CAP)
#define CK_UE XP(DE_UE, DE_UE_CAP)
#define CK_SS X(DE_SS)
#define CK_EUR X(DE_EUR)
