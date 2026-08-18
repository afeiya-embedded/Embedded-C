#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char str[100] = {0};
    printf("请输入你的选择(yes/no) >:");
    scanf("%s", str);
    if (strncmp(str, "yes",1) == 0)
    {
        printf("你的选择是:yes");
    }
    else if (strncmp(str, "no",1) == 0)
    {
        printf("你的选择是:no");
    }
    else
    {
        printf("你的输入有误,请重新输入");
    }
    return 0;
}
