#include QMK_KEYBOARD_H

enum layers {
    _BASE = 0,
    _DEV,
    _MISC,
    _EMPTY,
};

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

const uint32_t PROGMEM unicode_map[] = {
    [DE_AE] = 0x00E4,
    [DE_AE_CAP] = 0x00C4,
    [DE_OE] = 0x00F6,
    [DE_OE_CAP] = 0x00D6,
    [DE_UE] = 0x00FC,
    [DE_UE_CAP] = 0x00DC,
    [DE_SS] = 0x00DF,
    [DE_EUR] = 0x20AC,
};

#define CK_A MT(MOD_LSFT, KC_A)
#define CK_ENT MT(MOD_RCTL, KC_ENT)
#define CK_ESC MT(MOD_LCTL, KC_ESC)
#define CK_MISC MO(_MISC)
#define CK_SCLN MT(MOD_RSFT, KC_SCLN)
#define CK_SPC LT(_DEV, KC_SPC)

#define CK_AE XP(DE_AE, DE_AE_CAP)
#define CK_OE XP(DE_OE, DE_OE_CAP)
#define CK_UE XP(DE_UE, DE_UE_CAP)
#define CK_SS X(DE_SS)
#define CK_EUR X(DE_EUR)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT_68_ansi_split_space_split_rshift(
        KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC, KC_INS, KC_PGUP,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS, KC_DEL, KC_PGDN,
        CK_ESC,  CK_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    CK_SCLN, KC_QUOT,          CK_ENT,
        KC_LSFT,          KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, KC_RSFT, KC_UP,
        KC_LCTL, KC_LGUI, KC_LALT,          CK_SPC,           CK_MISC,          CK_SPC,           KC_RALT, KC_RGUI, KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT
    ),
    [_DEV] = LAYOUT_68_ansi_split_space_split_rshift(
        _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
        _______,          _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______,          _______,          _______,          _______,          _______, _______, _______, _______, _______, _______
    ),
    [_MISC] = LAYOUT_68_ansi_split_space_split_rshift(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, RESET,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, EEP_RST,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
        _______,          _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______,          _______,          _______,          _______,          _______, _______, _______, _______, _______, _______
    ),
    [_EMPTY] = LAYOUT_68_ansi_split_space_split_rshift(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
        _______,          _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______,          _______,          _______,          _______,          _______, _______, _______, _______, _______, _______
    ),
};
