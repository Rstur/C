/*
下列程序定义了N×N的二维数组，并在主函数中自动赋值。请编写函数fun(int a[][N],int n),该函数的功能是：将数组右上半三角元素中的值乘以m。
*/
#include<stdio.h>
#define N 3

void fun(int a[][N], int n)
{
    int i = 0, j = 0;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            if (j >= i)
            {
                a[i][j] *= n;
            }
        }
    }
}

int main(void) {
    int a[N][N] = { 0 }, n = 0, i = 0, j = 0;
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
    printf("Enter m:");
    scanf("%d", &n);
    fun(a, n);
    printf("after:\n");
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            printf("%2d ", a[i][j]);
        }
        printf("\n");
    }
}