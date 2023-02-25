AS := arm-none-eabi-as
CC := arm-none-eabi-gcc
LD := arm-none-eabi-gcc

STRIP := arm-none-eabi-strip
OBJCOPY := arm-none-eabi-objcopy

ASFLAGS := -g
CFLAGS := -g -Wall -march=armv6 -msoft-float -mapcs-frame -Iinclude -fPIC -ansi -pedantic -ffreestanding
LDFLAGS := -nostdlib -Wl,-Map=kernel.map -lgcc -lm


ASM_OBJS := \
	arch/arm/boot/start.o \
	arch/arm/context.o

OBJS := \
	$(ASM_OBJS) \
	init/main.o \
	devices/uart.o \
	arch/arm/arch.o \



.PHONY: clean
all: kernel.elf

kernel.elf: $(OBJS)
	@echo "LD $@"
	@$(LD) -T arch/arm/linker.ld $(OBJS) -o kernel.elf $(LDFLAGS)

	@echo "OBJCOPY $@"
	@$(OBJCOPY) -Obinary kernel.elf kernel.bin

run:
	@./scripts/boot

clean:
	@rm -f *.o *.elf *.bin *.map *.txt *.img
	@find . -type f -iname "*.o*" -delete


.SUFFIXES: .s .o .elf

.s.o:
	@echo "AS $<"
	@$(AS) $< $(ASFLAGS) -o $@

.c.o:
	@echo "CC $<"
	@$(CC) -c $< $(CFLAGS) -o $@