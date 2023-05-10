/*
请编写函数fun，其功能时：计算并输出下列多项式的值：
sn=1+1/1!+1/2!+1/3!+1/4!+...+1/n!
*/

#include<stdio.h>

void fun(int n, double* s);
int fac(int i);

int main()
{
    int n;
    double s = 1.0;
    printf("Enter a num:\n");
    scanf("%d", &n);
    fun(n, &s);
    printf("%lf", s);

    return 0;
}

int fac(int i)
{
    if (i == 1)
        return 1;
    else
        return fac(i - 1) * i;
}

void fun(int n, double* s)
{
    *s += 1.0 / fac(n);
}