#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    // [] 优先级高于*，week先结合[], 所以week是一个数组
    // char * 就是起修饰作用的，用来修饰week， 所以 week 是一个字符指针数组(char *)
    // 数组中每一个元素都是一个 字符指针变量
    // 字符指针变量 可以被1个字符串 初始化
    // 可以把这个理解成二维数组
    char *week[] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};

    // 计算 week占用内存字节数 ， week 一共有7个元素，每一个元素都是字符指针变量，
    // 字符指针变量存放的是地址， 1个地址(64w位)占8个字节 ， 每一个元素都是8字节大小
    // 7 * 8 = 56
    printf("sizeof(week)=%d\n", sizeof(week));

    // week[0]  是一个成员， 是一个字符指针变量， 占用8字节
    printf("sizeof(week[0])=%d\n", sizeof(week[0]));

    for (int i = 0; i < sizeof(week) / sizeof(week[0]); i++)
    {
        printf("week[%d]=%s\n", i, week[i]); // 字符指针变量保存字符串的首地址
    }

    char ** p = week; 

    return 0;
}
