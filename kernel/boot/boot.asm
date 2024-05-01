; Boot code
org 0x7C00

start:
    ; Set up segment registers
    xor ax, ax
    mov ds, ax
    mov es, ax

    ; Load the operating system
    mov bx, 0x8000
    mov ah, 0x02
    mov al, 0x01
    mov ch, 0x00
    mov dh, 0x00
    mov dl, 0x80
    int 0x13

    ; Jump to the loaded operating system
    jmp 0x8000

    ; Padding and boot signature
    times 510-($-$$) db 0
    db 0x55
    db 0xAA