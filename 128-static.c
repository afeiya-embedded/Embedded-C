#include <stdio.h>

char *show(void)
{
    static int a= 10 ; // 静态变量，在函数调用结束后不会销毁，而是保留在内存中
    static int b; // 静态变量，没有赋初始值，初始值为0 
    static char buf[100]="hello world"; // 静态变量，字符数组，延长生存期
    a++;
    b++; 
    printf("show:a=%d\n",a);
    printf("show:b=%d\n",b);
    return buf;
}

int main(int argc, char const *argv[])
{
    char *p = show(); 
    printf("p=%s\n",p);
    printf("*************************************\n");

    p = show();
    printf("p=%s\n",p);
    printf("*************************************\n");

    return 0;
}
