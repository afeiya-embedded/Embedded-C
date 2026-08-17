#include <stdio.h>

int main(int argc, char const *argv[])
{
    char ch;
    while (1) // 手动结束 ， 使用ctrl + c 结束程序
    {
        ch = getchar();
        if ((ch >= 'a') && (ch <= 'z')) // 判断ch 是一个小写字符
        {
            ch = ch - ' '; // 小写字符 转 大写字符
        }
        else if ((ch >= 'A') && (ch <= 'Z')) // 判断ch 是一个大写字符
        {
            ch = ch + ' '; // 大写字符 转 小写字符
        }
        printf("%c------->%d", ch, ch); // 输出字符
    }
    return 0;
}
