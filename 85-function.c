#include <stdio.h>


int m=10,n=5; // 全局变量 , 在程序的任何位置都可以使用

/*
    函数：swap_copy
    功能：交换两个变量的值
    输入：两个变量的地址
    输出：无
    返回值：0 表示成功
*/
int swap_copy(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;
    return 0;
}

int swap_addr(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
    return 0;
}

int swap_global()
{
    int temp = m;
    m = n;
    n = temp;
    return 0;

}

int main(int argc, char const *argv[])
{
    int a = 10, b = 5;
    swap_copy(a,b); // x = a, y = b; 
    printf("复制传参:a=%d,b=%d\n",a,b);

    swap_addr(&a,&b); // x = *a, y = &b; 
    printf("地址传参:a=%d,b=%d\n",a,b);

    swap_global();
    printf("全局传参:m=%d,n=%d\n",m,n);


    return 0;
}
