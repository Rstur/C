/*
下列程序定义了N×N的二维数组，并在主函数中赋值。
请编写函数fun,函数的功能使求出数组周边元素的平均值并作为函数值返回给主函数中的s。
*/

#include <stdio.h>
#define N 4

float fun(int a[][N], int n)
{
    int i, j, k = 0, s = 0;
    for (i = 0; i < n; i++)
    {

        // for (j = 0; j < n; j++)
        // {
        //     if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
        //     {
        //         s += a[i][j];
        //         k++;
        //     }
        // }

        if (i == 0 || i == n - 1)
        {
            for (j = 0; j < n; j += 1)
            {
                s += a[i][j];
            }
        }
        else {
            s += a[i][0] + a[i][n - 1];
        }
    }
    return s / (4 * n - 4);
}

int main(void)
{
    int a[N][N] = { 0 }, n = 0, i = 0, j = 0;
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