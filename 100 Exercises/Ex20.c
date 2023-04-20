/*
编写函数int fun(int lim,int aa[MAX]),该函数的功能是求出小于或等于lim的所有素数并放在aa数组中，该函数返回所求的素数的个数。
*/

#include <stdio.h>
#define MAX 100

int fun(int lim, int aa[MAX])
{
    int count = 0, i, j;
    for (i = 2; i < lim; i++)
    {
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
                break;
        }
        if (j == i)
        {
            aa[count] = i;
            count += 1;
        }
    }
    return count;
}

int main(void)
{
    int count = 0, lim, i;
    int aa[MAX];
    printf("Enter a number:\n");
    scanf("%d", &lim);
    count = fun(lim, aa);
    printf("%d\n", count);
    for (int i = 0; i < count; i++)
    {
        printf("%2d", aa[i]);
    }
    return 0;
}