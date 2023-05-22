/*
请编写函数fun，其功能时：计算并输出当x<0.97时下列多项式的值，直到｜Sn-S(n-1)｜<0.000001为止。
Sn=1+0.5x+0.5(0.5-1)/2!x(2)+...+0.5(0.5-1)(0.5-2).....(0.5-n+1)/n!x(n)
*/
#include<stdio.h>

double fun();

int main(void)
{
    double x = 0.9;
    double S = fun(x);
    printf("S(%f) = %f\n", x, S);

    return 0;
}

double fun(double x)
{
    int n = 1;
    double Sn = 1;

    while (1)
    {
        double a = 1;
        for (int i = 0; i < n; i++)
        {
            a *= (0.5 - i);
        }
        double b = 1;
        for (int i = 1; i <= n; i++)
        {
            b *= i;
        }

        double An = a / b * x * n;
        double S = Sn + An;

        if (S - Sn < 0.000001 && S - Sn > -0.000001)
        {
            break;
        }

        Sn = S;
        n++;
    }

    return Sn;
}
