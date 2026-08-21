#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main(int argc, char const *argv[])
{
    char * p =  malloc(128);
    if(p == NULL)
    {
        printf("malloc 申请内存失败\n");
        exit(-1); // 退出程序
    }
    memset(p,0,128); // 把p指向的内存空间的前128个字节设置为0
    memset(p,'A',127); // 把p指向的内存空间的前127个字节设置为'A'
    printf("1:p=%s\n",p) ; // 打印p指向的内存， 按照字符穿形式输出
    free(p); // 释放p指向的内存空间
    printf("2:p=%s\n",p) ; // 打印p指向的内存，输出是乱码， 或者段错误




    return 0;
}



