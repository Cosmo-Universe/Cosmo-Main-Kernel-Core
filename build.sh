#!/bin/bash

# Compile ASM code
nasm -f bin os-dev-env/src/asm/boot.asm -o boot.bin

# Compile C code
gcc -m32 -c os-dev-env/src/c/main.c -o main.o

# Link the object files using ld
ld -m elf_i386 -Ttext 0x7C00 main.o -o kernel.bin

# Create a disk image
dd if=/dev/zero of=disk.img bs=512 count=2880
dd if=boot.bin of=disk.img conv=notrunc
dd if=kernel.bin of=disk.img seek=1 conv=notrunc

# Run the OS in QEMU
qemu-system-i386 -fda disk.img