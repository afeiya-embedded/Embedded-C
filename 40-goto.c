#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i = 0, sum = 0;

loop: 
    i++;
    //printf("i = %d \n", i);
    sum = sum + i;
    if (i < 100)
        goto loop;

    printf("sum = %d\n", sum);
    return 0;
}
