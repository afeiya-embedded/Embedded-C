#include <stdio.h>
#include <string.h>

#define NSize 8

int main(int argc, char const *argv[])
{
    int a[NSize] = {1, 2, 3, 4, 5, 6, 7, 8};
    int *p = a;
    int b[NSize / 2] = {0};
    int c[NSize / 2] = {0};

    for (int i = 0; i < NSize; i++)
    {
        if (a[i] % 2 == 0) // 偶数
        {
            b[i / 2] = *(p + i); // 偶数下标
        }
        else // 奇数
        {
            c[i / 2] = *(p + i); // 奇数下标
        }
    }

    // 输出数组的内容
    for (int i = 0; i < NSize / 2; i++)
    {
        printf("b[%d]=%d\n", i, b[i]);
    }
    printf("******************************\n");
    for (int i = 0; i < NSize / 2; i++)
    {
        printf("c[%d]=%d\n", i, c[i]);
    }

    return 0;
}
