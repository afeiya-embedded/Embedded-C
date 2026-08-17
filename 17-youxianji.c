#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x = 1, y = 0, z = 0;
    int ret = x > 0 && !(y == 3) || z > 5; //   运算结果数值为 1
    printf("1:ret = %d\n", ret);
    ret = !(x + 1 > 0) && y == 0 || z > 0; //   运算结果数值为 0
    printf("2:ret = %d\n", ret);
    ret = x < 0 || y == 0 && z > 0; //   运算结果数值为 0
    printf("3:ret = %d\n", ret);
    x += y == z, y = x + 2, z = x + y + x > 0; //   x赋值位2，y赋值为4 ，z赋值为1
    printf("x=%d,y=%d,z=%d\n", x, y, z);
    return 0;
}
