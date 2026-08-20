#include <stdio.h>
#include <string.h>

// 我们的系统默认是64位 ， 8字节对齐
// #pragma pack(8)  这个是默认值

struct mystruct
{
    unsigned char a;      // 1字节     1+1
    unsigned short b;     // 2字节     2
    unsigned int c;       // 4字节     4
    unsigned long long d; // 8字节     8
};

union myunion
{
    unsigned char a;      // 1字节     1+1
    unsigned short b;     // 2字节     2
    unsigned int c;       // 4字节     4
    unsigned long long d; // 8字节     8   // 成员中最大的字节数就是联合体的内存字节数
};

int main(int argc, char const *argv[])
{
    struct mystruct st1 = {0};
    union myunion un1 = {0};
    printf("sizeof(st1)= %d\n", sizeof(st1));
    printf("sizeof(un1)= %d\n", sizeof(un1));

    un1.a = 0x11;
    printf("un1.a = %#x\n", un1.a); // 总大小8字节 ， a可以访问前1个字节的空间
    printf("un1.b = %#x\n", un1.b); // 总大小8字节 ， b可以访问前2个字节的空间
    printf("un1.c = %#x\n", un1.c); // 总大小8字节 ， c可以访问前4个字节的空间
    printf("un1.d = %#llx\n", un1.d); // 总大小8字节 ， d可以访问前8个字节的空间
    printf("*******************************************\n");
    un1.b = 0x2211;
    printf("un1.a = %#x\n", un1.a); // 总大小8字节 ， a可以访问前1个字节的空间
    printf("un1.b = %#x\n", un1.b); // 总大小8字节 ， b可以访问前2个字节的空间
    printf("un1.c = %#x\n", un1.c); // 总大小8字节 ， c可以访问前4个字节的空间
    printf("un1.d = %#llx\n", un1.d); // 总大小8字节 ， d可以访问前8个字节的空间

    printf("*******************************************\n");
    un1.c = 0x44332211;
    printf("un1.a = %#x\n", un1.a); // 总大小8字节 ， a可以访问前1个字节的空间
    printf("un1.b = %#x\n", un1.b); // 总大小8字节 ， b可以访问前2个字节的空间
    printf("un1.c = %#x\n", un1.c); // 总大小8字节 ， c可以访问前4个字节的空间
    printf("un1.d = %#llx\n", un1.d); // 总大小8字节 ， d可以访问前8个字节的空间

    printf("*******************************************\n");
    un1.d = 0x8877665544332211;
    printf("un1.a = %#x\n", un1.a); // 总大小8字节 ， a可以访问前1个字节的空间
    printf("un1.b = %#x\n", un1.b); // 总大小8字节 ， b可以访问前2个字节的空间
    printf("un1.c = %#x\n", un1.c); // 总大小8字节 ， c可以访问前4个字节的空间
    printf("un1.d = %#llx\n", un1.d); // 总大小8字节 ， d可以访问前8个字节的空间

    return 0;
}
