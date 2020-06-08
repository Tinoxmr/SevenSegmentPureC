#include "digits.h"


/*NB: intended for common cathode display*/
const uint8_t digit_pins_lookup[10][8] =
{
1,1,1,1,1,1,0,0,
0,1,1,0,0,0,0,0,
1,1,0,1,1,0,1,0,
1,1,1,1,0,0,1,0,
0,1,1,0,0,1,1,0,
1,0,1,1,0,1,1,0,
1,0,1,1,1,1,1,0,
1,1,1,0,0,0,0,0,
1,1,1,1,1,1,1,0,
1,1,1,1,0,1,1,0
};

void displayDigit(int digit){
    PORTD |= digit_pins_lookup[digit][0]<<PIN_A;
    PORTD |= digit_pins_lookup[digit][1]<<PIN_B;
    PORTD |= digit_pins_lookup[digit][2]<<PIN_C;
    PORTD |= digit_pins_lookup[digit][3]<<PIN_D;
    PORTD |= digit_pins_lookup[digit][4]<<PIN_E;
    PORTD |= digit_pins_lookup[digit][5]<<PIN_F;
    PORTB |= digit_pins_lookup[digit][6]<<PIN_G;
    PORTB |= digit_pins_lookup[digit][7]<<PIN_DP;
}

void turnOff(){
    PORTD &= ~1<<PIN_A;
    PORTD &= ~1<<PIN_B;
    PORTD &= ~1<<PIN_C;
    PORTD &= ~1<<PIN_D;
    PORTD &= ~1<<PIN_E;
    PORTD &= ~1<<PIN_F;
    PORTB &= ~1<<PIN_G;
    PORTB &= ~1<<PIN_DP;
}