#include QMK_KEYBOARD_H

enum layer_number {
  _BASE_BONE = 0,
  _FIRST_RAISED = 1,
  _SECOND_RAISED = 2,
  _ADJUST,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* BASEBONE
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * | ESC  |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |  `   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  |   J  |   D  |   U  |   A  |   X  |                    |   P  |   H  |   L  |   M  |   W  |  ß   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |LSHIFT|   C  |   T  |   I  |   E  |   O  |-------.    ,-------|   B  |   N  |   R  |   S  |   G  |  Q   |
 * |------+------+------+------+------+------| L-ALT |    |   ;   |------+------+------+------+------+------|
 * |LGUI  |   F  |   V  |   Ü  |   Ä  |   Ö  |-------|    |-------|   Y  |   Z  |   ,  |   .  |   K  |RShift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                  |2.Raise|1Raise|L-CTRL| /Space  /       \Enter \  |BackSP|1Raise|2.Raise|
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */

 [_BASE_BONE] = LAYOUT(
  KC_ESC,   KC_1,   KC_2,    KC_3,    KC_4,    KC_5,                              KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_GRV,
  KC_TAB,   KC_J,   KC_D,    KC_U,    KC_A,    KC_X,                              KC_P,    KC_H,    KC_L,    KC_M,    KC_W,    KC_MINS,
  KC_LSFT,  KC_C,   KC_T,    KC_I,    KC_E,    KC_O,                              KC_B,    KC_N,    KC_R,    KC_S,    KC_G,    KC_Q,
  KC_LGUI,  KC_F,   KC_V,    KC_LBRC, KC_QUOT, KC_SCLN, KC_LALT,    LSFT(KC_COMM),KC_Z,    KC_Y,    KC_COMM, KC_DOT,  KC_K,    KC_RSFT,
        MO(_SECOND_RAISED), MO(_FIRST_RAISED), KC_LCTL, KC_SPC,     KC_ENT,    KC_BSPC, MO(_FIRST_RAISED), MO(_SECOND_RAISED)
),



/* LOWER
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |   ¹  |   ²  |  ³   |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  |      |  _   |  [   |  ]   |  ^   |                    |   !  |   <  |   >  |   =  |   &  |  °   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |LSHIFT|   \  |   /  |   {  |   }  |   *  |-------.    ,-------|   ?  |   (  |   )  |   -  |   :  |  @   |
 * |------+------+------+------+------+------|       |    |       |------+------+------+------+------+------|
 * | LGUI |   #  |   $  |   |  |   ~  |  `   |-------|    |-------|   +  |   %  |   "  |   '  |   ;  |  §   |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                  |2.Raise|1Raise|L-CTRL| /Space  /       \Enter \  |BackSP|1Raise|2.Raise|
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */
[_FIRST_RAISED] = LAYOUT(
  _______, KC_UNDS, RALT(KC_2), RALT(KC_3), _______, _______,                               _______, _______, _______,_______, _______, _______,
  KC_TAB,  _______, LSFT(KC_SLSH), RALT(KC_8), RALT(KC_9), KC_GRV,                          LSFT(KC_1),KC_NUBS,	LSFT(KC_NUBS), LSFT(KC_0),LSFT(KC_6), LSFT(KC_GRV),
  KC_LSFT, RALT(KC_MINS),LSFT(KC_7),RALT(KC_7),RALT(KC_0), LSFT(KC_RBRC),                   LSFT(KC_MINS),LSFT(KC_8),LSFT(KC_9),KC_SLSH, LSFT(KC_DOT), RALT(KC_Q),
  KC_LGUI, KC_NUHS,LSFT(KC_4),RALT(KC_NUBS), RALT(KC_RBRC), LSFT(KC_EQL), _______, _______, KC_RBRC,LSFT(KC_5), LSFT(KC_2), LSFT(KC_NUHS), 	LSFT(KC_COMM), LSFT(KC_3),
                             _______, _______, _______, _______, _______,  _______, _______, _______
),







/* RAISE
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |SLEEP |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |PageUP|BackSp|  UP  | DEL  |PageDown|                  |      |   7  |   8  |   9  |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      | POS1 | LEFT | DOWN |RIGHT | END  |-------.    ,-------|      |   4  |   5  |   6  |      |      |
 * |------+------+------+------+------+------|       |    |       |------+------+------+------+------+------|
 * | MUTE | Vol -| Vol +|Backw.|Fordw.|P/P   |-------|    |-------|      |   1  |   2  |   3  |      |NUMLOCK|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                  |2.Raise|1Raise|L-CTRL| /Space  /       \  0   \  |BackSP|1Raise|2.Raise|
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */

[_SECOND_RAISED] = LAYOUT(
  KC_SLEP, _______, _______, _______, _______, _______,                     _______, _______, _______, _______, _______, _______,
  _______, KC_PGUP, KC_BSPC, KC_UP,   KC_DEL,  KC_PGDN,                     _______, KC_P7,   KC_P8,   KC_P9,   _______, _______,
  _______, KC_HOME, KC_LEFT, KC_DOWN, KC_RGHT, KC_END,                      _______, KC_P4,   KC_P5,   KC_P6,   _______, _______,
  KC_MUTE, KC_VOLD, KC_VOLU, KC_MPRV, KC_MNXT, KC_MPLY,  _______, _______,  _______, KC_P1,   KC_P2,   KC_P3,   _______, KC_NUM,
                             _______, _______, _______,  _______, KC_P0  ,  _______, _______, _______
),
/* ADJUST
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------.    ,-------|      |      |RGB ON| HUE+ | SAT+ | VAL+ |
 * |------+------+------+------+------+------|       |    |       |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------|    |-------|      |      | MODE | HUE- | SAT- | VAL- |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | LAlt | LGUI |LOWER | /Space  /       \Enter \  |RAISE |BackSP| RGUI |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */
  [_ADJUST] = LAYOUT(
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                             _______, _______, _______, _______, _______,  _______, _______, _______
  )
};

layer_state_t layer_state_set_user(layer_state_t state) {
  return update_tri_layer_state(state, _FIRST_RAISED, _SECOND_RAISED, _ADJUST);
}

//SSD1306 OLED update loop, make sure to enable OLED_ENABLE=yes in rules.mk
#ifdef OLED_ENABLE

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
  if (!is_keyboard_master())
    return OLED_ROTATION_180;  // flips the display 180 degrees if offhand
  return rotation;
}

// When you add source files to SRC in rules.mk, you can use functions.
const char *read_layer_state(void);
const char *read_logo(void);
void set_keylog(uint16_t keycode, keyrecord_t *record);
const char *read_keylog(void);
const char *read_keylogs(void);

// const char *read_mode_icon(bool swap);
// const char *read_host_led_state(void);
// void set_timelog(void);
// const char *read_timelog(void);

bool oled_task_user(void) {
  if (is_keyboard_master()) {
    // If you want to change the display of OLED, you need to change here
    oled_write_ln(read_layer_state(), false);
    oled_write_ln(read_keylog(), false);
    oled_write_ln(read_keylogs(), false);
    //oled_write_ln(read_mode_icon(keymap_config.swap_lalt_lgui), false);
    //oled_write_ln(read_host_led_state(), false);
    //oled_write_ln(read_timelog(), false);
  } else {
    oled_write(read_logo(), false);
  }
    return false;
}
#endif // OLED_ENABLE

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (record->event.pressed) {
#ifdef OLED_ENABLE
    set_keylog(keycode, record);
#endif
    // set_timelog();
  }
  return true;
}
