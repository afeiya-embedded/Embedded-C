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

    char * startp = buf;
    char word[100]={0};
    int ret; 
    int count = 0; 
    printf("请输入要查找的字符串>:");
    scanf("%s",word);
    printf("要查找的字符串:%s\n",word);
    while (*startp)
    {
        ret = memcmp(startp,word,strlen(word)) ;
        if(ret == 0 ) // 查找成功
        {
          count ++ ; // 查找成功次数
          //printf("count = %d\n",count);
          startp = startp + strlen(word); // 下一次查找的起始位置
        }
        else 
        {
            startp ++ ; // 下一次查找的起始位置
        }
    }
    printf("%s 有 %d 个\n",word,count);
    

    return 0;
}
