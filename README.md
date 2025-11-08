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

## Compile and generate iHex file
The third command will generate `.elf` file from the source code. The fourth command will generate `.hex` file from the previously generate `.elf` file.

```bash
cd baremetal-avr
mkdir build
avr-gcc -mmcu=atmega328p -Wall -Os -o ./build/main.elf ./src/main.c
avr-objcopy -j .text -j .data -O ihex .build/main.elf .build/main.hex
```

## Flashing
### Reading device signature using avrdude
```bash
avrdude -p <partname> -c <programmer> -P <PORT>
```

### Flashing
```bash
avrdude -c <programmer> -p <mcu_part_number> -P <port_name> -b <baud_rate> flash:w:build/main.hex
```