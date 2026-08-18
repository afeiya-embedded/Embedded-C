#include <stdio.h>

int main(int argc, char const *argv[])
{
    char ch ; 
    printf("请输入1个字符>:");
    scanf("%c",&ch);
    printf("ch = %c\n",ch);

    char str[100] = {0}; // 定义1个数组并初始化为0
    printf("请输入1个字符串>:");
    // 数组名就是数组的首地址 ， 不需要再对str取地址了
    // 输入字符串时，遇到空格就会结束， 输入的字符串中不能有空格
    scanf("%s",str);
    printf("str = %s\n",str);
    return 0;
}
