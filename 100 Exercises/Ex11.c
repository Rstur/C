/*
下列程序定义了N×N的二维数组，并在主函数中自动赋值。
请编写函数 fun(int a[][N]),该函数的功能是：使数组左下半三角元素中的值全部置成0。
*/

#include <stdio.h>

#define N 4

void fun(int a[][N])
{
    int i = 0, j = 0;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            a[i][j] = 0;
        }
    }
}

int main(void)
{
    int a[N][N] = {0}, n = 0, i = 0, j = 0;
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
    fun(a);
    printf("after\n");
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            printf("%2d ", a[i][j]);
        }
        printf("\n");
    }
}