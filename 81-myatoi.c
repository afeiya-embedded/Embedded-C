#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    char  str[100]={0}; 
    printf("请输入一个字符串>:");
    scanf("%s",str);
    printf("str=%s\n",str);
    printf("strlen(str)=%d\n",strlen(str));
    int len = strlen(str); 
    int x,num=0; 
    for (int i = 0; i < len; i++)
    {
        //printf("str[%d]=%c\n",i,str[i]);
        x = (str[i] - '0') *pow(10,len-i-1); 
        num = num + x; 
        printf("x=%d\n",x);
    }
    printf("num=%d\n",num);
    
    return 0;
}
