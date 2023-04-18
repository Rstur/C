/*
编写一个函数fun，它的功能是：根据以下公式求P的值，结果由函数值带回。m与n为两个正整数，且要求m>n。 p=m!/n!(m-n)!
*/
#include <stdio.h>

int fac(int i)
{
    if (i == 1)
        return 1;
    else
        return fac(i - 1) * i;
}

int fun(int m, int n)
{
    int p;
    p = fac(m) / fac(n) * fac(m - n);

    return p;
}

int main(void)
{
    int m, n;
    printf("Enter m: \n");
    scanf("%d", &m);
    printf("Enter n: \n");
    scanf("%d", &n);

    if (m > n)
    {
        printf("p= %d", fun(m, n));
    }
    else
    {
        printf("Error,m!>n.");
    }
    return 0;
}
