// Copyright 2024 Santosh Kumar (@santosh)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#define TRI_LAYER_LOWER_LAYER 2
#define TRI_LAYER_UPPER_LAYER 3
#define TRI_LAYER_ADJUST_LAYER 4

#define DYNAMIC_KEYMAP_LAYER_COUNT 7

#define RGBLIGHT_SLEEP
//
#define RGBLIGHT_LAYERS

/* ws2812 RGB LED */
#define WS2812_DI_PIN D3

#define MASTER_LEFT

#ifdef OLED_ENABLE
	#define OLED_TIMEOUT 60000 * 60 * 24	    //80000 = 80secs, 120000 = 2mins in ms.
	#define OLED_BRIGHTNESS 90			//Default is 100.
	#define SPLIT_OLED_ENABLE			//Synx on/off OLED state between halves (+100).
	#ifdef WPM_ENABLE
		#define SPLIT_WPM_ENABLE			//Enable WPM across split keyboards (+106-268).
	#endif
	#define OLED_LOGO					//Enable to print snakey custom logo on slave side (+108).
	//#define SNEAK_DISABLE				//Disable snakey keyboard pet sneak animation to save space (-132).
	//#define OLED_NO_SLAVE				//Disable snakey minimal keyboard pet slave OLED rendering (-160).
	//#define OLED_NO_MASTER				//Disable snakey minimal keyboard pet master OLED rendering and render status on the slave (+96).
	#ifdef OLED_NO_MASTER
		#define SPLIT_LAYER_STATE_ENABLE	//Keep on master to save space (+142).
		#define SPLIT_LED_STATE_ENABLE		//Keep on master to save space (+112).
		#undef SPLIT_OLED_ENABLE			//Do not sync OLED state with one OLED only (+100).
	#endif
	//#define SPLIT_MODS_ENABLE			//Keep on master to save space (+138).
#endif

#ifdef RGB_MATRIX_ENABLE
#define RGBLIGHT_LED_COUNT 35    // Number of LEDs
#define RGBLIGHT_LED_COUNT 35    // Number of LEDs
#define RGB_MATRIX_LED_COUNT RGBLIGHT_LED_COUNT
#endif

#ifdef RGBLIGHT_ENABLE
    #undef RGBLIGHT_LED_COUNT

	//#define RGBLIGHT_EFFECT_BREATHING
	#define RGBLIGHT_EFFECT_RAINBOW_MOOD
	//#define RGBLIGHT_EFFECT_RAINBOW_SWIRL
	//#define RGBLIGHT_EFFECT_SNAKE
	//#define RGBLIGHT_EFFECT_KNIGHT
	//#define RGBLIGHT_EFFECT_CHRISTMAS
	//#define RGBLIGHT_EFFECT_STATIC_GRADIENT
	//#define RGBLIGHT_EFFECT_RGB_TEST
	//#define RGBLIGHT_EFFECT_ALTERNATING
	//#define RGBLIGHT_EFFECT_TWINKLE

    #define RGBLIGHT_LED_COUNT 70
	#undef RGBLED_SPLIT
	#define RGBLED_SPLIT { 35, 35 } // haven't figured out how to use this yet

	//#define RGBLIGHT_LED_COUNT 30
    #undef RGBLIGHT_LIMIT_VAL
    #define RGBLIGHT_LIMIT_VAL 120
    #define RGBLIGHT_HUE_STEP 10
    #define RGBLIGHT_SAT_STEP 17
    #define RGBLIGHT_VAL_STEP 17
#endif

#ifdef RGB_MATRIX_ENABLE
#   define RGB_MATRIX_KEYPRESSES // reacts to keypresses
// #   define RGB_MATRIX_KEYRELEASES // reacts to keyreleases (instead of keypresses)
#   define RGB_MATRIX_SLEEP // turn off effects when suspended
#   define RGB_MATRIX_FRAMEBUFFER_EFFECTS
// #   define RGB_MATRIX_LED_PROCESS_LIMIT (RGB_MATRIX_LED_COUNT + 4) / 5 // limits the number of LEDs to process in an animation per task run (increases keyboard responsiveness)
// #   define RGB_MATRIX_LED_FLUSH_LIMIT 16 // limits in milliseconds how frequently an animation will update the LEDs. 16 (16ms) is equivalent to limiting to 60fps (increases keyboard responsiveness)
#    define RGB_MATRIX_MAXIMUM_BRIGHTNESS 150 // limits maximum brightness of LEDs to 150 out of 255. Higher may cause the controller to crash.

#define RGB_MATRIX_DEFAULT_MODE RGB_MATRIX_GRADIENT_LEFT_RIGHT

#    define RGB_MATRIX_HUE_STEP 8
#    define RGB_MATRIX_SAT_STEP 8
#    define RGB_MATRIX_VAL_STEP 8
#    define RGB_MATRIX_SPD_STEP 10

/* Disable the animations you don't want/need.  You will need to disable a good number of these    *
 * because they take up a lot of space.  Disable until you can successfully compile your firmware. */
 // #   undef ENABLE_RGB_MATRIX_ALPHAS_MODS
 // #   undef ENABLE_RGB_MATRIX_GRADIENT_UP_DOWN
 // #   undef ENABLE_RGB_MATRIX_BREATHING
 // #   undef ENABLE_RGB_MATRIX_CYCLE_ALL
 // #   undef ENABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT
 // #   undef ENABLE_RGB_MATRIX_CYCLE_UP_DOWN
 // #   undef ENABLE_RGB_MATRIX_CYCLE_OUT_IN
 // #   undef ENABLE_RGB_MATRIX_CYCLE_OUT_IN_DUAL
 // #   undef ENABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON
 // #   undef ENABLE_RGB_MATRIX_DUAL_BEACON
 // #   undef ENABLE_RGB_MATRIX_RAINBOW_BEACON
 // #   undef ENABLE_RGB_MATRIX_RAINBOW_PINWHEELS
 // #   undef ENABLE_RGB_MATRIX_RAINDROPS
 // #   undef ENABLE_RGB_MATRIX_JELLYBEAN_RAINDROPS
 // #   undef ENABLE_RGB_MATRIX_TYPING_HEATMAP
 // #   undef ENABLE_RGB_MATRIX_DIGITAL_RAIN
 // #   undef ENABLE_RGB_MATRIX_SOLID_REACTIVE
 // #   undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE
 // #   undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_WIDE
 // #   undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTIWIDE
 // #   undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_CROSS
 // #   undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTICROSS
 // #   undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_NEXUS
 // #   undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTINEXUS
 // #   undef ENABLE_RGB_MATRIX_SPLASH
 // #   undef ENABLE_RGB_MATRIX_MULTISPLASH
 // #   undef ENABLE_RGB_MATRIX_SOLID_SPLASH
 // #   undef ENABLE_RGB_MATRIX_SOLID_MULTISPLASH
#endif
