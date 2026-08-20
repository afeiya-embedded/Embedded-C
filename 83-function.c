#include <stdio.h>

// 函数的声明
//int add(int, int);
//void display(void);


// 函数的定义
// 函数定义的三要素  函数名 , 形参 , 返回值
// 函数名 : add
// 形参   : int x , int y
// 返回值 : int
int add(int x, int y)
{
    int ret = x + y;
    return ret;
}

// 添加注释
// 函数定义的三要素  函数名 , 形参 , 返回值
// 函数名 : display
// 形参   : void
// 返回值 : void
void display(void)
{
    printf("display\n");
    return;
}


int main(int argc, char const *argv[])
{
    // 函数的调用
    int ret = add(1, 2);
    printf("ret = %d\n", ret);

    // 函数的调用
    display();
    return 0;
}


