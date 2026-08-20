#include <stdlib.h>
#include <stdio.h>

void show_array(int *array, size_t arraySize, int (*callBack)(void) )
{
    for (size_t i = 0; i < arraySize; i++)
    {
        array[i] = callBack(); // get_random_value() 调用函数, 返回随机值
    }
}

// 获取随机值
int get_random_value(void)
{
    return (rand()%100);
}

int main(void)
{
    int array[10];
    /* get_random_value 不能加括号，否则无法编译，因为加上括号之后相当于传入此参数时传入了 int , 而不是函数指针*/
    show_array(array, 10, get_random_value);
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
    return 0;
}