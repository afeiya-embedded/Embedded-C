#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *p = a;

    // 遍历数组的第1种办法(a[i] 数组下标法)
    printf("遍历数组的第1种办法(a[i] 数组下标法)**************\n");
    for (int i = 0; i < 10; i++)
    {
        printf("a[%d]=%d\n", i, a[i]);
    }

    // 遍历数组的第2种办法(p[i] 数组下标法 )
    printf("遍历数组的第2种办法(p[i] 数组下标法 )**************\n");
    for (int i = 0; i < 10; i++)
    {
        printf("p[%d]=%d\n", i, p[i]);
    }

    // 遍历数组的第3种办法(*(p+i) 地址法)
    printf("遍历数组的第3种办法(*(p+i) 地址法)**************\n");
    for (int i = 0; i < 10; i++)
    {
        printf("*(p+%d)=%d\n", i, *(p + i));
    }

    // 遍历数组的第4种办法(*(a+i) 地址法)
    printf("遍历数组的第4种办法(*(a+i) 地址法)**************\n");
    for (int i = 0; i < 10; i++)
    {
        printf("*(a+%d)=%d\n", i, *(a + i));
    }

    return 0;
}
