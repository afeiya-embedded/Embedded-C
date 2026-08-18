#include <stdio.h>

int main(int argc, char const *argv[])
{
    for (int i = 0; i < 5; i++) // 外层循环控制 行数
    {
        for (int j = 0; j < 5 - i; j++) // 内层循环控制 列数 , 随着行数增加列减少
        {
            printf("* ");
        }
        printf("\n");
    }

    for (int i = 0; i < 5 - 1; i++) // 外层循环控制 行数
    {
        for (int j = 0; j <= i + 1; j++) // 内层循环控制 列数 , 随着行数增加列减少
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
