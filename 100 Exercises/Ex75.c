/*
请编写函数fun ，该函数的功能：将M行N列的二维数组中的数据，按列的顺学依次放到一维数组中。
*/

#include<stdio.h>
#define M 3
#define N 3

void fun();

int main(void)
{
    char a[M][N] = { {'a','b','c'},{'d','e','f'},{'g','h','i'} };
    char b[10];

    printf("a:\n");
    for (int i = 0;i < M;i++) {
        for (int j = 0; j < N; j++)
        {
            printf("%2c", a[i][j]);
        }
        printf("\n");

    }
    fun(a, &b);
    printf("%s", b);

    return 0;
}

void fun(char a[M][N], char* b)
{
    int i, j;
    for (j = 0;j < N;j++) {
        for (i = 0;i < M;i++) {
            *b = a[i][j];
            b++;
        }
    }
}