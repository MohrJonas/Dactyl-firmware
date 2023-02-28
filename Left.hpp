#include <Mechy.h>
#include <Mechy/KeyPress.h>
#include <Mechy/GotoLayer.h>
#include <Mechy/Receiver.h>
#include "GermanKeymap.hpp"

#define ROWS 6
#define COLS 6
const uint8_t pinRows[] = { _B1, _B3, _B2, _B6, _B5, _F7 };
const uint8_t pinCols[] = { _F6, _D4, _C6, _D7, _E6, _B4 };

#define DATA _D1
#define CLK _D0

/*
Thumbcluster definition (front view)
-------------
|  A  |  B  |
-------------
|  C  |  D  |
-------------
*/

KEYS(leftMainKeys) = {
  DE_1, DE_2, DE_3, DE_4, DE_5, DE_6,
  KC_TAB, DE_Q, DE_W, DE_E, DE_R, DE_T,
  DE_CIRC, DE_A, DE_S, DE_D, DE_F, DE_G,
  ____, DE_Y, DE_X, DE_C, DE_V, DE_B,
  KC_LCTL, KC_LGUI, KC_LALT, ____, KC_LSFT, KC_SPC,
  ____, ____, ____, GOTO_1,  KC_BSPC, KC_ENT
//             C     D     A     B
};

KEYS(leftUpperKeys) = {
  KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6,
  ____, ____, ____, ____, ____, ____,
  ____, ____, ____, ____, ____, ____,
  ____, ____, ____, ____, ____, ____,
  ____, ____, ____, ____, ____, ____,
  ____, ____, ____, ____, ____, ____
};

/*
Thumbcluster definition (front view)
-------------
|  B  |  A  |
-------------
|  D  |  C  |
-------------
*/

KEYS(rightMainKeys) = {
  DE_7, DE_8, DE_9, DE_0, DE_SS, DE_ACUT,
  DE_Z, DE_U, DE_I, DE_O, DE_P, DE_UDIA,
  DE_H, DE_J, DE_K, DE_L, DE_ODIA, DE_ADIA,
  DE_N, DE_M, DE_COMM, DE_DOT, DE_MINS, KC_DEL,
  KC_SPC, KC_LSFT, ____, KC_RALT, KC_RGUI, KC_RCTL,
  KC_ENT, KC_BSPC, KC_ESC, ____, ____, ____
//             C     D     A     B
};

KEYS(rightUpperKeys) = {
  KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12,
  ____, ____, ____, ____, ____, ____,
  ____, KC_UP, ____, ____, ____, ____,
  KC_LEFT, KC_DOWN, KC_RGHT, ____, ____, ____,
  ____, ____, ____, ____, ____, ____,
  ____, ____, ____, ____, ____, ____
};

Layout leftLayout = Layout(ROWS, COLS, leftMainKeys, leftUpperKeys);
Layout rightLayout = Layout(ROWS, COLS, rightMainKeys, rightUpperKeys);
Scanner scanner = Scanner(&leftLayout, pinRows, pinCols, ROWS, COLS);

Mechy mechy = Mechy();
Receiver receiver = Receiver(&rightLayout, DATA, CLK);

void setup() {
  mechy.add(new KeyPress());
  mechy.add(new GotoLayer());
  mechy.attach(&scanner);
  mechy.attach(&receiver);
  mechy.begin();
}

void loop() {
  mechy.tick();
}