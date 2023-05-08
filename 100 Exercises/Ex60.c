/*
请编写函数fun，该函数的功能是：删去一维数组中所有相同的数，使之只剩一个。
数组中的数已按由小到大的顺序排列，函数返回删除后数组中数据的个数。
*/

#include<stdio.h>

int fun();

int main(void)
{
    int num[] = { 12,12,12,12,13,13,13,14,14,14,15,15,15,16,16,16,17,17,18 };
    int len = fun(num, sizeof(num) / sizeof(num[0]));
    for (int i = 0; i < len; i++)
    {
        printf("%2d ", num[i]);
    }
    return 0;
}

int fun(int num[], int k)
{

    int i, j = 1;
    for (i = 1;i < k;i++)
        if (num[j - 1] != num[i])
        {
            num[j] = num[i];
            j++;
        }
    return j;
}