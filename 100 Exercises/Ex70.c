/*
编写函数fun，它的功能时：计算并输出下列级数和：
S=1/1*2+1/2*3+...+1/n(n+1)
*/

#include<stdio.h>

double fun(int n, double* s);

int main(void)
{
    int n;
    double s = 0.0;
    printf("Enter a num:\n");
    scanf("%d", &n);
    fun(n, &s);
    printf("%lf", s);

    return 0;
}

double fun(int n, double* s)
{
    for (int i = 1; i <= n; i++)
    {
        *s += 1.0 / (i * (i + 1));
    }
}

