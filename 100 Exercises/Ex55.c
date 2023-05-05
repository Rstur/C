/*
请编写函数fun，该函数的功能是：将M行N列的二维数组中的数据，按行的顺序依次放到一维数组中，一维数组中数据的个数存放在形参n所指的储存单元中。
*/

#include<stdio.h>
#define M 3
#define N 4

int fun();

int main(void)
{
    int a[M][N] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };
    int i, j;
    for (i = 0;i < M;i++)
    {
        for (j = 0;j < N;j++)
        {
            printf("%3d", a[i][j]);
        }
        printf("\n");
    }
    printf("\n%d", fun(a));

}

int fun(int a[M][N])
{
    int i, j;
    int t = 0;
    int b[12];
    for (i = 0;i < M;i++)
    {
        for (j = 0;j < N;j++)
        {
            b[t] = a[i][j];
            t++;
        }
    }
    printf("After:\n");
    for (i = 0;i < 12;i++)
    {
        printf("%d", b[i]);
    }
    return t;

}
