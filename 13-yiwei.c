#include <stdio.h>

int main(int argc, char const *argv[])
{
    unsigned char a = 0xe4, b;
    b = a << 3;
    printf("b=0x%x\n", b);

    a = 0xe4, b;
    b = a >> 3;
    printf("b=0x%x\n", b);

    // 
    char x= -10,y; 
    y=x>>3;
    // -10 存放到x 内， 存储的x 的补码， x的原码是10 
    // 0b 0000 1010 
    // ~ 
    // 0b 1111 0101
    // + 1 
    // 0b 1111 0110    -> 0xf6
    // >> 3 
    // 0b 1111 1110
    // 0x fe
    printf("y=0x%x\n", y);
    printf("y=%d\n", y);

    return 0;
}
