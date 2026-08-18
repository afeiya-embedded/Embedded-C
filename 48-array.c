#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a[10] = {0}; // 定义1个int数组，长度为10，第1个元素的值初始化为0， 其余元素为0
    // 这是一种常用写法，通用

    for (int i = 0; i < 10; i++)
    {
        printf("请输入第%d个整数>:", i + 1);
        scanf("%d", &a[i]); // 数组的输入
    }
    printf("数组的内容为:");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", a[i]); // 数组的输出
    }
    printf("\n");

    // 逆序数组
    for (int i = 0, t = 0; i < 10 / 2; i++)
    {
        t = a[i];
        a[i] = a[10 - 1 - i];
        a[10 - 1 - i] = t;
    }

    printf("数组的内容为:");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", a[i]); // 数组的输出
    }
    printf("\n");

    return 0;
}
