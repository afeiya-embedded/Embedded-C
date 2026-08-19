#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int a[5]; // a[0],a[1],a[2],a[3],a[4]
    int *pa = &a[0];
    int *pb = &a[3];
    printf("pa=%p\n", pa);
    printf("pb=%p\n", pb);
    printf("pb-pa=%d\n", pb-pa); // pb - pa = (pb-pa)/sizeof(int) = 3
    return 0;
}
