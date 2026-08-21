#ifndef   __TIAOJIANBIANYI_H__
#define   __TIAOJIANBIANYI_H__

#define  LED1ON     1  
#define  LED1OFF    2  
#define  LED2ON     3  
#define  LED2OFF    4  
#define  N         20 
     
typedef struct student
{
    int number;   // 学号
    char name[N]; // 保存姓名的数组
    char sex[N];  // male female
    int age;      // 年龄
    float score;  // 成绩
}student_t ;

#endif // __TIAOJIANBIANYI_H
