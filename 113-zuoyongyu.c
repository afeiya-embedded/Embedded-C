#include <stdio.h>
#include <string.h>

// 不在块作用于和函数声明作用域内， 具有文件作用域，
// 这样声明的标识符 这样声明的标识符的作用域开始于声明点，结束于文件尾。
// 在所有函数外部定义的变量（全局变量）具有文件作用域。
int a = 100; // 文件作用域 全局变量

int func(int x); // x 是函数原型的作用域

int main(int argc, char const *argv[])
{
    int b = 200; // 块作用域 局部变量
    a = 200;
    printf("1:a=%d\n", a);
    func(1);
    return 0;
}

int func(int x)
{
    a = 300;
    printf("2:a=%d\n", a);
}
