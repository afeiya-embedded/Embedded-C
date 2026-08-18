#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a;
    char b;
    printf("请输入1个整数>:");
    scanf("%d", &a);
    printf("a = %d\n", a);

    printf("请输入1个字符>:");
    // 第1种垃圾字符处理办法 ' '
#if 0
    scanf(" %c", &b); // 从终端中读取1个整数
#endif

    // 第2种垃圾字符处理办法  %*c , 只能处理1个字符， 多了不行
#if 0
    scanf("%*c%c", &b); // 从终端中读取1个整数
#endif

    // 第3种垃圾字符处理办法  getchar , 只能处理1个字符， 多了不行
#if 0
    getchar();
    scanf("%c", &b); // 从终端中读取1个整数
#endif

    // 第3种垃圾字符处理办法  %*[^\n] , 只能处理1个字符， 多了不行
#if 1
    scanf("%*[^\n]"); // 抑制除了 '\n' 以外的所有字符
    scanf("%*c");      // 再抑制1个字符， 就是把'\n'抑制掉
    scanf("%c", &b);   // 从终端中读取1个整数
#endif

    printf("b = %c\n", b);
    printf("b = %d\n", b);

    /*
        垃圾字符的产生， 先输入100 回车
        100 被scanf("%d",&a)接收， 100 被a接收， 回车被残留在终端内
        之后程序执行了 scanf("%c",&b); ， %c把终端中的 所有的输入都作为有效的输入
        因此 回车 被作为有效的输入给了b ， b的值是10 ， 就是回车键
        之后程序执行了 printf("b = %d\n", b);
        因此 10 被打印出来了
    */
    return 0;
}
