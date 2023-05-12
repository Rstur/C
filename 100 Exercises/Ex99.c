/*
请编写函数fun ，其功能是：计算并输出3到n之间所有素数的平方根之和。
*/

#include<stdio.h>
#include <stdbool.h>
#include <math.h>

double fun();
bool isPrime();

int main(void)
{
    int n = 300;
    printf("%.2lf", fun(n));

    return 0;
}

double fun(int n)
{
    double sum = 0.0;
    for (int i = 3; i <= n; i++)
    {
        if (isPrime(i))
        {
            sum += sqrt(i);
        }
    }
    return sum;
}

bool isPrime(int n)
{
    if (n < 2)
        return false;
    int limit = sqrt(n);
    for (int i = 2; i <= limit; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}