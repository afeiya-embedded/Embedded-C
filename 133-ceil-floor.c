#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    double num ; 
    printf("请输入1个小数>:");
    scanf("%lf",&num);
    printf("num=%f\n",num);
    printf("%f向上的最小整数>:%lf\n",num,ceil(num));
    printf("%f向下的最大整数>:%lf\n",num,floor(num));

    return 0;
}