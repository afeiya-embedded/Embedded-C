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
    int (*pfunc[5])(int, int) = {add, sub, mul, div, mypow};

    // pfunc[0] = add;
    // pfunc[1] = sub;
    // pfunc[2] = mul;
    // pfunc[3] = div;
    // pfunc[4] = mypow;

    for (int i = 0; i < 5; i++)
    {
        printf("pfunc[%d]=%p\n", i, pfunc[i]);
    }

    int a = 10, b = 5, ret = 0;
    for (int i = 0; i < 5; i++)
    {
        // i==0,pfunc[0]=add
        // i==1,pfunc[1]=sub
        // i==2,pfunc[2]=mul
        // i==3,pfunc[3]=div
        // i==4,pfunc[4]=mypow
        ret = pfunc[i](a, b);
        printf("ret=%d\n", ret);
    }
    

    return 0;
}
