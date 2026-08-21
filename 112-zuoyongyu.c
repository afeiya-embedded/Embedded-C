#include <stdio.h>
#include <string.h>

void func(int a) // a =1 的作用域   开始的位置
{
    int b = a; // b 的作用域开始的位置
    if (b > 0)
    {
        int c = 10; // c 的作用域开始的位置
        printf("1:c = %d\n", c);
    } // c 的作用域结束的位置
    //printf("2:c = %d\n", c);
    printf("1:a = %d\n", a);
    printf("1:b = %d\n", b);
} // a 的作用域结束的位置 , b 的作用域结束的位置

int main(int argc, char const *argv[])
{
    func(1);  // 函数的调用 , 传递参数 1 
    //printf("2:a = %d\n",a);
    //printf("2:b = %d\n",b);
    return 0;
}
