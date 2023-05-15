/*
请编写函数fun，它的功能是：求出1到100之内能被7或者11整除，
但不能同时被7和11整除的所有整数，并将他们放在a所指的数组中，通过n返回这些数的个数。
*/
#include <stdio.h>

void fun(int* a, int* n)
{
    int i, j = 0;
    for (i = 1; i <= 100; i++)
        if (!(i % 7 == 0 && i % 11 == 0) && (i % 7 == 0 || i % 11 == 0))//能被7或者11整除但不能同时被7和11整除
        {
            a[j++] = i;
        }
    *n = j;
}

int main()
{
    int aa[100], n, k;

    fun(aa, &n);
    for (k = 0; k < n; k++)
    {
        printf("%5d", aa[k]);
    }
}