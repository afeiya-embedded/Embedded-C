#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 10, b = 8;
    a += b; // a = a+b 
    printf("a=%d\n", a);

    a = 10, b = 8;
    a -= b; // a = a-b
    printf("a=%d\n", a);

    a= 10 , b = 8 ; 
    a *= b ; // a = a*b
    printf("a=%d\n", a);

    a = 10, b = 8;
    a /= b; // a = a/b
    printf("a=%d\n", a);

    a = 10, b = 8;
    a %= b; // a = a%b 
    printf("a=%d\n", a);

    a = 10, b = 8;
    a = a << b; // a = a<<b
    printf("a=%d\n", a);

    a = 10, b = 8;
    a = a >> b; // a = a>>b  
    // 0b 0000 1010
    // >> 8 
    // 0b 0000 0000
    printf("a=%d\n", a);

    a = 10, b = 8;
    a = a & b; // a = a&b
    // 0b 0000 1010
    // 0b 0000 1000
    // 0b 0000 1000
    printf("a=%d\n", a);

    a = 10, b = 8;
    a = a | b; // a = a|b
    // 0b 0000 1010
    // 0b 0000 1000
    // 0b 0000 1010
    printf("a=%d\n", a);

    a = 10, b = 8;
    a = a ^ b; // a = a^b
    // 0b 0000 1010
    // 0b 0000 1000
    // 0b 0000 0010
    printf("a=%d\n", a);




    return 0;
}
