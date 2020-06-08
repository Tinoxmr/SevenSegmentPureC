#include "digits.h"

void setup(){
    /*setup output pins*/
    DDRD |= 1<<PIN_A;
    DDRD |= 1<<PIN_B;
    DDRD |= 1<<PIN_C;
    DDRD |= 1<<PIN_D;
    DDRD |= 1<<PIN_E;
    DDRD |= 1<<PIN_F;
    DDRB |= 1<<PIN_G;
    DDRB |= 1<<PIN_DP;
}

int main(){

    setup();

    while(1){
        int i;
        for(i=0;i<10;i++){
            displayDigit(i);
            _delay_ms(1000);
            turnOff();
        }
    }
}