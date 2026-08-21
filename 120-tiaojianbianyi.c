#include <stdio.h>

int main(int argc, char const *argv[])
{

// 表达式为真, 编译#if 分支的代码
// 表达式为假, 编译#elif 分支的代码
#if 0
    printf("hello world!!\n");
#elif 1
    printf("goodbye\n");
#else
    printf("sorry\n");
#endif

#if 1
    printf("hello world!!\n");
#elif 0
    printf("goodbye\n");
#else
    printf("sorry\n");
#endif

#if 1
    printf("hello world!!\n");
#elif 0
    printf("goodbye\n");
#else
    printf("sorry\n");
#endif

    return 0;
}
