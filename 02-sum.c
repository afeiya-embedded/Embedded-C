#include <stdio.h>

int main()
{
    int sum = 0;
    // 使用 for 循环从 1 累加到 10
    for (int i = 1; i <= 10; i++)
    {
        sum += i;
    }
    // 输出累加结果
    printf("1 到 10 的和为: %d\n", sum);
    return 0;
}
