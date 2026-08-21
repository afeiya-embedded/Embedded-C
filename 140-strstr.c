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

    char *startp = buf;
    char *retp; // result pointer
    char word[100];
    int count = 0; // 查找次数
    printf("请输入要查找的单词>:");
    scanf("%s", word);
    printf("要查找的单词是:%s\n", word);

    while (*startp)
    {
        retp = strstr(startp, word);
        if (retp != NULL) // 查找成功
        {
            count++;           // 查找次数加1
            startp = retp + 1; // 查找下一个位置
        }
        else // 查找失败
        {
            break;
        }
    }
    printf("%s 有 %d 个\n", word, count);
    return 0;
}
