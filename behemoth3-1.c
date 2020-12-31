#include<stdio.h>

int main(void){
  int count;
  printf("%100d%n\n", 0, &count);
  printf("%d\n", count);
}
