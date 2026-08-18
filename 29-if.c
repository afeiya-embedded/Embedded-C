#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b;
    printf("请输入2个数>:");
    scanf("%d%d", &a, &b);
    printf("a = %d,b = %d\n", a, b);
    if (a > b)
    {
        printf("%d > %d\n", a, b);
    }
    else if (a < b)
    {
        printf("%d < %d\n", a, b);
    }
    else
    {
        printf("%d == %d\n", a, b);
    }
    return 0;
}
