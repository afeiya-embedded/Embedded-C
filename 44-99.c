#include <stdio.h>

int main(int argc, char const *argv[])
{
    for (int i = 1; i < 10; i++)  // 外层循环控制 行数 
    {
        for (int j = 1; j <= i; j++) // 内层循环控制 列数 , 列数增加
        {
            printf("%d x %d = %-2d  ",j,i,i*j);
        }
        printf("\n");
        
    }
    
    return 0;
}