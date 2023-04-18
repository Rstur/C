/*
请编写一个函数int fun(int *s,int t,int *k),用来求出数组的最大元素在数组中的下标并存放在k所指的储存单元中。
*/

#include <stdio.h>

int fun(int *s, int t, int *k)
{
    int i;
    *k = 0;
    for (i = 0; i < t; i++)
    {
        if (s[i] > s[*k])
            *k = i;
    }
    return 0;
}

void main(void)
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, k;
    fun(a, 10, &k);
    printf("%d,%d\n", k, a[k]);
}