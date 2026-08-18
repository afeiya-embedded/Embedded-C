#include <stdio.h>

int main(int argc, char const *argv[])
{
    char level;
    printf("请输入(A/B/C/D/E) >:");
    scanf("%c", &level);
    printf("level = %c\n", level);
    switch (level)
    {
    case 'A':
        printf("90 <= 成绩 <= 100\n");
        break;
    case 'B':
        printf("80 <= 成绩 < 90\n");
        break;
    case 'C':
        printf("70 <= 成绩 < 80\n");
        break;
    case 'D':
        printf("60 <= 成绩 < 70\n");
        break;
    case 'E':
        printf("0 <= 成绩 < 60\n");
        break;
    default:
        printf("输入的成绩级别错误,请重新输入\n");
        break;
    }
    return 0;
}
