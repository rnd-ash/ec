// Jeremy's layout

#include <board/keymap.h>

uint16_t __code KEYMAP[KM_LAY][KM_OUT][KM_IN] = {
LAYOUT(
    K_ESC, K_F1, K_F2, K_F3, K_F4, K_F5, K_F6, K_F7, K_F8, K_F9, K_F10, K_F11, K_F12, K_HOME, K_END, 0 /*prtsc*/, K_DEL,
    K_TICK, K_1, K_2, K_3, K_4, K_5, K_6, K_7, K_8, K_9, K_0, K_MINUS, K_EQUALS, K_BKSP,
    K_TAB, K_Q, K_W, K_E, K_R, K_T, K_Y, K_U, K_I, K_O, K_P, K_BRACE_OPEN, K_BRACE_CLOSE, K_BACKSLASH,
    K_CAPS, K_A, K_S, K_D, K_F, K_G, K_H, K_J, K_K, K_L, K_SEMICOLON, K_QUOTE, K_ENTER,
    K_LEFT_SHIFT, K_Z, K_X, K_C, K_V, K_B, K_N, K_M, K_COMMA, K_PERIOD, K_SLASH, K_RIGHT_SHIFT,
    K_LEFT_CTRL, KT_FN, K_LEFT_ALT, K_LEFT_SUPER, K_SPACE, KT_FN, K_RIGHT_CTRL, K_PGUP, K_UP, K_PGDN,
    K_LEFT, K_DOWN, K_RIGHT
),
LAYOUT(
    K_ESC, K_TOUCHPAD, K_F2, K_MUTE, K_F4, K_VOLUME_DOWN, K_VOLUME_UP, K_F7, KT_SCI | SCI_BRIGHTNESS_DOWN, KT_SCI | SCI_BRIGHTNESS_UP, K_F10, KT_SCI | SCI_AIRPLANE_MODE, KT_SCI | SCI_SUSPEND, K_HOME, K_END, 0 /*prtsc*/, K_DEL,
    K_PLAY_PAUSE, K_1, K_2, K_3, K_4, K_5, K_6, K_7, K_8, K_9, K_0, K_MINUS, K_EQUALS, K_BKSP,
    K_TAB, K_Q, K_W, K_E, K_R, K_T, K_Y, K_PGUP, K_HOME, K_PGDN, K_P, K_BRACE_OPEN, K_BRACE_CLOSE, K_BACKSLASH,
    K_CAPS, K_A, K_S, K_D, K_F, K_G, K_LEFT, K_DOWN, K_UP, K_RIGHT, K_BKSP, K_DEL, K_ENTER,
    K_LEFT_SHIFT, K_Z, K_X, K_C, K_V, K_B, K_END, K_M, K_COMMA, K_PERIOD, K_SLASH, K_RIGHT_SHIFT,
    K_LEFT_CTRL, KT_FN, K_LEFT_ALT, K_LEFT_SUPER, K_ESC, KT_FN, K_RIGHT_CTRL, K_PGUP, K_UP, K_PGDN,
    K_LEFT, K_DOWN, K_RIGHT
)
};
