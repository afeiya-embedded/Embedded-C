#include <stdio.h>
#include <string.h>

typedef struct
{
    unsigned int led1 : 1;     // led1 是一个开关量， 占用1个二进制的位
    unsigned int led2 : 1;     // led2 是一个开关量， 占用1个二进制的位
    unsigned int beep : 1;     // beep 是一个开关量， 占用1个二进制的位
    unsigned int keyval : 3;   // keyval 按键的值， 占用3个二进制的位
    unsigned int reverse : 26; // 占26个二进制的位， 用于对齐
} cmd_t;

int main(int argc, char const *argv[])
{
    printf("sizeof(cmd_t)=%d\n", sizeof(cmd_t));
    cmd_t cmd;      // 结构体定义了一个结构体变量
    cmd.led1 = 1;   // 给led1 赋值为1
    cmd.led2 = 0;   // 给led2 赋值为0
    cmd.beep = 1;   // 给beep 赋值为1
    cmd.keyval = 5; // 给keyval 赋值为5

    printf("cmd.led1=%d\n", cmd.led1);
    printf("cmd.led2=%d\n", cmd.led2);
    printf("cmd.beep=%d\n", cmd.beep);
    printf("cmd.keyval=%d\n", cmd.keyval);

    cmd.led1 = 10;   // 提示溢出， 会产生逻辑问题，取最低1位 1010 ，led1 = 0
    cmd.led2 = 11;   // 提示溢出， 会产生逻辑问题，取最低1位 1011 ，led2 = 1
    cmd.beep = 2;    // 提示溢出， 会产生逻辑问题，取最低1位  0010 ，beep = 0
    cmd.keyval = 10; // 提示溢出， 会产生逻辑问题，取最低3位 1010 ，keyval = 010
    printf("cmd.led1=%d\n", cmd.led1);
    printf("cmd.led2=%d\n", cmd.led2);
    printf("cmd.beep=%d\n", cmd.beep);
    printf("cmd.keyval=%d\n", cmd.keyval);


    return 0;
}
