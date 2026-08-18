#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a[3][3] = {0};
    for (int i = 0; i < 3; i++) // 行数
    {
        for (int j = 0; j < 3; j++) // 列数
        {
            printf("请输入 a[%d][%d] 元素的值>:", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("a[%d][%d] = %d\n", i, j, a[i][j]);
        }
    }

    return 0;
}
