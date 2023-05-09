/*
请编写一个函数fun，它的功能是：根据以下公式求X的值(要求满足精度0.0005，即某项小于0.0005时停止迭代)：
X/2=1+1/3+1×2/3×5+1×2×3/3×5×7+1×2×3×4/3×5×7×9+...+1×2×3×...×n/3×5×7×(2n+1)
程序运行后，如果输入精度0.0005，则程序输出为3.14...。
*/

#include<stdio.h>

double fun();

int main(void)
{
    double y;
    printf("Input e:");
    scanf("%lf", &y);
    printf("\ne=%lf,PI=%lf\n", y, fun(y));

    return 0;
}

double fun(double e)
{
    double s = 1.0, n = 1.0, t = 1.0, pi = 0.0;

    while (s >= e)
    {
        pi += s;
        t = n / (2 * n + 1);
        s *= t;
        n++;
    }
    pi = pi * 2;
    return pi;
}