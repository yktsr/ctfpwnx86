#include <string.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
  char str1[] = "def";
  char str2[] = "abc";

  int ret = strcmp(str1, str2);
  printf("%d", ret);

  return ret;
}
