/**
 *
 * Rene's Keymap
 * RGB - 207,155,103
 *
 */

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    //  ESC      F1       F2       F3       F4       F5       F6       F7       F8       F9       F10      F11      F12	     Prt                Rotary(Mute)
    //  ~        1        2        3        4        5        6        7        8        9        0         -       (=)	     BackSpc            Del
    //  Tab      Q        W        E        R        T        Y        U        I        O        P        [        ]        \                  PgUp
    //  Caps     A        S        D        F        G        H        J        K        L        ;        "                 Enter              PgDn
    //  Shift_L           Z        X        C        V        B        N        M        ,        .        ?                 Shift_R  Up        End
    //  Ctrl_L   Alt_L    CMD_L                               SPACE                               CMD_R        FN   Ctrl_R   Left     Down      Right

  [0] = LAYOUT(
        KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_PSCR,           KC_MUTE,
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,           KC_DEL,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,           KC_PGUP,
        KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,            KC_PGDN,
        KC_LSFT,          KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,          KC_RSFT, KC_UP,    KC_END,
        KC_LCTL, KC_LALT, KC_LGUI,                            KC_SPC,                             KC_RGUI, MO(1),   KC_RCTL, KC_LEFT, KC_DOWN,  KC_RGHT
  ),

  [1] = LAYOUT(
        _______, KC_MYCM, KC_WHOM, KC_CALC, KC_MSEL, KC_MPRV, KC_MNXT, KC_MPLY, KC_MSTP, KC_MUTE, KC_VOLD, KC_VOLU, _______, _______,           _______,
        _______, RGB_TOG, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,           KC_MPLY,
        _______, _______, RGB_VAI, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, RESET,             KC_MFFD,
        _______, _______, RGB_VAD, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,           KC_MRWD,
        _______,          _______, RGB_HUI, _______, _______, _______, NK_TOGG, _______, _______, _______, _______,          _______, RGB_MOD,  _______,
        _______, _______, _______,                            _______,                            _______, _______, _______, RGB_SPD, RGB_RMOD, RGB_SPI
  ),

  [2] = LAYOUT(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,           _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,           _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,           _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,           _______,
        _______,          _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,  _______, _______,
        _______, _______, _______,                            _______,                            _______, _______, _______, _______,  _______, _______
  ),

  [3] = LAYOUT(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,           _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,           _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,           _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,           _______,
        _______,          _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,  _______, _______,
        _______, _______, _______,                            _______,                            _______, _______, _______, _______,  _______, _______
  ),
};

#ifdef ENCODER_ENABLE
  bool encoder_update_user(uint8_t index, bool clockwise) {
    if (clockwise) {
      tap_code(KC_VOLU);
    } else {
      tap_code(KC_VOLD);
    }
    return true;
  }
#endif //ENCODER_ENABLE

#ifdef RGB_MATRIX_ENABLE
  void rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {

    switch(get_highest_layer(layer_state)){
      case 0:
        //Layer 1
        rgb_matrix_set_color_all(207,155,103);
        break;

      case 1:
        rgb_matrix_set_color_all(207,155,103);
        break;

      case 2:
        rgb_matrix_set_color_all(207,155,103);
        break;


      case 3:
        rgb_matrix_set_color_all(207,155,103);
        break;

      default:
        break;
    }
  }
#endif // RGB_MATRIX_ENABLE
