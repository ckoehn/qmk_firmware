#include QMK_KEYBOARD_H

void keyboard_post_init_kb(void) {
  rgblight_set_effect_range(3, 18);
  rgblight_sethsv_range(HSV_OFF, 0, 3);

  keyboard_post_init_user();
}
