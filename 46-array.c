#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a[6] ;  // 定义数组 , 数组名a ， 数组里面有6个元素
    printf("a = %p\n", a); // a 是数组名， 也是数组的首地址

    // 计算数组占用内存字节数， 数组一共有6个元素， 每一个元素int 类型的
    // 1个int 类型占用 4直接， 6 * 4 = 24 ， 可以使用sizeof(a)
    printf("sizeof(a) = %d\n", sizeof(a));

    int x = 10 ; 
    int b[x];  // c99 标准支持
    printf("sizeof(b) = %d\n",sizeof(b)); 

    // C语言对数组不作越界检查，使用时要注意
    // 越界的访问可能会引发段错误, 内存访问错误 , 程序直接结束
    //b[900] = 1; // 越界访问

    printf("goodbye\n");
    return 0;
}
