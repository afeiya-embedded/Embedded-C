#include <stdio.h> 


// argc 命令行参数的个数
// argv 命令行参数的数组

// 命令行参数的个数至少为1，第一个参数是程序的名称
// argv 是一个数组， 是一个字符指针数组，使用const进行修饰
// argv[0] 是一个字符串， 是程序的名称
// argv[1] 是一个字符串， 是第一个参数
// argv[2] 是一个字符串， 是第二个参数
// ...
// argv[argc-1] 是一个字符串， 是最后一个参数
// argv[argc] 是一个空指针， 用于标识参数的结束
// .\132-argc.exe 1 2 3 4 
// argc = 5
// argv[0] = 132-argc.exe
// argv[1] = 1
// argv[2] = 2
// argv[3] = 3
// argv[4] = 4
// argv[5] = NULL




int main(int argc, char const *argv[])
{
    printf("argc=%d\n",argc);
    for (int i = 0; i < argc; i++)
    {
        printf("argv[%d]=%s\n",i,argv[i]);
    }
    
    return 0;
}
