#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    double num;
    printf("请输入1个数>:");
    scanf("%lf",&num);
    printf("num=%f\n",num);
    printf("%f的绝对值>:%lf\n",num,fabs(num));
    return 0;
}
