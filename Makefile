#compiler options
CC=avr-gcc
CFLAGS= -Os -DF_CPU=16000000UL -mmcu=atmega328p

#specify source files
SOURCES = main.c digits.c definitions.c

#by targeting 'install' with 'all:' the program will be
#compiled and uploaded with a single 'make' command
all: install.main

#specify the port where the board is connected
USBPORT:=COM5

#build obj from sources
%.out: %.c
	$(CC) $(CFLAGS) $(SOURCES) -o $@

#build hex
%.hex: %.out
	avr-objcopy -O ihex -R .eeprom $< $@

#upload to board
install.%: %.hex
	avrdude -F _V -c arduino -p ATMEGA328P -P ${USBPORT} -b 115200 -U flash:w:$<

#remove the generated binary files
clean:
	rm -force *.out
