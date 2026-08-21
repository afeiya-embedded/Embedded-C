#include <stdio.h>

int i = 1; // i是全局变量, 文件作用域,静态生存期
void other(void); 
int main(int argc, char const *argv[])
{
    static int a; // 局部变量,块作用域, 静态生存期 , 只能被初始化一次, 初始值为0
    int b = -10;  // 局部变量,块作用域 , 动态生存期
    int c = 0;    // 局部变量,块作用域 , 动态生存期
    printf("---MAIN---\n");
    printf("i:%d a:%d b:%d c:%d \n", i, a, b, c);
    c = c + 8;
    other(); // 第一次调用other
    printf("---MAIN---\n");
    printf("i:%d a:%d b:%d c:%d \n", i, a, b, c);
    i = i + 10;
    other(); // 第二次调用other

    return 0;
}

void other(void)
{
    static int a = 2; // 局部变量,块作用域, 静态生存期 , 只能被初始化一次
    static int b;     // 局部变量,块作用域, 静态生存期 , 只能被初始化一次, 初始值为0

    int c = 10; // 局部变量,块作用域 , 动态生存期
    a = a + 2;
    i = i + 32;
    c = c + 5;
    printf("---OTHER---\n");
    printf("i:%d a:%d b:%d c:%d \n", i, a, b, c);
    b = a;
}
