#include <stdio.h>
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
} stu1 = {1, "zhao", "male", 22, 89.5}; // 分号不能省略

int main(int argc, char const *argv[])
{
    // 定义结构体变量
    struct student stu2 = {2, "li", "female", 23, 92.5};

    printf("stu1的信息为:\n");
    printf("学号:%d\n", stu1.number);
    printf("姓名:%s\n", stu1.name);
    printf("性别:%s\n", stu1.sex);
    printf("年龄:%d\n", stu1.age);
    printf("成绩:%f\n", stu1.score);

    printf("stu2的信息为:\n");
    printf("学号:%d\n", stu2.number);
    printf("姓名:%s\n", stu2.name);
    printf("性别:%s\n", stu2.sex);
    printf("年龄:%d\n", stu2.age);
    printf("成绩:%f\n", stu2.score);

    return 0;
}
