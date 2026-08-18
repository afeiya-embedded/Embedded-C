#include <stdio.h>

int main(int argc, char const *argv[])
{
    int m = 0, n = 0;
    printf("请输入两个数>:");
    scanf("%d %d", &m, &n);
    printf("m=%d , n=%d \n", m, n);

    // 最小公倍数
    int max = (m > n) ? m : n;
    int i = max;
    while (1)
    {
        if ((i % m == 0) && (i % n == 0)) // i 同时整除 m 和n
        {
            printf("最小公倍数是: %d \n", i);
            break;
        }
        i++;
    }

    // 最大公约数
    int min = (m < n) ? m : n;
    i = min;
    while (1)
    {
        if ((m % i == 0) && (n % i == 0)) // i 同时整除 m 和n
        {
            printf("最大公约数是: %d \n", i);
            break;
        }
        i--;
    }
    return 0;
}
