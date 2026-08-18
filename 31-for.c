#include <stdio.h>

int main(int argc, char const *argv[])
{
    int sum=0;
    for(int i = 1;i <= 100;i++)
    {
        //printf("i=%d\n",i);
        sum = sum + i ;  // sum += i ;
    }
    printf("sum=%d\n",sum);
    return 0;
}
