#include<stdio.h>

int main(void){
  int addr=0;

  printf("%65535d%2$hn\n", 0, &addr);
  printf("%x\n", addr);
}
