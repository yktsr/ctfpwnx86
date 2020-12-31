#include <stdio.h>

void func() {
  printf("execute");
}

int main() {
  void (*funcpointer)() = func;
  funcpointer();
  return 0;
}
