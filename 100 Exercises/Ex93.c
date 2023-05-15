/*
请编写函数fun，它的功能是计算下列级数和，和值由函数值返回。
s=1+x+x(2)/2!+x(3)/3!+...x(n)/n!
*/
// x 的二次方除以 2 的阶乘
//x(2)/2!简化为x²/2

#include<stdio.h>

double fun();

int main(void)
{
    int n;
    double x;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Enter  x: ");
    scanf("%lf", &x);
    double s = fun(n, x);
    printf("The sum is: %lf\n", s);

    return 0;
}

double fun(int n, double x)
{
    double s = 1;
    double term = 1;
    for (int i = 1; i <= n; i++)
    {
        term *= x / i;
        s += term;
    }
    return s;
}