#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x = 10, y = 20, z = 30;
    printf("hello world\n");
    printf("x=%d\n", x);
    printf("x=%d,y=%d,z=%d\n", x, y, z);

    int a = 571;
    printf("a=%d\n", a); // dec 十进制
    printf("a=%i\n", a); // dec 十进制
    printf("a=%u\n", a); // dec 无符号十进制
    printf("a=%x\n", a); // dec 无符号十六进制  字母小写
    printf("a=%X\n", a); // dec 无符号十六进制  字母大写
    printf("a=%o\n", a); // dec 无符号八进制

    a = 'Y';
    printf("a=%c\n", a);         //  字符  , 等价于 putchar
    printf("a=%s\n", "goodbye"); //  字符串

    float c = 567.789;
    printf("c=%f\n", c);  //  浮点数  单精度
    printf("c=%lf\n", c); //  浮点数  双精度  long float -> double
    printf("c=%e\n", c);  //  浮点数  科学计数法  小写e
    printf("c=%E\n", c);  //  浮点数  科学计数法  大写E
    printf("c=%g\n", c);  //  e和f 较短的一种

    printf("&a=%p\n", &a); // &a 是变量a的地址， %p 是打印地址的格式
    printf("%%\n");        // 打印 % 符号

    return 0;
}
