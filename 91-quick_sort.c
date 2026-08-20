#include <stdio.h>

// 函数功能: 快速排序
// array : 数组名
// left : 数组的第一个元素下标
// right :数组最后一个元素下标
void quick_sort(int *array, int left, int right)
{
    if (left >= right) // 如果左边索引大于或者等于右边的索引就代表已经整理完成一个组了 , 递归结束条件
    {
        return;
    }
    int i = left;
    int j = right;
    int key = array[left];
    // i>= j 时, 表示两者之间已经碰头, 不需要在比较了
    // i<j  表示没有碰头,需要继续比较
    while (i < j) // 控制在当组内寻找一遍
    {
        // i < j 表示没碰头
        // 找到比key小的数就停止
        while (i < j && array[j] >= key)
        {
            j--; // 向左移动 
        }
        int t = array[i];
        array[i] = array[j]; // array[i] 和array[j]交换 这是伪代码
        array[j] = t;

        //  i < j 表示没碰头 
        // 找到比key大的数
        while (i < j && array[i] <= key)
        {
            i++; // 向右移动
        }
        t = array[j];
        array[j] = array[i]; // array[i] 和array[j]交换 这是伪代码
        array[i] = t;
    }
    // i - 1 : 表示中间数的左一半
    quick_sort(array, left, i - 1);  // 递归左一半
    quick_sort(array, i + 1, right); // 递归右一半
}

void show_array(int *array,int size)
{
    printf("数组的内容为:");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");  
}


int main(int argc, char const *argv[])
{
    int a[6] = {6, 2, 7, 3, 8, 9};
    show_array(a,6);
    quick_sort(a, 0, 5);
    show_array(a,6);



    return 0;
}
