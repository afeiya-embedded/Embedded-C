#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{

    char *str = "Attendees at a Trump rally in Waukesha, Wisconsin, shared who they want\
 to see on the presidential ticket in 2024, with most hoping for a Donald Trump bid.";
    char newstr[512] = {0};
    char *p = str;
    char *q = newstr;

    while (*p != '\0')
    {
        // 判断大小写
        if (*p >= 'A' && *p <= 'Z')
        {
            *q = *p + ' ';
            p++; // 指针往后移动
            q++; // 指针往后移动
        }
        else if (*p == ' ') // 处理空格 ， 空格跳过
        {
            p++; // 指针往后移动
        }
        else // 其他字符和小写字母
        {
            *q = *p;
            p++; // 指针往后移动
            q++; // 指针往后移动
        }
    }
    printf("str           =%s\n", str);
    printf("newstr        =%s\n", newstr);
    printf("strlen(str)   =%d\n", strlen(str));
    printf("strlen(newstr)=%d\n", strlen(newstr));
    return 0;
}
