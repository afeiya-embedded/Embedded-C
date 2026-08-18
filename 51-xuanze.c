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

    for (int i = 0, k, t; i < N - 1; i++) // 外层控制排序次数 , N个数需要排序N-1次
    {
        k = i;                          // 用来记录最小数的下标 ,从i开始， 最难理解的地方
        for (int j = i; j < N - 1; j++) // 内层控制每次排序比较次数, N-1次
        {
            if (a[k] > a[j + 1]) // 如果a[k]比a[j+1]大,则记录最小数的下标
            {
                k = j + 1; // k 记录最小数的下标
            }
        }
        // 记录最小数的下标后, 把最小数和第i个元素进行交换
        if (k != i) // k ！= i, 需要交换， k==i的时候， 就不需要交换
        {
            t = a[k];
            a[k] = a[i];
            a[i] = t;
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
