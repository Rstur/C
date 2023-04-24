/*
请编写一个函数fun，它的功能是：找出一维整型数组元素中最大的值和它所在的下标，最大的值和它所在的下标通过形参传回。
数组元素中的值已在主函数中赋予。主函数中x是数组名，n 是x中的数据个数，max存放最大值，index存放最大值所在元素的下标。
*/

#include <stdio.h>
#include <string.h>

int fun(int *x, int *max, int *index)
{
    for (int i = 0; i < 8; i++)
    {
        if (x[i] > x[i + 1])
        {
            *max = x[i];
            *index = i;
        }
    }
}

int main(void)
{
    int x[8];
    int max = 0;
    int index = 0;
    printf("Enter some numbers:");
    for (int i = 0; i < 8; i++)
    {
        scanf("%d", &x[i]);
    }
    fun(x, &max, &index);
    printf("Max is %d,position is %d", max, index);

    return 0;
}