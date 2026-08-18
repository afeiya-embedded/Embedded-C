#include <stdio.h>

int main(int argc, char const *argv[])
{
    for (int i = 0; i < 5; i++)  // 外层循环控制 行数 
    {
        for (int j = 0; j <= i; j++) // 内层循环控制 列数 , 列数增加
        {
            printf("* ");
        }
        printf("\n");
        
    }
    
    return 0;
}
