#include <stdio.h>

int main(int argc, char const *argv[])
{
    char week[][5] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};
    // 降维理解二维数组， week 是一个一维数组，一共有7个元素
    // 分别是 week[0], week[1], week[2], week[3], week[4], week[5], week[6]
    // 每一个元素又有5个子元素
    // week[0][0] week[0][1] week[0][2] week[0][3] week[0][4]
    // week[1][0] week[1][1] week[1][2] week[1][3] week[1][4]
    // week[2][0] week[2][1] week[2][2] week[2][3] week[2][4]
    // week[3][0] week[3][1] week[3][2] week[3][3] week[3][4]
    // week[4][0] week[4][1] week[4][2] week[4][3] week[4][4]
    // week[5][0] week[5][1] week[5][2] week[5][3] week[5][4]
    // week[6][0] week[6][1] week[6][2] week[6][3] week[6][4]

    // 计算数组占用内存字节数  = 一共7行， 每行有5列， 每一个元素占用1个字节
    // 7 * 5 * 1 = 35 字节
    printf("sizeof(week) = %d\n", sizeof(week));

    // week[0] 是一个数组名 ， 里面有5个元素 ， 每一个元素占用1个字节
    printf("sizeof(week[0])=%d\n", sizeof(week[0]));

    // week[1] 是一个数组名 ， 里面有5个元素 ， 每一个元素占用1个字节
    printf("sizeof(week[1])=%d\n", sizeof(week[1]));

    // week[2] 是一个数组名 ， 里面有5个元素 ， 每一个元素占用1个字节
    printf("sizeof(week[2])=%d\n", sizeof(week[2]));

    // week[3] 是一个数组名 ， 里面有5个元素 ， 每一个元素占用1个字节
    printf("sizeof(week[3])=%d\n", sizeof(week[3]));

    // week[4] 是一个数组名 ， 里面有5个元素 ， 每一个元素占用1个字节
    printf("sizeof(week[4])=%d\n", sizeof(week[4]));

    // week[5] 是一个数组名 ， 里面有5个元素 ， 每一个元素占用1个字节
    printf("sizeof(week[5])=%d\n", sizeof(week[5]));

    // week[6] 是一个数组名 ， 里面有5个元素 ， 每一个元素占用1个字节
    printf("sizeof(week[6])=%d\n", sizeof(week[6]));

    // 计算元素的个数
    printf("sizeof(week)/sizeof(week[0])=%d\n", sizeof(week) / sizeof(week[0]));

    // week[0] 是数组名， 也是数组的首地址 ， 也是数组的地址
    // %s 把这个地址里面的内容当成字符串输出， 遇到 '\0' 结束输出
    printf("%s\n", week[0]);

    printf("*******************************************\n");
    for (int i = 0; i < sizeof(week) / sizeof(week[0]); i++)
    {
        printf("week[%d] = %s\n", i, week[i]);
    }

    return 0;
}
