# Project name - generate based on project directory
TARGET = $(lastword $(subst /, ,$(CURDIR)))

# MCU type
MCU = atmega1281

# Processor frequency
# This will define a symbol, F_CPU, in all source code files equal to the 
# processor frequency. You can then use this symbol in your source code to 
# calculate timings.
F_CPU = 16000000

# C source files (look for all files ending in '.c')
CSRC = $(wildcard *.c)

# define object files (all '.c' files will be compiled into corresponding '.o' files)
OBJS = $(CSRC:.c=.o)

# Optimization level, can be [0, 1, 2, 3, s].
# 0 = turn off optimization.
# s = optimize for size.
OPT = s

# Compiler flags
CFLAGS = -std=gnu99 -g
CFLAGS += -mmcu=$(MCU)
CFLAGS += -DF_CPU=$(F_CPU)UL
CFLAGS += -Wall -Wstrict-prototypes
CFLAGS += -O$(OPT)

# Define programs and commands
CC = "/c/Users/Shane Reynolds/Documents/CDU_embeddedSystems/CDUEmbeddedToolbox/avr_tools/bin/avr-gcc"
OBJCOPY = "/c/Users/Shane Reynolds/Documents/CDU_embeddedSystems/CDUEmbeddedToolbox/avr_tools/bin/avr-objcopy"
OBJDUMP = "/c/Users/Shane Reynolds/Documents/CDU_embeddedSystems/CDUEmbeddedToolbox/avr_tools/bin/avr-objdump"
SIZE = "/c/Users/Shane Reynolds/Documents/CDU_embeddedSystems/CDUEmbeddedToolbox/avr_tools/bin/avr-size"
REMOVE = rm -f
AVRDUDE = "/c/Users/Shane Reynolds/Documents/CDU_embeddedSystems/CDUEmbeddedToolbox/avr_tools/bin/avrdude"

# Create final output files (.hex, .eep) from ELF output file.
%.hex: %.elf
	@echo
	@echo "=================================="
	@echo "Creating hex file for Flash: " $@
	@echo "=================================="
	#$(OBJCOPY) -R .eeprom -O ihex $< $@
	$(OBJCOPY) -j .text -j .data -R .eeprom -O ihex $< $@

# Link: create ELF binary output file from all object files.
.SECONDARY : $(TARGET).elf
.PRECIOUS : $(OBJS)
%.elf: $(OBJS)
	@echo
	@echo "=================================="
	@echo "Linking: " $@
	@echo "=================================="
	$(CC) $(CFLAGS) -o $@ $^

# Compile: create object files from all C source files.
%.o: %.c
	@echo
	@echo "=================================="
	@echo "Compiling: " $<
	@echo "=================================="
	$(CC) -c $(CFLAGS) $< -o $@
	
all: build size finished

build: $(TARGET).hex

finished:
	@echo "Errors: none"
	@echo
	
size:
	@echo
	@echo "=================================="
	@echo "Compiled program size:"
	@echo "=================================="
	$(SIZE) --mcu=$(MCU) --format=avr $(TARGET).elf

program: $(TARGET).hex
	@echo
	@echo "=================================="
	@echo "Programming flash memory: " $<
	@echo "=================================="
	$(AVRDUDE) -c arduino -p $(MCU) -P $(PORT) -b 57600 -U flash:w:$<

clean:
	@echo
	@echo "=================================="
	@echo "Cleaning project:"
	@echo "=================================="
	$(REMOVE) $(TARGET).elf
	$(REMOVE) $(TARGET).hex
	$(REMOVE) $(OBJS)

# Listing of phony targets.
.PHONY : all build finished size program clean