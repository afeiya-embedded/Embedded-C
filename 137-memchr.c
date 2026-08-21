#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{

    char buf[] = {"U.S. News & World Report is an American media company that publishes news, \
consumer advice, rankings, and analysis. It was launched in 1948 as the merger \
of domestic-focused weekly newspaper U.S. News and international-focused weekly \
magazine World Report. In 1995, the company launched 'usnews.com' and in 2010, \
the magazine ceased printing."};

    char ch;
    char *retp;
    char *startp = buf;
    int count = 0; // 统计字符出现的次数
    printf("请输入要查找的字符>:");
    scanf("%c", &ch);

    while (1)
    {
        retp = memchr(startp, ch, strlen(startp));
        if (retp != NULL)
        {
            count++;
            startp = retp + 1; // 下一次查找的起始位置
        }
        else // 如果没有找到结束查找
        {
            break; // 查找结束
        }
    }
    printf("字符:%c,出现了:%d次\n", ch, count);

    return 0;
}
