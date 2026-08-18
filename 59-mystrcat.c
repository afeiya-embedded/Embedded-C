#include <stdio.h>
#include <string.h>

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

    // mystrcat
    int len = 0;
    while (str1[len] != '\0') // 计算str1的长度
    {
        len++;
    }
    printf("len=%d\n", len);

    int i = 0; //

#if 0 
    while (1)  // 
    {
        str1[len] = str2[i];
        if (str1[len] == '\0')
            break;
        len++;
        i++;
    }
#else
    while ((str1[len++] = str2[i++]) != '\0')
        ;
#endif
    printf("len=%d\n", len);

    printf("str1=%s\n", str1);
    printf("str2=%s\n", str2);

    return 0;
}
