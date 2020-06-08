#compiler options
CC=avr-gcc
CFLAGS= -Os -DF_CPU=16000000UL -mmcu=atmega328p

SOURCES = main.c digits.c definitions.c

all: install.main

USBPORT:=COM5

%.out: %.c
	$(CC) $(CFLAGS) $(SOURCES) -o $@

%.hex: %.out
	avr-objcopy -O ihex -R .eeprom $< $@

#upload to board
install.%: %.hex
	avrdude -F _V -c arduino -p ATMEGA328P -P ${USBPORT} -b 115200 -U flash:w:$<

clean:
	rm -force *.out
