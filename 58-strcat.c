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
    strcat(str1,str2); 
    printf("str1=%s\n", str1);
    printf("str2=%s\n", str2);

    return 0;
}
