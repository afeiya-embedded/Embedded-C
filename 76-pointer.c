#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char str[] = {"Hello world"};
    char *p = "Hello world";

    printf("str=%s\n", str);
    printf("p  =%s\n", p);

    printf("*p    =%c\n", *p);
    printf("str[0]=%c\n", str[0]);

    //*p = 'h';
    // 字符串是常量，不能修改 
    // 段错误 ， 非法访问内存， 程序直接结束， 编译不会报错
    str[0] = 'h';

    printf("str=%s\n", str);
    printf("p  =%s\n", p);

    return 0;
}