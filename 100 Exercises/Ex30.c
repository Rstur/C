/*
请编写一个函数fun，它的功能是：求出一个2×M整型二维数组中最大元素的值，并将此值返回调用函数。
*/

#include <stdio.h>
#include <stdlib.h>
#define M 3

int fun(int arr[2][M])
{
    int i, j, max;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < M; j++)
        {
            if (arr[i][j] > arr[i][j + 1])
            {
                max = arr[i][j];
                arr[i][j + 1] = arr[i][j];
            }
        }
    }
    return max;
}

int main(void)
{
    int max = 0;
    int arr[2][M] = { 0 }, i = 0, j = 0;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < M; j++)
        {
            arr[i][j] = rand();
            printf("%2d ", arr[i][j]);
        }
        printf("\n");
    }

    printf("%d", fun(arr));

    return 0;
}
