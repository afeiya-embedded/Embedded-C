#include <stdio.h>
#include <string.h>

// 声明一个函数类型
// 去掉typedef ， func_t 是一个函数声明
// 加上typedef ， func_t 是一个函数类型
// 可以定义一个函数类型的变量
typedef int func_t(int, int);

int add(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int mul(int a, int b)
{
    return a * b;
}

int div(int a, int b)
{
    return a / b;
}

int main(int argc, char const *argv[])
{
    func_t *pfunc; // _t 表示typedef 的缩写， 这里pfunc 是一个函数指针变量
    pfunc = add;
    int ret = pfunc(10, 5);
    printf("ret=%d\n", ret);

    pfunc = sub;
    ret = pfunc(10, 5);
    printf("ret=%d\n", ret);

    pfunc = mul;
    ret = pfunc(10, 5);
    printf("ret=%d\n", ret);

    pfunc = div;
    ret = pfunc(10, 5);
    printf("ret=%d\n", ret);

    return 0;
}
