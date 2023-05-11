/*
程序定义了N×N的二维数组，并在主函数中自动赋值。请编写函数fun,该函数的功能是：使数组左下半三角元素中的值乘以n。
*/

#include<stdio.h>
#include<stdlib.h>
#define N 3

void fun();

int main(void)
{
    int a[N][N];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            a[i][j] = rand();
            printf("%2d ", a[i][j]);
        }
        printf("\n");
    }

    int n;
    printf("Enter a number:\n");
    scanf("%d", &n);
    fun(a, n);
    printf("After:\n");
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("%2d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}

void fun(int a[][N], int n)
{
    int i = 0, j = 0;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j <= i; j++)
        {
            a[i][j] *= n;
        }
    }
}