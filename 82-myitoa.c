#include <stdio.h>
#include <string.h>
#include <math.h>


int main(int argc, char const *argv[])
{
    int num ; 
    printf("请输入一个整数>:");
    scanf("%d",&num);
    printf("num=%d\n",num);
    int len = 0 ; 
    char str[100]={0};
    // 思路 计算一共有多少位 
    // 对10 求整， 不为0 ， 表示有高位， 之后对这个数整除10 
    for (int i = num; i / 10 != 0; i /=10)
    {
        printf("i=%d\n",i);
        len++;  // 计算有多少个十位 
    }
    // 加上个位 , 就是这个数的位数 
    len ++;
    printf("len=%d\n",len);
    int x ; 
    for (int i = 0; i < len; i++)
    {
        x =  num %10 ; 
        printf("x=%d\n",x);
        num = num /10 ;
        str[len-1-i] = x + '0';
    }
    printf("str=%s\n",str);
    
    return 0;
}
