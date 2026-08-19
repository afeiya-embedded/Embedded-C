#include <stdio.h>
#include <string.h>


int main(int argc, char const *argv[])
{
    int a[5] = {1,2,3,4,5};

    // 输出数组中每一个元素的地址 
    printf("&a[0]=%p\n", &a[0]);
    printf("&a[1]=%p\n", &a[1]);
    printf("&a[2]=%p\n", &a[2]);
    printf("&a[3]=%p\n", &a[3]);
    printf("&a[4]=%p\n", &a[4]);
    // 数组中元素的地址是连续的

    // a 是数组名 ， 是数组的地址， 是一个地址常量 ， 
    // 也是数组的起始地址，还是第一个元素的地址 
    printf("a    =%p\n", a);
    printf("&a   =%p\n", &a); // &a 是数组的地址
    printf("&a[0]=%p\n", &a[0]); // &a[0] 是第一个元素的地址

    return 0;
}
