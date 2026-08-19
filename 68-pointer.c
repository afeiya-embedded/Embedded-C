#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{

    char a = 10;
    short b = 10;
    int c = 10;
    long d = 10;
    float e = 10.0;
    double f = 10.0;

    printf("&a=%p\n", &a); // &a =  00 00 00 00 00 61 FE 47
    printf("&b=%p\n", &b); // &b =  00 00 00 00 00 61 FE 44
    printf("&c=%p\n", &c); // &c =  00 00 00 00 00 61 FE 40
    printf("&d=%p\n", &d); // &d =  00 00 00 00 00 61 FE 3C
    printf("&e=%p\n", &e); // &e =  00 00 00 00 00 61 FE 38

    char str[10] = {0} ; // 字符数组
    for (int i = 0; i < 10; i++)
    {
        printf("&str[%d]=%p\n", i, &str[i]);
    }
    



    return 0;
}
