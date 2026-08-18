#include <stdio.h>

int main(int argc, char const *argv[])
{
    char str[100] = {0};
    printf("请输入1个字符串>:");
    scanf("%s", str);
    printf("str=%s\n", str);

    int len=0; 
    while(str[len] != '\0' ) // 统计字符串的长度
    {
        len++;
    }
    printf("str的长度为:%d\n",len);

    for (int i = 0; i < len/2; i++)
    {
        char t = str[i];
        str[i] = str[len-1-i];
        str[len-1-i] = t;
    }
    printf("str=%s\n", str);
    
    return 0;
}
