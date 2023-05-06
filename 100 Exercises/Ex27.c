/*
请编写一个函数fun,它的功能是：求出1到m之内(含m)能被7或11整除的所有整数放在数组a中，通过n返回这些数的个数。
*/

#include <stdio.h>

int fun(int* m, int* a)
{
    int i;
    int n = 0;
    for (i = 0; i <= *m; i++)
    {
        if (i % 7 == 0 || i % 11 == 0)
        {
            a[n] = i;
            n++;
        }
    }
    return n;
}

int main(void)
{
    int m;
    int a[100];
    printf("Enter a number:\n");
    scanf("%d", &m);
    int n = fun(&m, a);
    for (int i = 0; i < n; i++)
    {
        printf("%3d", a[i]);
    }
    printf("\nTotal number:%d", n);

    return 0;
}