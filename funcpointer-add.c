#include <stdio.h>

int func(int a, int b) {
  return a+b;
}

int main() {
  int (*funcpointer)(int, int) = func;
  int ret = funcpointer(1,2);
  printf("%d\n", ret);
  return 0;
}

