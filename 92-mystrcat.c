#include <stdio.h>
#include <string.h>

// 函数定义
char *mystrcat(char *dest, const char *src)
{
    // 自己实现代码 , 把前面做过的代码放到这个函数内
    char *retp = dest;

    while (*dest != '\0')
        dest++;

    while ((*dest++ = *src++) != '\0')
    {
    }
    return dest;
}

int main(int argc, char const *argv[])
{
    char str1[100] = {0};
    char str2[100] = {0};
    printf("请输入1个字符串>:");
    scanf("%s", str1);
    printf("请输入1个字符串>:");
    scanf("%s", str2);
    printf("str1=%s\n", str1);
    printf("str2=%s\n", str2);
    mystrcat(str1, str2);
    printf("str1=%s\n", str1);
    printf("str2=%s\n", str2);

    return 0;
}
