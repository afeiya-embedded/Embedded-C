#include <stdio.h>
#include <math.h>


int add(int x,int y)
{
    int ret = x + y;
    return ret;
}

int sub(int x,int y)
{
    int ret = x - y;
    return ret;
}

int mul(int x,int y)
{
    int ret = x * y;
    return ret;
}

int div(int x,int y)
{
    int ret = x / y;
    return ret;
}

int mypow(int x,int y)
{
    return pow(x,y);
}


int main(int argc, char const *argv[])
{
    int ret = add(10,5); //  函数名(实参1，实参2);
                         //  ret = add(10,5);
                         //  ret = 15;
    printf("ret=%d\n",ret);

    ret = sub(10,5);
    printf("ret=%d\n",ret);

    ret = mul(10,5);
    printf("ret=%d\n",ret);

    ret = div(10,5);
    printf("ret=%d\n",ret);

    ret = mypow(10,5);
    printf("ret=%d\n",ret);
    return 0;
}
