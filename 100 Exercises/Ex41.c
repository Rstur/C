/*
���д����fun���ú����Ĺ����ǣ���M��N�еĶ�ά�����е��ַ����ݣ����е�˳�����ηŵ�һ���ַ����С�
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

    printf("�����е�Ԫ�أ�\n");
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