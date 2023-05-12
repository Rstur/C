/*
请编写函数fun，计算并输出给定10个数的方差
*/

#include <stdio.h>
#include <math.h>

double fun(int* a);

int main(void)
{
    int a[10] = { 21,54,85,65,32,14,75,42,65,95 };
    printf("%lf", fun(a));

    return 0;
}

double fun(int* a)
{
    int* p = a;
    int sum = 0;
    double s2 = 0.0;
    while (p < a + 10)
    {
        sum += *(p++);
    }
    double average = sum / 10;
    for (int i = 0;i < 10;i++)
    {
        s2 += pow((a[i] - average), 2) / 10;
    }
    return s2;
}
