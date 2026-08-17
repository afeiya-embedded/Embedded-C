#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b, c;
    printf("请输入第1个整数>:");
    scanf("%d", &a);
    printf("请输入第2个整数>:");
    scanf("%d", &b);
    printf("请输入第3个整数>:");
    scanf("%d", &c);
    printf("a=%d,b=%d,c=%d\n", a, b, c);
    int t = a > b ? a : b;
    int max = t > c ? t : c;
    printf("max=%d\n", max);

    t = a < b ? a : b;
    int min = t < c ? t : c;
    printf("min=%d\n", min);
    return 0;
}
