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
};

int main(int argc, char const *argv[])
{

    struct student stu[3];
    stu[0].number = 1;
    strcpy(stu[0].name, "zhao");
    strcpy(stu[0].sex, "male");
    stu[0].age = 18;
    stu[0].score = 90.0;

    stu[1].number = 2;
    strcpy(stu[1].name, "liu");
    strcpy(stu[1].sex, "female");
    stu[1].age = 20;
    stu[1].score = 91.5;

    stu[2].number = 3;
    strcpy(stu[2].name, "wang");
    strcpy(stu[2].sex, "male");
    stu[2].age = 22;
    stu[2].score = 88.5;

    printf("stu1的信息为:\n");
    printf("学号:%d\n", stu[0].number);
    printf("姓名:%s\n", stu[0].name);
    printf("性别:%s\n", stu[0].sex);
    printf("年龄:%d\n", stu[0].age);
    printf("成绩:%f\n", stu[0].score);

    printf("stu2的信息为:\n");
    printf("学号:%d\n", stu[1].number);
    printf("姓名:%s\n", stu[1].name);
    printf("性别:%s\n", stu[1].sex);
    printf("年龄:%d\n", stu[1].age);
    printf("成绩:%f\n", stu[1].score);

    printf("stu3的信息为:\n");
    printf("学号:%d\n", stu[2].number);
    printf("姓名:%s\n", stu[2].name);
    printf("性别:%s\n", stu[2].sex);
    printf("年龄:%d\n", stu[2].age);
    printf("成绩:%f\n", stu[2].score);

    return 0;
}
