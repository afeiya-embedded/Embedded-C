#include <stdio.h>
#include <string.h>


int main(int argc, char const *argv[])
{
    char str[100] = {0};
    printf("请输入1个字符串>:");
    scanf("%s", str);
    printf("str=%s\n", str);
    int len = 0  ; 
    while( str[len] != '\0')
    {
        len++;
    }
    printf("len=%d\n", len);
    return 0;
}
