/*
假定输入的字符串中只包含字母和*号。请编写函数fun，它的功能是：
只删除字符串前导和尾部的*号，串中字母之间的*号都不删除。
形参n 给出了字符串的长度，形参h给出了字符串中前导*号的个数，
形参e给出了字符串中最后的*个数。在编写时不得使用C语言给提供得字符串函数。
*/

#include <stdio.h>

void fun(char* a, int n, int h, int e);

int main(void)
{
    char str[] = "**bc****d**";
    int n = sizeof(str);
    int h = 2;
    int e = 2;

    printf("Before: %s\n", str);
    fun(str, n, h, e);
    printf("After : %s\n", str);

    return 0;
}

void fun(char* a, int n, int h, int e)
{
    char* p_begin = a + h;
    char* p_end = a + n - e - 1;

    while (*p_begin == '*')
    {
        p_begin++;
    }

    while (p_end > p_begin && *p_end == '*')
    {
        p_end--;
    }

    int len = p_end - p_begin + 1;

    for (int i = 0; i < len; i++)
    {
        a[i] = p_begin[i];
    }

    a[len] = '\0';
}