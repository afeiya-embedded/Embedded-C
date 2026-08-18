#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    float a, b, c;
    printf("请输入三角形的3边边长>:");
    scanf("%f%f%f", &a, &b, &c);
    printf("a = %f,b = %f,c = %f\n", a, b, c);
    if (a + b > c && a + c > b && b + c > a)
    {
        float s = (a + b + c) / 2;
        float area = sqrt(s * (s - a) * (s - b) * (s - c));
        printf("三角形的面积为:%.2f\n", area);
    }
    else
    {
        printf("这三边不能构成三角形\n");
    }
    return 0;
}
