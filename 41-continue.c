#include <stdio.h>

int main(int argc, char const *argv[])
{
    int sec = 0, min = 0, hour = 0;
    int count_sec = 0; // 累计秒数

    while (1)
    {
        sleep(1);
        printf("HH:MM:SS -> %02d:%02d:%02d \n", hour, min, sec);
        count_sec++; // 累计1 秒
        sec++;
        if (sec < 60) // 小于60秒， 不进位
            continue;
        sec = 0;      // 秒数清0
        min++;        // 分钟加1
        if (min < 60) // 小于60分钟， 不进位
            continue;
        min = 0;       // 分钟清0
        hour++;        // 小时加1
        if (hour < 24) // 小于24小时， 不进位
            continue;
        hour = 0; // 1天计时结束
        break;
    }
    printf("1天计时结束，共 %d 秒 \n", count_sec);
    return 0;
}
