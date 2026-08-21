#include <stdio.h>


// 定义1个全局变量 
// 全局变量的作用域， 整个工程可用 
// 加上static 后， 让全局变量的作用域不超出本文件，就不会出现工程中变量重名的问题了 
static int temp = 100; // 全局变量


int led_on(void)
{
    printf("led on\n"); 
    return 0;
}

int led_off(void)
{
    printf("led off\n");
    return 0;
}

int display(void)
{
    printf("led:display()");
    return 0;
}
