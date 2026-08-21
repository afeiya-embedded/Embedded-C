#include <stdio.h>

int main(int argc, char const *argv[])
{

// 表达式为真, 编译#if 和#endif 之间的代码 
// 表达式为假, 不编译#if 和#endif 之间的代码 
#if 0
    printf("hello world!!\n");
#endif

#if 1
    printf("goodbye\n");
#endif

    return 0;
}
