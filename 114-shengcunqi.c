#include <stdio.h>
#include <string.h>

int *func(void)
{
    //int a = 100; // a 是局部变量，动态生存期
    static int a = 100; // 延长a的生存期， 让a变成一个静态生存期
    return &a;
}

int main(int argc, char const *argv[])
{
    int *p = func();
    printf("*p=%d\n", *p);

    return 0;
}
