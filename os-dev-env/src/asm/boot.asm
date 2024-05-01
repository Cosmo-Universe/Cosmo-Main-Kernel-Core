section .text
global _start

_start:
    ; Clear all the registers
    xor ax, ax
    mov ds, ax
    mov es, ax
    mov ss, ax
    mov sp, 0x7c00

    ; Print a message
    mov si, hello
    call print_string

    ; Hang the system
hang:
    jmp hang

print_string:
    lodsb
    or al, al
    jz return
    mov ah, 0x0e
    int 0x10
    jmp print_string
return:
    ret

section .data
hello db 'Hello, World!', 0