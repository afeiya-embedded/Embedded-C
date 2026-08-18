#include <stdio.h>

int main(int argc, char const *argv[])
{
    long long a[60] = {0};
    for (int i = 0; i < 60; i++)
    {
        if (i < 2) // 第1月和第2月的兔子数量为1
        {
            a[i] = 1;
        }
        else
        {
            a[i] = a[i - 1] + a[i - 2];
        }
        printf("第%d月的兔子数量为:%lld\n", i + 1, a[i]);
        printf("第%d月的兔子数量为:%lld万\n", i + 1, a[i]/10000);
        printf("第%d月的兔子数量为:%lld亿\n", i + 1, a[i]/10000/10000);
    }
    return 0;
}
