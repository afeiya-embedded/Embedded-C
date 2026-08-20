#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int sum = 0;
int mysum(int i)
{
    printf("i:%d\n", i);
    sum = sum + i;
    i++;
    if (i > 100)  // 想要正常的使用递归， 必须有终止条件
        return 0;
    mysum(i);
}
int main(int argc, char const *argv[])
{
    mysum(1);
    printf("sum=%d\n",sum);
    return 0;
}
