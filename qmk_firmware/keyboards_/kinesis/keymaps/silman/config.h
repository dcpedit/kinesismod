#pragma once

// Tap dance settings
#define TAPPING_TERM 175
#define TAPPING_TOGGLE 2
#define IGNORE_MOD_TAP_INTERRUPT

// Delay between register and unregister for tap_code
// #define TAP_CODE_DELAY 100

// Mouse key settings
// Undefine the ones defined at the Kinesis folder level
#undef MOUSEKEY_DELAY
#undef MOUSEKEY_INTERVAL
#undef MOUSEKEY_MAX_SPEED
#undef MOUSEKEY_TIME_TO_MAX
#undef MOUSEKEY_WHEEL_MAX_SPEED
#undef MOUSEKEY_WHEEL_DELTA
#undef MOUSEKEY_WHEEL_TIME_TO_MAX
// Define new ones
#define MOUSEKEY_DELAY 0
#define MOUSEKEY_INTERVAL 16
#define MOUSEKEY_MAX_SPEED 7
#define MOUSEKEY_TIME_TO_MAX 60
#define MOUSEKEY_WHEEL_DELAY 0
#define MOUSEKEY_WHEEL_MAX_SPEED 1
#define MOUSEKEY_WHEEL_TIME_TO_MAX 1
#define MOUSEKEY_WHEEL_DELTA 1
