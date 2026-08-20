#include <stdio.h>
#include <string.h>

#define N 20

// 定义1个结构体类型
struct student
{
    int number;   // 学号
    char name[N]; // 姓名
    char sex[N];  // 性别
    int age;      // 年龄
    float score;  // 成绩
}; // 分号不能省略

int main(int argc, char const *argv[])
{
    struct student stu1; // 定义1个结构体变量
    stu1.number = 1;
    strcpy(stu1.name, "zhao");
    strcpy(stu1.sex, "male");
    stu1.age = 22;
    stu1.score = 89.5;

    printf("stu1的信息为:\n");
    printf("学号:%d\n", stu1.number);
    printf("姓名:%s\n", stu1.name);
    printf("性别:%s\n", stu1.sex);
    printf("年龄:%d\n", stu1.age);
    printf("成绩:%f\n", stu1.score);

    return 0;
}
