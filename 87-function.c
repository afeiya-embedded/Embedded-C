#include <stdio.h>
#include <math.h>

int add(int x, int y)
{
    int ret = x + y;
    return ret;
}


int main(int argc, char const *argv[])
{
    // 定义1个函数指针
    int (*pfunc)(int, int);
    pfunc = add;

    printf("add  =%p\n",add);
    printf("pfunc=%p\n",pfunc);

    int a[10]={0};
    int *pa = a; 
    printf("a    =%p\n",a);
    printf("pa   =%p\n",pa);


    return 0;
}
