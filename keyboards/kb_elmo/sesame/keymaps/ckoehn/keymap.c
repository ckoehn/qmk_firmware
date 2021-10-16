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

enum combo_events {
    JK_CTL = 0,
    DF_CTL,
    COMBO_LENGTH,
};
uint16_t COMBO_LEN = COMBO_LENGTH;

const uint16_t PROGMEM jk_combo[] = {KC_J, KC_K, COMBO_END};
const uint16_t PROGMEM df_combo[] = {KC_D, KC_F, COMBO_END};
combo_t key_combos[] = {
    [DF_CTL] = COMBO(df_combo, KC_LCTL),
    [JK_CTL] = COMBO(jk_combo, KC_RCTL),
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT_alice(
        _______, KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,
        _______, KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,
        _______, CK_ESC,  CK_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    CK_SCLN, KC_QUOT,          CK_ENT,
                 KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, _______,
                 KC_LCTL,          KC_LALT,          CK_SPC,           CK_MISC, CK_SPC,           KC_RALT,                   KC_RCTL
    ),
    [_DEV] = LAYOUT_alice(
        _______, _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,
        _______, _______, _______, _______, CK_EUR,  KC_CIRC, KC_TILD, KC_HASH, KC_LPRN, KC_RPRN, KC_MINS, KC_PLUS, _______, _______, KC_HOME,
        _______, _______, KC_AT,   KC_PIPE, KC_DLR,  KC_PERC, KC_AMPR, KC_GRV,  KC_LCBR, KC_RCBR, KC_UNDS, KC_EQL,  _______,          KC_PGUP,
                 _______, _______, _______, _______, _______, KC_BSLS, _______, KC_ASTR, KC_LBRC, KC_RBRC, _______, KC_EXLM, KC_PGDN, KC_PGDN,
                 _______,          _______,          _______,          _______, _______,          _______,                   KC_END
    ),
    [_MISC] = LAYOUT_alice(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, CK_UE,   _______, CK_OE,   _______, _______, _______, _______,
        _______, _______, CK_AE,   CK_SS,   _______, _______, _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______, _______,          _______,
                 _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
                 _______,          _______,          _______,          _______, _______,          _______,                   _______
    ),
    [_EMPTY] = LAYOUT_alice(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
                 _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
                 _______,          _______,          _______,          _______, _______,          _______,                   _______
    )
};
