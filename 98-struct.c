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
}; // 分号不能省略

int main(int argc, char const *argv[])
{
    // 定义结构体变量
    struct student stu1;

    // 计算结构体大小 ，  4+20+10+4+4=42
    // 结构体的大小还要满足对齐的原则 ， 系统默认是4字节对齐
    // sex 需要补2个字节 ， 保证4字节对齐
    // struct student 的大小是44
    printf("结构体大小为:%d\n", sizeof(struct student));
    printf("结构体大小为:%d\n", sizeof(stu1));
    printf("sizeof(stu1.number)=%d\n", sizeof(stu1.number));
    printf("sizeof(stu1.name)  =%d\n", sizeof(stu1.name));
    printf("sizeof(stu1.sex)   =%d\n", sizeof(stu1.sex));
    printf("sizeof(stu1.age)   =%d\n", sizeof(stu1.age));
    printf("sizeof(stu1.score) =%d\n", sizeof(stu1.score));

    return 0;
}
