nasm -f bin boot.asm -o boot.bin
nasm -f bin multiboot.asm -o multiboot.bin
nasm -f bin kernel.asm -o kernel.bin
nasm -f bin boot.asm -o boot.bin
cat boot.bin multiboot.bin > bootloader.bin
gcc -c services.cpp -o services.o
ld -Ttext 0x8000 -o os.bin bootloader.bin services.o
