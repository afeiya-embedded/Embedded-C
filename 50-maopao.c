#include <stdio.h>

#define N 7
int main(int argc, char const *argv[])
{
    int a[N] = {0}; // 定义1个int数组，第1个元素的值初始化为0， 其余元素为0
    // 这是一种常用写法，通用

    for (int i = 0; i < N; i++)
    {
        printf("请输入第%d个整数>:", i + 1);
        scanf("%d", &a[i]); // 数组的输入
    }
    printf("数组的内容为:");
    for (int i = 0; i < N; i++)
    {
        printf("%d ", a[i]); // 数组的输出
    }
    printf("\n");

    for (int i = 0; i < N - 1; i++) //  外层控制排序次数 ,就是行数 , 需要N-1次, N是有多少个数
    {
        for (int j = 0, t = 0; j < N - 1 - i; j++) // 内层控制每次排序比较次数, 就是列数, 每次比较次数减少1
        {
            if (a[j] > a[j + 1]) // 比较大小, 如果前一个数大于后一个数, 则交换
            {
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }

    printf("数组的内容为:");
    for (int i = 0; i < N; i++)
    {
        printf("%d ", a[i]); // 数组的输出
    }
    printf("\n");

    return 0;
}
