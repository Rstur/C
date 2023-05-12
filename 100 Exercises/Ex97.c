/*
请编写函数fun，其功能是：计算并输出下列多项式值：
s=1+1/(1+2)+1/(1+2+3)+..1/(1+2+3...+50)
*/

#include<stdio.h>

double fun();

int main(void)
{
    int max = 50;
    printf("%lf", fun(&max));

    return 0;
}

double fun(int* max)
{
    double s = 0.0;

    for (int i = 1; i <= *max; i++)
    {
        int a = 0;
        for (int j = 1;j <= i;j++)
        {
            a += j;
        }
        s += 1.0 / a;
    }
    return s;
}