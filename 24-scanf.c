#include <stdio.h>

int main(int argc, char const *argv[])
{
    char a,b; 
    printf("请输入4个字符>:"); // abcd 
    scanf("%3c%c",&a,&b); // 从终端键盘读取2个字符
    printf("a = %c,b = %c\n",a,b);

    long c  ; 
    printf("请输入1个long类型的整数>:");
    scanf("%ld",&c); // 输入1个long类型的整数
    printf("c = %ld\n",c);

    double d; 
    printf("请输入1个double类型的实数>:");
    scanf("%lf",&d); // 输入1个double类型的实数
    printf("d = %lf\n",d);
    return 0;
}
