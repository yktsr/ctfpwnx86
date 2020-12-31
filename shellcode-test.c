int main(int argc, char **argv)
{
  char code[] = "\x31\xdb\x31\xc0\xb0\x01\xcd\x80";
  void (*exeshell)();
  exeshell = (void (*)()) code;
  exeshell(); 
}
