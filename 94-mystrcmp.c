#include <stdio.h>
#include <string.h>

int mystrcmp(const char *s1, const char *s2)
{
    int ret = 0, i = 0;
    while (1)
    {
        ret = s1[i] - s2[i];
        if (ret > 0) // s1 > s2
        {
            // printf("%s > %s\n", s1, s2);
            break;
        }
        else if (ret < 0) // s1 < s2
        {
            // printf("%s < %s\n", s1, s2);
            break;
        }
        else // s1[i] == s2[i]
        {
            if (s1[i] == '\0') // 字符串结束
            {
                // printf("%s == %s\n", s1, s2);
                break;
            }
            i++;
        }
    }
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
    int ret = mystrcmp(str1, str2); // ret == result
    if (ret < 0)
    {
        printf("%s < %s\n", str1, str2);
    }
    else if (ret > 0)
    {
        printf("%s > %s\n", str1, str2);
    }
    else
    {
        printf("%s == %s\n", str1, str2);
    }
    return 0;
}
