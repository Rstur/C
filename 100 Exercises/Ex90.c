/*
请编写函数fun，其功能是：计算并输出下列多项式值:Sn=(1-1/2)+(1/3-1/4)+...+(1/(2n-1)1/2n).
*/

#include<stdio.h>

void fun();

int main(void)
{
    int n;
    printf("Enter a number:\n");
    scanf("%d", &n);
    fun(n);

    return 0;
}

void fun(int n)
{
    double s = 0.0;
    while (n > 0)
    {
        s += 1.0 / (2.0 * n - 1.0) - 1.0 / (2.0 * n);
        n--;
    }
    printf("%lf", s);
}