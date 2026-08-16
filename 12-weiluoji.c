#include <stdio.h>

int main(int argc, char const *argv[])
{
    unsigned char x = 0x17, y, z;
    y = ~x;
    printf("y=0x%x\n", y);

    x = 0x56, y = 0xac;
    z = x & y;
    printf("z=0x%x\n", z);

    x = 0x3e, y = 0x89, z;
    z = x | y;
    printf("z=0x%x\n", z);

    x = 0x4b, y = 0x7b, z;
    z = x ^ y;
    printf("z=0%o\n", z);

    return 0;
}
