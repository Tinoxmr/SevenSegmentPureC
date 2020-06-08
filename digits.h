#ifndef DIGITS_H
#define DIGITS_H

#include "definitions.h"


extern const uint8_t digit_pins_lookup[10][8];

void displayDigit(int digit);
void turnOff();

#endif