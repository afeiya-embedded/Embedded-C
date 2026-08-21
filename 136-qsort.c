#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// arg1 - arg2  升序 
int cmp1(const void *arg1, const void *arg2)
{
    return *(char *)arg1  - *(char *)arg2 ; 
}

// arg2 - arg1  降序
int cmp2(const void *arg1, const void *arg2)
{
    return *(char *)arg2  - *(char *)arg1 ; 
}

int main(int argc, char const *argv[])
{
    char buf[] = {"U.S. News & World Report is an American media company that publishes news, \
consumer advice, rankings, and analysis. It was launched in 1948 as the merger \
of domestic-focused weekly newspaper U.S. News and international-focused weekly \
magazine World Report. In 1995, the company launched 'usnews.com' and in 2010, \
the magazine ceased printing."};

    qsort(buf,strlen(buf),sizeof(char),cmp1);
    printf("从小到大:buf=%s\n",buf);

    qsort(buf,strlen(buf),sizeof(char),cmp2);
    printf("从大到小:buf=%s\n",buf);

    return 0;
}
