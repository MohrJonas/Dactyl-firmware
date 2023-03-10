/*
Taken from
https://github.com/qmk/qmk_firmware/blob/master/quantum/keymap_extras/keymap_german.h,
released under the GPL-2.0 license and modified to work with Mechy (S(...) replaced with LSFT(...))
*/

#define DE_CIRC KC_GRV         // ^ (dead)
#define DE_1 KC_1              // 1
#define DE_2 KC_2              // 2
#define DE_3 KC_3              // 3
#define DE_4 KC_4              // 4
#define DE_5 KC_5              // 5
#define DE_6 KC_6              // 6
#define DE_7 KC_7              // 7
#define DE_8 KC_8              // 8
#define DE_9 KC_9              // 9
#define DE_0 KC_0              // 0
#define DE_SS KC_MINS          // ß
#define DE_ACUT KC_EQL         // ´ (dead)
#define DE_Q KC_Q              // Q
#define DE_W KC_W              // W
#define DE_E KC_E              // E
#define DE_R KC_R              // R
#define DE_T KC_T              // T
#define DE_Z KC_Y              // Z
#define DE_U KC_U              // U
#define DE_I KC_I              // I
#define DE_O KC_O              // O
#define DE_P KC_P              // P
#define DE_UDIA KC_LBRC        // Ü
#define DE_PLUS KC_RBRC        // +
#define DE_A KC_A              // A
#define DE_S KC_S              // S
#define DE_D KC_D              // D
#define DE_F KC_F              // F
#define DE_G KC_G              // G
#define DE_H KC_H              // H
#define DE_J KC_J              // J
#define DE_K KC_K              // K
#define DE_L KC_L              // L
#define DE_ODIA KC_SCLN        // Ö
#define DE_ADIA KC_QUOT        // Ä
#define DE_HASH KC_NUHS        // #
#define DE_LABK KC_BSLS        // <
#define DE_Y KC_Z              // Y
#define DE_X KC_X              // X
#define DE_C KC_C              // C
#define DE_V KC_V              // V
#define DE_B KC_B              // B
#define DE_N KC_N              // N
#define DE_M KC_M              // M
#define DE_COMM KC_COMM        // ,
#define DE_DOT KC_DOT          // .
#define DE_MINS KC_SLSH        // -
#define DE_DEG LSFT(DE_CIRC)      // °
#define DE_EXLM LSFT(DE_1)        // !
#define DE_DQUO LSFT(DE_2)        // "
#define DE_SECT LSFT(DE_3)        // §
#define DE_DLR LSFT(DE_4)         // $
#define DE_PERC LSFT(DE_5)        // %
#define DE_AMPR LSFT(DE_6)        // &
#define DE_SLSH LSFT(DE_7)        // /
#define DE_LPRN LSFT(DE_8)        // (
#define DE_RPRN LSFT(DE_9)        // )
#define DE_EQL LSFT(DE_0)         // =
#define DE_QUES LSFT(DE_SS)       // ?
#define DE_GRV LSFT(DE_ACUT)      // ` (dead)
#define DE_ASTR LSFT(DE_PLUS)     // *
#define DE_QUOT LSFT(DE_HASH)     // '
#define DE_RABK LSFT(KC_BSLS)     // >
#define DE_SCLN LSFT(DE_COMM)     // ;
#define DE_COLN LSFT(DE_DOT)      // :
#define DE_UNDS LSFT(DE_MINS)     // _
#define DE_SUP2 ALGR(DE_2)     // ²
#define DE_SUP3 ALGR(DE_3)     // ³
#define DE_LCBR ALGR(DE_7)     // {
#define DE_LBRC ALGR(DE_8)     // [
#define DE_RBRC ALGR(DE_9)     // ]
#define DE_RCBR ALGR(DE_0)     // }
#define DE_BSLS ALGR(DE_SS)    // (backslash)
#define DE_AT ALGR(DE_Q)       // @
#define DE_EURO ALGR(DE_E)     // €
#define DE_TILD ALGR(DE_PLUS)  // ~
#define DE_PIPE ALGR(DE_LABK)  // |
#define DE_MICR ALGR(DE_M)     // µ
