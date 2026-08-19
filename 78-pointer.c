#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int a = 10;

    // 第一种形式 *pa 只能读不能写 ， pa的值可以修改
    const int *pa = &a;
    // *pa = 20 ; // 错误， 不能通过 *pa 来修改 a 的值
    pa++; // 正确， pa的值可以修改

    // 第二种形式 *pb 可读可写  ， pb 的值不能修改
    int * const pb = &a;
    *pb = 20 ; // 正确  *pb 可读可写
    // pb++; 错误，pb 的值是只读的 

    // 第三种形式 *pc 只读 ， pc 的值不能修改
    const int * const pc = &a;
    //*pc = 20 ; // 错误  *pc 只读
    //pc++;  // 错误，pc 的值是只读的

    return 0;
}
