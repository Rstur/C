/*
请编写函数fun，该函数的功能是：将M行N列的二维数组中的字符数据，按列的顺序依次放到一个字符串中。
*/

#include <stdio.h>
#include <string.h>
#define M 3
#define N 3

void fun(char a[M][N])
{
    int i, j, t = 0;
    char ch[10];

    for (j = 0;j < N;j++)
    {
        for (i = 0;i < M;i++)
        {
            ch[t] = a[i][j];
            t++;
        }
    }
    ch[t] = '\0';
    printf("%s", ch);
}

int main(void)
{
    char a[M][N] = { {'a','b','c'},{'d','e','f'},{'g','h','i'} };

    printf("数组中的元素：\n");
    for (int i = 0;i < M;i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("%2c", a[i][j]);
        }
        printf("\n");

    }
    fun(a);
}