#include QMK_KEYBOARD_H

#define RGB_LAYER_INDICATOR RGB_RED

enum layers {
    _BASE = 0,
    _DEV,
    _NUM,
    _MISC,
    _EMPTY,
};

const uint8_t layer_to_led[] = {
    [_BASE] = 0,
    [_DEV] = 1,
    [_MISC] = 2,
};

enum unicode_names {
    DE_AE = 0,
    DE_AE_CAP,
    DE_OE,
    DE_OE_CAP,
    DE_UE,
    DE_UE_CAP,
    DE_SS,
};

const uint32_t PROGMEM unicode_map[] = {
    [DE_AE] = 0x00E4,
    [DE_AE_CAP] = 0x00C4,
    [DE_OE] = 0x00F6,
    [DE_OE_CAP] = 0x00D6,
    [DE_UE] = 0x00FC,
    [DE_UE_CAP] = 0x00DC,
    [DE_SS] = 0x00DF,
};

#define CK_ESC MT(MOD_LCTL, KC_ESC)
#define CK_ENT MT(MOD_RCTL, KC_ENT)
#define CK_MISC MO(_MISC)
#define CK_SPC LT(_DEV, KC_SPC)

#define CK_AE XP(DE_AE, DE_AE_CAP)
#define CK_OE XP(DE_OE, DE_OE_CAP)
#define CK_UE XP(DE_UE, DE_UE_CAP)
#define CK_SS X(DE_SS)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT_65_ansi(
        KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC, KC_DEL,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS, KC_HOME,
        CK_ESC,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          CK_ENT,  KC_PGUP,
        KC_LSFT,          KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, KC_UP,   KC_PGDN,
        KC_LCTL, CK_MISC, KC_LALT,                            CK_SPC,                    CK_MISC, KC_RALT, KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT
    ),
    [_DEV] = LAYOUT_65_ansi(
        _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  _______, _______,
        _______, _______, _______, _______, _______, _______, KC_HASH, KC_LPRN, KC_RPRN, KC_MINS, KC_PLUS, _______, _______, _______, _______,
        _______, KC_AT,   _______, _______, _______, _______, KC_GRV,  KC_LCBR, KC_RCBR, KC_UNDS, KC_EQL,  _______,          _______, _______,
        _______,          _______, _______, _______, _______, _______, KC_ASTR, KC_LBRC, KC_RBRC, _______, KC_EXLM, _______, _______, _______,
        _______, _______, _______,                            _______,                   _______, _______, _______, _______, _______, _______
    ),
    [_NUM] = LAYOUT_65_ansi(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, 
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______,
        _______,          _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______,                            _______,                   _______, _______, _______, _______, _______, _______
    ),
    [_MISC] = LAYOUT_65_ansi(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, RESET,   EEP_RST,
        _______, RGB_TOG, RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI, RGB_SPI, CK_UE,   _______, CK_OE,   _______, CK_UE,   _______, _______, _______, 
        _______, CK_AE,   CK_SS,   _______, _______, _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, CK_OE,   CK_AE,            _______, _______,
        _______,          _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_VOLU, _______,
        _______, _______, _______,                            _______,                   _______, _______, _______, KC_MUTE, KC_VOLD, _______
    ),
    [_EMPTY] = LAYOUT_65_ansi(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, 
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______,
        _______,          _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______,                            _______,                   _______, _______, _______, _______, _______, _______
    )
};

/* void rgb_matrix_indicators_user(void) { */
/*     rgb_matrix_set_color(layer_to_led[biton32(layer_state)], RGB_LAYER_INDICATOR); */
/* } */
