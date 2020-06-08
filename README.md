# Seven Segment in pure C for Arduino
A seven segment display controller written in pure C for Arduino Uno (Atmega328p)

This little project is useful for understanding how an AVR microcontroller, like an Arduino, can be programmed in pure C language,
without Arduino "dialect" or other high-level libraries.

## Dependencies
To upload your program to the microcontroller you need a specific compiler for AVR microcontrollers and an uploader, 
which "flashes" the EEPROM with your code.

### Compiler
```
avr-gcc  https://blog.zakkemble.net/avr-gcc-builds/
```

### Uploader
```
avrdude  http://download.savannah.gnu.org/releases/avrdude/
```

NOTE: if you have the official Arduino IDE installed, you already have avr-gcc and avrdude in your PC. In fact, the IDE uses these same two 
executables to compile and upload .ino files onto the board. 
Look for both avr-gcc and avrdude in:

`C:\Program Files (x86)\Arduino\hardware\tools\avr`
