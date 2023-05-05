/*
请编写函数fun,该函数的功能是：实现B=A+A’，即把矩阵A加上A的转置，存放在矩阵B中。计算结果在main函数中输出。
*/

#include<stdio.h>

void fun();

int main(void)
{
    int a[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
    int b[3][3];
    int i, j;
    printf("A =\n");
    for (i = 0;i < 3;i++)
    {
        for (j = 0;j < 3;j++)
        {
            printf("%2d ", a[i][j]);
        }
        printf("\n");
    }
    printf("A' =\n");
    for (i = 0;i < 3;i++)
    {
        for (j = 0;j < 3;j++)
        {
            printf("%2d ", a[j][i]);
        }
        printf("\n");
    }
    fun(a, b);

    printf("B =\n");
    for (i = 0;i < 3;i++)
    {
        for (j = 0;j < 3;j++)
        {
            printf("%2d ", b[i][j]);
        }
        printf("\n");
    }

    return 0;
}

void fun(int a[3][3], int b[3][3])
{
    int i, j;
    for (i = 0;i < 3;i++)
    {
        for (j = 0;j < 3;j++)
        {
            b[i][j] = a[i][j] + a[j][i];
        }
    }
}