/*
请编写函数fun，它的功能是：计算并输出n(包括n)以内能被5或9整除的所有自然数的倒数之和。
*/

#include<stdio.h>

double fun();

int main(void)
{
    int n;
    double s = 0.0;
    printf("Enter a num:\n");
    scanf("%d", &n);
    printf("%lf", fun(&s, &n));

    return 0;
}

double fun(double* s, int* n)
{
    for (int i = 1; i <= *n; i++)
    {
        if (i % 5 == 0 || i % 9 == 0)
        {
            *s += 1.0 / i;
        }
    }
    return *s;
}