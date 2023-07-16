#include "ckoehn.h"

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case CK_A:
        case CK_SCLN:
        case CK_LSPC:
        case CK_RSPC:
            return 150;
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
    JK_ENTER = 0,
    DF_TAB,
    UI_BSPC,
    COMBO_LENGTH,
};
uint16_t COMBO_LEN = COMBO_LENGTH;

const uint16_t PROGMEM df_combo[] = {KC_D, CK_F, COMBO_END};
const uint16_t PROGMEM jk_combo[] = {KC_J, KC_K, COMBO_END};
const uint16_t PROGMEM ui_combo[] = {CK_U, CK_I, COMBO_END};
const uint16_t PROGMEM er_combo[] = {CK_E, CK_R, COMBO_END};
/* const uint16_t PROGMEM uio_combo[] = {CK_U, CK_I, CK_O, COMBO_END}; */
combo_t key_combos[] = {
    [JK_ENTER] = COMBO(jk_combo, KC_ENT),
    [DF_TAB] = COMBO(df_combo, CK_TAB),
    [UI_BSPC] = COMBO(ui_combo, KC_BSPC),
};
