/*
编写函数fun，其功能使：计算并输出给定数组(长度为9)中每相邻两个元素之平均值的平方根之和
*/

#include<stdio.h>
#include<math.h>
#define N 9

double fun();

int main(void)
{
    int a[9] = { 2,4,6,8,10,12,14,16,18 };
    printf("%lf", fun(a));

    return 0;
}

double fun(int a[])
{
    int average = 0;
    double s = 0.0;
    for (int i = 0; i < N - 1; i++)
    {
        average = (a[i] + a[i + 1]) / 2;
        s += sqrt(average);
    }
    return s;
}

