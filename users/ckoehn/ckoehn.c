#include "ckoehn.h"

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case CK_A:
        case CK_SCLN:
            return 160;
        default:
            return TAPPING_TERM;
    }
}

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

enum combo_events {
    JK_CTL = 0,
    DF_ESC,
    COMBO_LENGTH,
};
uint16_t COMBO_LEN = COMBO_LENGTH;

const uint16_t PROGMEM jk_combo[] = {KC_J, KC_K, COMBO_END};
const uint16_t PROGMEM df_combo[] = {KC_D, KC_F, COMBO_END};
combo_t key_combos[] = {
    [DF_ESC] = COMBO(df_combo, KC_ESC),
    [JK_CTL] = COMBO(jk_combo, KC_RCTL),
};
