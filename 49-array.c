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

    for (int i = 0, t; i < 10 - 1; i++)
    {
        if (a[i] > a[i + 1])
        {
            t = a[i];
            a[i] = a[i + 1];
            a[i + 1] = t;
        }
    }
    printf("max=%d\n", a[9]);

    return 0;
}
