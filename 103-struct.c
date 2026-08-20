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

    struct student stu1={1,"zhao","male",18,90.0};
    struct student stu2={2,"liu","female",20,91.5};
    struct student stu3={3,"wang","male",22,88.5};

    struct student *pstu ; // pstu是结构体类型的指针变量， 简称结构体指针
    pstu = &stu1; 

    // *pstu   就是 结构体变量stu1， *pstu 和stu1 是等价的 
    // *pstu.number 这样写是访问number的成员 ， 根据语法分析，在这种写法错误
    // 解决办法 ， 控制优先级 
    // (*pstu).number  ; 



    printf("stu1的信息为:\n");
    printf("学号:%d\n", (*pstu).number);
    printf("姓名:%s\n", (*pstu).name);
    printf("性别:%s\n", (*pstu).sex);
    printf("年龄:%d\n", (*pstu).age);
    printf("成绩:%f\n", (*pstu).score);

    pstu = &stu2;
    printf("stu2的信息为:\n");
    printf("学号:%d\n", (*pstu).number);
    printf("姓名:%s\n", (*pstu).name);
    printf("性别:%s\n", (*pstu).sex);
    printf("年龄:%d\n", (*pstu).age);
    printf("成绩:%f\n", (*pstu).score);

    pstu = &stu3;
    printf("stu3的信息为:\n");
    printf("学号:%d\n", (*pstu).number);
    printf("姓名:%s\n", (*pstu).name);
    printf("性别:%s\n", (*pstu).sex);
    printf("年龄:%d\n", (*pstu).age);
    printf("成绩:%f\n", (*pstu).score);

    return 0;
}
