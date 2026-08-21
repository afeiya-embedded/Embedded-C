#include <stdio.h>

int main(int argc, char const *argv[])
{

// 判断这个宏是否定义 
// 如果定义了这个宏 , 条件成立 , 编译printf("hello world!!\n");
// 如果没有定义这个宏 , 条件不成立 , 不编译printf("hello world!!\n"),
// 编译 #else 的 printf("goodbye\n");
#ifdef  __LED1__H
    printf("hello world!!\n");
#else
    printf("goodbye\n");
#endif


// 判断这个宏是否定义 
// 如果定义了这个宏 , 条件成立 , 编译printf("hello world!!\n");
// 如果没有定义这个宏 , 条件不成立 , 不编译printf("hello world!!\n"),
// 编译 #else 的 printf("goodbye\n");
#define  __LED2__H 
#ifdef   __LED2__H
    printf("hello world!!\n");
#else
    printf("goodbye\n");
#endif


    return 0;
}
