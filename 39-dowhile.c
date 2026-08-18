#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i = 0, sum = 0;
    do
    {
        i++;
        // printf("i = %d \n", i);
        sum = sum + i;
    } while (i < 100);
    printf("sum = %d \n", sum);
    return 0;
}
