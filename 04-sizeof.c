#include <stdio.h>

/**
 * @brief 主函数，程序的入口点，用于输出不同数据类型的字节大小。
 * 
 * @param argc 命令行参数的数量。
 * @param argv 指向命令行参数字符串数组的指针。
 * @return int 程序返回状态码，0 表示正常结束。
 */
int main(int argc, char const *argv[])
{
    // 输出 char 类型的字节大小，char 通常用于表示单个字符
    printf("sizeof(char)             =%d\n", sizeof(char));
    // 输出 unsigned char 类型的字节大小，unsigned char 用于表示无符号字符
    printf("sizeof(unsigned char)    =%d\n", sizeof(unsigned char));
    // 输出 short 类型的字节大小，short 是短整型，通常占用较少内存
    printf("sizeof(short)            =%d\n", sizeof(short));
    // 输出 unsigned short 类型的字节大小，unsigned short 是无符号短整型
    printf("sizeof(unsigned short)   =%d\n", sizeof(unsigned short));
    // 输出 int 类型的字节大小，int 是最常用的整型类型
    printf("sizeof(int)              =%d\n", sizeof(int));
    // 输出 unsigned int 类型的字节大小，unsigned int 是无符号整型
    printf("sizeof(unsigned int)     =%d\n", sizeof(unsigned int));
    // 输出 long 类型的字节大小，long 是长整型，通常比 int 能表示更大的数
    printf("sizeof(long)             =%d\n", sizeof(long));
    // 输出 unsigned long 类型的字节大小，unsigned long 是无符号长整型
    printf("sizeof(unsigned long)    =%d\n", sizeof(unsigned long));
    // 输出 long int 类型的字节大小，long int 与 long 通常是等价的
    printf("sizeof(long int)         =%d\n", sizeof(long int));
    // 输出 unsigned long int 类型的字节大小，unsigned long int 是无符号长整型
    printf("sizeof(unsigned long int)=%d\n", sizeof(unsigned long int));
    // 输出 float 类型的字节大小，float 是单精度浮点数类型
    printf("sizeof(float)            =%d\n", sizeof(float));
    // 输出 double 类型的字节大小，double 是双精度浮点数类型，精度更高
    printf("sizeof(double)           =%d\n", sizeof(double));
    // 输出 long double 类型的字节大小，long double 是扩展精度浮点数类型
    printf("sizeof(long double)      =%d\n", sizeof(long double));

    // 程序正常结束，返回状态码 0

    
    return 0;
}
