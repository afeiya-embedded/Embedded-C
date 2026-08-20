#include <stdio.h>
#include <string.h>

enum WEEK
{
    MON, // 这里MON 就是一个宏(标识常量)。 默认第一个元素的值为0 ， 是整数
    TUE, // 第二个元素的值为1
    WED, // 第三个元素的值为2
    THU, // 第四个元素的值为3
    FRI, // 第五个元素的值为4
    SAT, // 第六个元素的值为5
    SUN, // 第七个元素的值为6
};

int main(int argc, char const *argv[])
{
    // 把枚举当成宏来使用
    printf("MON=%d\n", MON);
    printf("TUE=%d\n", TUE);
    printf("WED=%d\n", WED);
    printf("THU=%d\n", THU);
    printf("FRI=%d\n", FRI);
    printf("SAT=%d\n", SAT);
    printf("SUN=%d\n", SUN);

    // 把宏当成变量使用
    enum WEEK day; // day 是一个整型变量 ， 可以理解为 int day
    for (day = MON; day <= SUN; day++)
    {
        printf("%d ", day);
    }
    printf("\n");


    day = THU;
    printf("day=%d\n", day);

    return 0;
}
