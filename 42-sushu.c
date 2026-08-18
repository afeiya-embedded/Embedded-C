#include <stdio.h>

int main(int argc, char const *argv[])
{
    for (int i = 1; i < 100; i++)
    {
        // 计算素数
        if (i == 2) // 特殊情况处理
        {
            printf("%d ", i);
        }

        for (int j = 2; j < i; j++) // 因为1可以被整除 ， 所有要从2开始整除
        {
            if (i % j == 0) // 能整除， 不是素数
                break;
            if (j > i / 2) // 如果一个数整除到这个数的1/2还没有整除， 这个数就是素数
            {
                printf("%d ", i); // 输出数
                break;            // 退出内层循环
            }
        }
    }
    printf("\n"); // 换行

    return 0;
}
