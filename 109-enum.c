#include <stdio.h>
#include <string.h>

enum 
{
    MON=1, // 这里MON 就是一个宏(标识常量)。 默认第一个元素的值为0 ， 是整数
    TUE, // 第二个元素的值为2
    WED, // 第三个元素的值为3
    THU=40, // 第四个元素的值为40
    FRI, // 第五个元素的值为41
    SAT, // 第六个元素的值为42
    SUN=70, // 第七个元素的值为70
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


    return 0;
}
