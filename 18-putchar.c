#include <stdio.h>

int main(int argc, char const *argv[])
{
    char a1 = 65;  // ascii 码 65 对应 A
    char a2 = 'A'; // 字符 A  对应的ascii 为 65
    char b1 = 10; //  10 对应的ascii是换行符
    char b2 = '\n'; // '\n' 的ascii值是10 

    putchar(a1);
    putchar(a2);
    putchar(b1);
    putchar(b2);

    putchar(65+1); // 66 对应的ascii码是B
    putchar('A'+1); // 对应的ascii的值是66，对应字符为B

    putchar('B'+' '); // 大写转小写 + ' ' , ' ' 值是32 
    putchar('b'-' '); // 小写转大写 - ' ' , ' ' 值是32


    return 0;
}
