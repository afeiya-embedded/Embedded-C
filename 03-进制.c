#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 0b1010; // 二进制
    int b = 01010; // 八进制
    int c = 1010; // 十进制
    int d = 0x1010; // 十六进制

    printf("a=%d\n", a); // 十进制输出
    printf("b=%d\n", b); // 八进制输出
    printf("c=%d\n", c); // 十进制输出
    printf("d=%d\n", d); // 十六进制输出
    return 0;
}
