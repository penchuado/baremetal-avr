# Baremetal AVR learning material

## Necessary tools (software)
1. gcc
2. build-essential
3. gcc-avr
4. binutils-avr
5. avr-libc
6. gdb-avr
7. libusb-dev
8. avrdude

On Debian/Ubuntu:

```bash
sudo apt update && sudo apt upgrade
sudo apt install gcc build-essential gcc-avr binutils-avr gdb-avr libusb-dev avrdude
```

## Compile for Atmega328p
`avr-gcc -mmcu=atmega328p -Wall -Os -o ./build/main.elf main.c`

## To read device signature using avrdude
`avrdude -p <partname> -c <programmer> -P <PORT>`