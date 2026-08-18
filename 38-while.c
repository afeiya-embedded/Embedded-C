#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i = 0, sum = 0;
    while (i < 100)
    {
        i++;
        // printf("i = %d \n", i);
        sum = sum + i;
    }
    printf("sum = %d \n", sum);
    return 0;
}
