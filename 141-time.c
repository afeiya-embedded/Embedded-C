#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

char *week[] = {"星期日","星期一","星期二","星期三","星期四","星期五","星期六"};


int main(int argc, char const *argv[])
{
    time_t seconds =   time(NULL) ; 
    printf("seconds=%ld\n",seconds);
    printf("当前时间:%s",ctime(&seconds));

    // localtime() 函数的功能把seconds 解析到 struct tm 结构体变量中
    struct tm * tmp =  localtime(&seconds);
    printf("%04d-%02d-%02d %02d:%02d:%02d %s\n",tmp->tm_year+1900,tmp->tm_mon+1,
            tmp->tm_mday,tmp->tm_hour,tmp->tm_min,tmp->tm_sec,week[tmp->tm_wday]);

    return 0;
}

