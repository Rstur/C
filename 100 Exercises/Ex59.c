/*
请别写函数fun，该函数的功能是：将放在字符串数组中的M个字符串(每串的长度不超过N)，按顺序合并组成一个新的字符串
*/

#include<stdio.h>
#include<string.h>
#define N 100

void fun();

int main(void)
{
    char str[][N] = { "hello","world","are","you","ok?","no" };
    int m = 0;

    printf("Enter a number:\n");
    scanf("%d", &m);
    char str2[N];
    fun(str, str2, &m);
    printf("%s", str2);

    return 0;
}

void fun(char str[][N], char str2[], int* m)
{
    int count = 0;
    for (int i = 0;i < *m;i++)
    {
        for (int j = 0;j < strlen(str[i]);j++)
            str2[count++] = str[i][j];
    }
}