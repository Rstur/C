/*
请编写一个函数void fun(int tt[M][N],int pp[N]),tt指向一个M行N列的二维函数组，
求出二维函数组每列中最小元素，并依次放入pp所指定一维数组中。二维数组中的数已在主函数中赋予。
*/

#include <stdio.h>
#define M 4
#define N 4

void fun(int tt[M][N], int pp[N])
{
    int min, i = 0, j = 0;
    for (i = 0; i < M; i++)
    {
        min = tt[i][0];
        for (j = 1; j < N; j++)
        {
            if (tt[i][j] < min)
            {
                min = tt[i][j];
            }
        }
        pp[i] = min;
    }
}

int main(void)
{
    int tt[M][N] = { 0 }, n = 0, i = 0, j = 0;
    int pp[N];
    for (i = 0; i < M; i++)
    {
        for (j = 0; j < N; j++)
        {
            tt[i][j] = i + j + 1;
        }
    }
    for (i = 0; i < M; i++)
    {
        for (j = 0; j < N; j++)
        {
            printf("%2d ", tt[i][j]);
        }
        printf("\n");
    }
    fun(tt, pp);
    for (i = 0;i < N;i++)
    {
        printf("%d", pp[i]);
    }

    return 0;
}