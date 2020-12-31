BITS 32
global _start

_start:
	call code
	db "HelloKitty"

code:
	pop ecx
	xor eax, eax
	mov al, 4
	xor ebx, ebx
	inc ebx
	xor edx, edx
	mov dl, 10
	int 0x80
