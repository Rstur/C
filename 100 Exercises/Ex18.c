/*
编写程序，实现矩阵(3行3列)的转置(即行列互换)。
*/

#include <stdio.h>
#include <stdlib.h>
#define N 3

int fun(int a[N][N])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < i; j++)
        {
            int temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
    }
}

int main(void)
{
    int a[N][N] = { 0 }, n = 0, i = 0, j = 0;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            a[i][j] = rand();
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
    fun(a);
    printf("Aftern change:\n");
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
            printf("%7d", a[i][j]);
        printf("\n");
    }

    return 0;
}