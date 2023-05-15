/*
请编写函数fun，该函数的功能是移动字符串中内容，移动的规则如下：
把第1到第m个字符，平移到字符串的最后，把第m＋1到最后的字符移到字符串的前部。
*/

#include <stdio.h>
#include <string.h>

void fun(char* str, int m)
{
    char ch[7];
    char* p = str;
    int j = 0;
    for (int i = 0; i <= m; i++)
    {
        ch[i] = *p;
        p++;//定位第m+1个字符
    }
    for (int i = m + 1; i < 7; i++)
    {
        *str = *p;//从m+1个字符前移
        str++;
        p++;
    }
    for (int i = 0;i <= m;i++)
    {
        *str = ch[i];//末尾放入字符串ch
        str++;
    }
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
        printf("%s", str);
    }
    return 0;
}