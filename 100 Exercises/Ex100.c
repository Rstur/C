/*
请编写函数fun，其功能是：计算并输出 s=1+(1+2(0.5))+(1+2(0.5)+3(0.5))+...+(1+2(0.5)+3(0.5)+...+n(0.5))
*/

#include<stdio.h>


int main(void)
{
    double s = 0.0;
    double k = 0.5;
    int n = 1;

    for (int i = 1; i <= n; i++)
    {
        double sum = 0.0;
        for (int j = 1; j <= i; j++)
        {
            sum += j * k;
        }
        s += sum + 1;
    }
    printf("%f", s);

    return 0;
}
