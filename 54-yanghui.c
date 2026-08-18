#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a[10][10] = {0};
    for (int i = 0; i < 10; i++)
    {

        for (int j = 0; j <= i; j++)
        {
            if (j == 0)
            {
                a[i][j] = 1;
            }
            if (j == i)
            {
                a[i][j] = 1;
            }
            if ((i >= 2) && (j >= 1))
            {
                a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
            }
            printf("%-3d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
