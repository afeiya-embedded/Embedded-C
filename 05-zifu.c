#include <stdio.h>

int main(int argc, char const *argv[])
{
    char a, b, u, v; // 说明a、b、u和v为字符变量
    a = 'F';         //  将70送给a
    b = 'A' + 2;     //  b存放的是 'C' 字符
    u = ' ' + 'B';   //  u存放的是 'b' 字符
    v = 'b' - 32;    //  v存放的是 'B’ 字符

    printf("a=%d\n", a); // 70
    printf("b=%d\n", b); // 65 +2 = 67
    printf("u=%d\n", u); // 66 + 32 =  98
    printf("v=%d\n", v); // 98 - 32 = 66

    return 0;
}
