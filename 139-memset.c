#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 20

// 定义1个结构体类型
struct student
{
    int number;      // 学号     4
    char name[N];    // 姓名     20
    char sex[N / 2]; // 性别     10
    int age;         // 年龄     4
    float score;     // 成绩     4
};

int main(int argc, char const *argv[])
{
    struct student stu1;
    memset(&stu1, 0, sizeof(stu1));
    printf("stu1的信息:\n");
    printf("学号:%d\n", stu1.number);
    printf("姓名:%s\n", stu1.name);
    printf("性别:%s\n", stu1.sex);
    printf("年龄:%d\n", stu1.age);
    printf("成绩:%f\n", stu1.score);

    int buf[10];
    for (int i = 0; i < 10; i++)
    {
        printf("buf[%d]=%d\n", i, buf[i]);
    }
    printf("------------------\n");
    memset(buf,0,sizeof(buf));
    for (int i = 0; i < 10; i++)
    {
        printf("buf[%d]=%d\n", i, buf[i]);
    }

    return 0;
}
