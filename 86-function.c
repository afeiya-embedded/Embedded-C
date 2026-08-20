#include <stdio.h>
#include <math.h>

int add(int x, int y)
{
    int ret = x + y;
    return ret;
}

int sub(int x, int y)
{
    int ret = x - y;
    return ret;
}

int mul(int x, int y)
{
    int ret = x * y;
    return ret;
}

int div(int x, int y)
{
    int ret = x / y;
    return ret;
}

int mypow(int x, int y)
{
    return pow(x, y);
}

int main(int argc, char const *argv[])
{
    // 定义1个函数指针
    int (*pfunc)(int, int);
    pfunc = add;
    int ret = pfunc(10, 5); // add(10,5)
    printf("ret=%d\n", ret);

    pfunc = sub;
    ret = pfunc(10, 5); // sub(10,5)
    printf("ret=%d\n", ret);

    pfunc = mul;
    ret = pfunc(10, 5); // mul(10,5)
    printf("ret=%d\n", ret);

    pfunc = div;
    ret = pfunc(10, 5); // div(10,5)
    printf("ret=%d\n", ret);

    pfunc = mypow;
    ret = pfunc(10, 5); // mypow(10,5)
    printf("ret=%d\n", ret);

    return 0;
}
