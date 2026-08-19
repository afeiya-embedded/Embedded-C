#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int x = 10, y = 20;
    int *px, *py; // 指针变量
    px = &x;
    py = &y;

    int **ppx = &px; // 保存指针变量的地址的变量 ， 需要使用二级指针变量

    x = 15; // 直接访问
    printf("x=%d\n", x);

    *px = 16; // 通过指针变量访问 间接访问
    printf("x=%d\n", x);

    printf("&x=%p\n", &x); // x变量的地址
    printf("px=%p\n", px); // px指针变量的值

    printf("&y=%p\n", &y); // y变量的地址
    printf("py=%p\n", py); // py指针变量的值

    printf("*px=%d\n", *px); //  px里面的值是&x的地址， *px是取地址里面的值
    printf("  x=%d\n", x);   //

    printf("*py=%d\n", *py); //  py里面的值是&y的地址， *py是取地址里面的值
    printf("  y=%d\n", y);   //

    return 0;
}
