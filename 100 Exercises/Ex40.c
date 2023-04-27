/*
请编写函数fun，该函数的功能是移动字符串中内容，移动的规则如下：
把第1到第m个字符，平移到字符串的最后，把第m＋1到最后的字符移到字符串的前部。
*/

#include <stdio.h>
#include <string.h>

void fun(char* str, int m)
{
    char ch;
    int i, j;
    for (i = 1; i <= m; i++)
    {
        ch = str[0];
        for (j = 1; str[j] != '\0'; j++)
        {
            str[j - 1] = str[j];
        }
        str[j - 1] = ch;
    }
    printf("%s", str);
}

int main(void)
{
    int m;
    char str[] = "ABCDEFG";
    printf("Enter m:\n");
    scanf("%d", &m);
    if (m >= 7)
    {
        printf("Erro!");
        scanf("%d", &m);
    }
    else
    {
        fun(str, m);
    }
    return 0;
}