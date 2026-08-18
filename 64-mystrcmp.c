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
    //int ret = strcmp(str1, str2); // ret == result
    int ret ,i=0; 
    while(1)
    {
        ret = str1[i] - str2[i] ; 
        if(ret > 0) // str1 > str2 
        {
            printf("%s > %s\n", str1, str2);
            break;
        }
        else if(ret < 0) // str1 < str2
        {
            printf("%s < %s\n", str1, str2);
            break;
        }
        else // str1[i] == str2[i]
        {
            if(str1[i] == '\0') // 字符串结束
            {
                printf("%s == %s\n", str1, str2);
                break;
            }
            i++;
        }
    }

    return 0;
}
