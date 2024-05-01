; Multiboot header
align 4
multiboot_header:
    dd 0x1BADB002    ; Magic number
    dd 0x00          ; Flags
    dd -(0x1BADB002 + 0x00) ; Checksum

    ; Optional fields
    dd 0x00          ; Header address
    dd 0x00          ; Load address
    dd 0x00          ; Load end address
    dd 0x00          ; BSS end address
    dd 0x00          ; Entry address