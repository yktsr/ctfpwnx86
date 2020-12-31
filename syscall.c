#include <unistd.h>

int main(int argc, char *argv[])
{
    syscall(59, "/bin/sh", 0, 0);
}
