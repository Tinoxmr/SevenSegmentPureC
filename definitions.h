#ifndef __AVR_ATmega328P__
    #define __AVR_ATmega328P__
#endif

#include "config.h"
#include <avr/io.h>
#include <util/delay.h>
#include <stdbool.h>


extern const int input_lookup[14];

#ifdef PIN_SEGM_A
    #define PIN_A input_lookup[PIN_SEGM_A]
#endif

#ifdef PIN_SEGM_B
    #define PIN_B input_lookup[PIN_SEGM_B]
#endif

#ifdef PIN_SEGM_C
    #define PIN_C input_lookup[PIN_SEGM_C]
#endif

#ifdef PIN_SEGM_D
    #define PIN_D input_lookup[PIN_SEGM_D]
#endif

#ifdef PIN_SEGM_E
    #define PIN_E input_lookup[PIN_SEGM_E]
#endif

#ifdef PIN_SEGM_F
    #define PIN_F input_lookup[PIN_SEGM_F]
#endif

#ifdef PIN_SEGM_G
    #define PIN_G input_lookup[PIN_SEGM_G]
#endif

#ifdef PIN_SEGM_DP
    #define PIN_DP input_lookup[PIN_SEGM_DP]
#endif