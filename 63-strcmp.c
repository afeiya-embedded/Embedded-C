#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char str[100] = {0};
    printf("请输入你的选择(yes/no) >:");
    scanf("%s", str);
    if (strcmp(str, "yes") == 0)
    {
        printf("你的选择是:yes");
    }
    else if (strcmp(str, "no") == 0)
    {
        printf("你的选择是:no");
    }
    else
    {
        printf("你的输入有误,请重新输入");
    }
    return 0;
}
