#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    float a,b,c;
    printf("请输入任意3个数>:"); 
    scanf("%f%f%f",&a,&b,&c);
    printf("a = %f,b = %f,c = %f\n",a,b,c);
    if((b*b - 4*a*c) > 0)
    {
        float x1,x2;
        x1 = (-b + sqrt(b*b - 4*a*c))/(2*a);
        x2 = (-b - sqrt(b*b - 4*a*c))/(2*a);
        printf("x1 = %f,x2 = %f\n",x1,x2);
    }
    else
    {
        printf("这3个数不能构成方程的解\n");
    }
    return 0;
}
