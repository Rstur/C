/*
请别写函数fun,函数的功能使求出二维数组周边元素之和，作为函数值返回。二维数组中的值在主函数中赋予。
*/

#include <stdio.h>
#define N 4

float fun(int a[][N], int n)
{
    int i, j, k = 0, s = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
            {
                s += a[i][j];
            }
        }
    }
    return s;
}

int main(void)
{
    int a[N][N] = {0}, n = 0, i = 0, j = 0;
    int s;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            a[i][j] = i + j + 1;
        }
    }
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            printf("%2d ", a[i][j]);
        }
        printf("\n");
    }
    s = fun(a, N);
    printf("%d", s);

    return 0;
}