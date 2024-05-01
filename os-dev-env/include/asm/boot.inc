; /os-dev-env/include/asm/boot.inc

; This file contains constants and macros used in boot.asm

; Define the sector size
SECTOR_SIZE equ 512

; Macro to read a sector from disk
%macro READ_SECTOR 2
    mov ah, 0x02
    mov al, 1
    mov ch, %1
    mov cl, %2
    int 0x13
%endmacro