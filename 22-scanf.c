#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a,b,c;
    printf("请输入1个十进制的整数>:"); 
    scanf("%d",&a);
    printf("a = %d\n",a);
    printf("请输入3个十进制的整数>:");
    scanf("%d%d%d",&a,&b,&c);
    printf("a = %d,b = %d,c = %d\n",a,b,c);
    printf("请输入1个八进制的整数>:");
    scanf("%o",&a);
    printf("a = %d\n",a);
    printf("请输入1个十六进制的整数>:");
    scanf("%x",&a);
    printf("a = %d\n",a);

    float d; 
    printf("请输入1个小数形式的实数>:");
    scanf("%f",&d);
    printf("d = %f\n",d);

    printf("请输入1个指数形式的实数>:");
    scanf("%e",&d);
    printf("d = %e\n",d);

    return 0;
}

