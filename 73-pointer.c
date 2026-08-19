#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int a, b;
    int *pa = &a, *pb = &b;
    printf("请输入两个整数：");
    scanf("%d %d", &a, &b);
    printf("a=%d, b=%d\n", a, b);

    int min = (*pa < *pb) ? *pa : *pb;
    printf("min=%d\n", min);

    return 0;
}
