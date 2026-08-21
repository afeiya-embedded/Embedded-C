#include <stdio.h>
#include <string.h>

#define MAX(a, b) (a > b ? a : b)

int main(int argc, char const *argv[])
{
    int x, y, max;
    printf("请输入2个整数>:");
    scanf("%d %d", &x, &y);
    max = MAX(x, y);
    printf("max=%d\n", max);
    return 0;
}
