/*
编写一个函数，从传入的num个字符串中找出一个最长的一个字符串，并通过形参指针max传回该串地址(用****作为结束输入的标志)。
*/

#include<stdio.h>
#include<string.h>

char* fun(char(*str)[20], int num)
{
    char* max;
    max = str[0];
    for (int i = 0;i < num;i++)
    {
        if (strlen(max) < strlen(str[i]))
        {
            max = str[i];
        }
    }
    return max;
}

int main(void)
{
    char str[10][20];
    char* max;
    int k = 0;
    printf("Enter strings,end with ****\n");
    while (1)
    {
        gets(str[k]);
        if (strcmp(str[k], "****") == 0) break;
        k++;
    }
    printf("Strings have entered:\n");
    for (int i = 0;i < k;i++)
    {
        printf("%s ", str[i]);
    }
    max = fun(str, k);
    printf("Max is %s", max);
}
