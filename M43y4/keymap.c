#include QMK_KEYBOARD_H
#include "version.h"
#define MOON_LED_LEVEL LED_LEVEL
#define ML_SAFE_RANGE SAFE_RANGE

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
  HSV_0_255_255,
  HSV_74_255_255,
  HSV_169_255_255,
};



enum tap_dance_codes {
  DANCE_0,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    KC_ESCAPE,      KC_1,           KC_2,           KC_3,           KC_4,           KC_5,                                           KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_BSPC,        
    KC_TRANSPARENT, KC_Q,           KC_W,           LT(5,KC_E),     KC_R,           KC_T,                                           KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_BSLS,        
    KC_TAB,         MT(MOD_LGUI, KC_A),MT(MOD_LALT, KC_S),MT(MOD_LCTL, KC_D),MT(MOD_LSFT, KC_F),KC_G,                                           KC_H,           MT(MOD_RSFT, KC_J),MT(MOD_RCTL, KC_K),MT(MOD_RALT, KC_L),MT(MOD_RGUI, KC_SCLN),KC_QUOTE,       
    TD(DANCE_0),    KC_Z,           KC_X,           KC_C,           LT(1,KC_V),     KC_B,                                           KC_N,           LT(4,KC_M),     KC_COMMA,       KC_DOT,         KC_SLASH,       KC_ENTER,       
                                                    LT(2,KC_ESCAPE),OSM(MOD_LSFT),                                  MEH_T(KC_SPACE),OSL(3)
  ),
  [1] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_KP_MINUS,    KC_7,           KC_8,           KC_9,           KC_KP_SLASH,    KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_LEFT_GUI,    KC_LEFT_ALT,    KC_LEFT_CTRL,   KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_KP_PLUS,     KC_4,           KC_5,           KC_6,           KC_ASTR,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_DOT,         KC_1,           KC_2,           KC_3,           KC_EQUAL,       KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_DELETE,      KC_0
  ),
  [2] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_PAGE_UP,     KC_UP,          KC_PGDN,        KC_TRANSPARENT,                                 KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, MT(MOD_LGUI, KC_HOME),MT(MOD_LALT, KC_LEFT),MT(MOD_LCTL, KC_DOWN),MT(MOD_LSFT, KC_RIGHT),KC_END,                                         KC_NO,          KC_RIGHT_SHIFT, KC_RIGHT_CTRL,  KC_RIGHT_ALT,   KC_RIGHT_GUI,   KC_INSERT,      
    KC_TRANSPARENT, QK_LLCK,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_EXLM,        KC_AT,          KC_HASH,        KC_DLR,         KC_PERC,                                        KC_CIRC,        KC_AMPR,        KC_ASTR,        KC_LPRN,        KC_RPRN,        KC_TRANSPARENT, 
    KC_GRAVE,       KC_TILD,        KC_MINUS,       KC_LCBR,        KC_RCBR,        KC_PERC,                                        KC_TRANSPARENT, KC_TRANSPARENT, KC_ASTR,        KC_UNDS,        KC_TRANSPARENT, KC_PIPE,        
    KC_TRANSPARENT, KC_AT,          KC_PLUS,        KC_LPRN,        KC_RPRN,        KC_EQUAL,                                       KC_CIRC,        KC_COLN,        KC_EXLM,        KC_DLR,         KC_BSLS,        KC_DQUO,        
    KC_TRANSPARENT, QK_LLCK,        KC_HASH,        KC_LBRC,        KC_RBRC,        LSFT(KC_INSERT),                                KC_UP,          KC_LEFT,        KC_LABK,        KC_RABK,        KC_QUES,        KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_MS_WH_LEFT,  KC_MS_WH_DOWN,  KC_MS_UP,       KC_MS_WH_UP,    KC_MS_WH_RIGHT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_BTN3,                                     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_MS_BTN1,     KC_MS_BTN2,                                     KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [5] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LALT(LCTL(KC_DELETE)),
    KC_TRANSPARENT, LGUI(LSFT(KC_2)),KC_APPLICATION, KC_TRANSPARENT, LGUI(KC_GRAVE), KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_F4,          KC_F5,          KC_F6,          KC_F11,         KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_F1,          KC_F2,          KC_F3,          KC_F12,         KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [6] = LAYOUT_voyager(
    RGB_TOG,        TOGGLE_LAYER_COLOR,RGB_MODE_FORWARD,RGB_SLD,        RGB_VAD,        RGB_VAI,                                        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, QK_BOOT,        
    KC_TRANSPARENT, KC_TRANSPARENT, KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,KC_AUDIO_MUTE,  KC_TRANSPARENT,                                 KC_PAGE_UP,     KC_HOME,        KC_UP,          KC_END,         KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_MEDIA_PREV_TRACK,KC_MEDIA_NEXT_TRACK,KC_MEDIA_STOP,  KC_MEDIA_PLAY_PAUSE,KC_TRANSPARENT,                                 KC_PGDN,        KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, HSV_0_255_255,  HSV_74_255_255, HSV_169_255_255,                                KC_TRANSPARENT, LCTL(LSFT(KC_TAB)),LCTL(KC_TAB),   KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [7] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_EXLM,        KC_AT,          KC_HASH,        KC_DLR,         KC_PERC,                                        KC_CIRC,        KC_AMPR,        KC_ASTR,        KC_PLUS,        KC_EQUAL,       KC_TRANSPARENT, 
    KC_TRANSPARENT, MT(MOD_LSFT, KC_1),MT(MOD_LALT, KC_2),MT(MOD_LCTL, KC_3),MT(MOD_LGUI, KC_4),KC_5,                                           KC_6,           MT(MOD_RGUI, KC_7),MT(MOD_RCTL, KC_8),MT(MOD_LALT, KC_9),MT(MOD_RSFT, KC_0),KC_TRANSPARENT, 
    KC_F11,         KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,                                          KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F12,         
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
};




bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {

    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
    case HSV_0_255_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(0,255,255);
      }
      return false;
    case HSV_74_255_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(74,255,255);
      }
      return false;
    case HSV_169_255_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(169,255,255);
      }
      return false;
  }
  return true;
}


typedef struct {
    bool is_press_action;
    uint8_t step;
} tap;

enum {
    SINGLE_TAP = 1,
    SINGLE_HOLD,
    DOUBLE_TAP,
    DOUBLE_HOLD,
    DOUBLE_SINGLE_TAP,
    MORE_TAPS
};

static tap dance_state[1];

uint8_t dance_step(tap_dance_state_t *state);

uint8_t dance_step(tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return SINGLE_TAP;
        else return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted) return DOUBLE_SINGLE_TAP;
        else if (state->pressed) return DOUBLE_HOLD;
        else return DOUBLE_TAP;
    }
    return MORE_TAPS;
}


void on_dance_0(tap_dance_state_t *state, void *user_data);
void dance_0_finished(tap_dance_state_t *state, void *user_data);
void dance_0_reset(tap_dance_state_t *state, void *user_data);

void on_dance_0(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_UNDS);
        tap_code16(KC_UNDS);
        tap_code16(KC_UNDS);
    }
    if(state->count > 3) {
        tap_code16(KC_UNDS);
    }
}

void dance_0_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_TAP: register_code16(KC_UNDS); break;
        case SINGLE_HOLD: layer_on(6); break;
        case DOUBLE_TAP: register_code16(KC_UNDS); register_code16(KC_UNDS); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_UNDS); register_code16(KC_UNDS);
    }
}

void dance_0_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_TAP: unregister_code16(KC_UNDS); break;
        case SINGLE_HOLD:
          if(!is_layer_locked(6)) {
            layer_off(6);
          }
        break;
        case DOUBLE_TAP: unregister_code16(KC_UNDS); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_UNDS); break;
    }
    dance_state[0].step = 0;
}

tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_0, dance_0_finished, dance_0_reset),
};



/*
    // Custom QMK here
    const key_override_t delete_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_BSPC, KC_DEL);

    const key_override_t *key_overrides[] = {
        &delete_key_override
    };
*/

const key_override_t delete_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_BSPC, KC_DEL);

// This globally defines all key overrides to be used
const key_override_t **key_overrides = (const key_override_t *[]){
	&delete_key_override,
	NULL // Null terminate the array of overrides!
};