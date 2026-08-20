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

    struct student stu[3]={
        {1,"zhao","male",18,90.0},
        {2,"liu","female",20,91.5},
        {3,"wang","male",22,88.5}
    };


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
