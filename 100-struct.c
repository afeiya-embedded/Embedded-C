#include <stdio.h>
#include <string.h>

#define N 20

// 定义1个结构体类型
struct 
{
    int number;      // 学号     4
    char name[N];    // 姓名     20
    char sex[N / 2]; // 性别     10
    int age;         // 年龄     4
    float score;     // 成绩     4
} stu1,stu2; // 分号不能省略

int main(int argc, char const *argv[])
{

    printf("请输入stu1的学号>:"); 
    scanf("%d",&stu1.number);
    printf("请输入stu1的姓名>:");
    scanf("%s",stu1.name);
    printf("请输入stu1的性别>:");
    scanf("%s",stu1.sex);
    printf("请输入stu1的年龄>:");
    scanf("%d",&stu1.age);
    printf("请输入stu1的成绩>:");
    scanf("%f",&stu1.score);

    printf("请输入stu2的学号>:"); 
    scanf("%d",&stu2.number);
    printf("请输入stu2的姓名>:");
    scanf("%s",stu2.name);
    printf("请输入stu2的性别>:");
    scanf("%s",stu2.sex);
    printf("请输入stu2的年龄>:");
    scanf("%d",&stu2.age);
    printf("请输入stu2的成绩>:");
    scanf("%f",&stu2.score);


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
