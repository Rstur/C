/*
假定输入的字符串中只包含字母和*号。请编写函数fun，它的功能是：
除了尾部的*号之外，将字母串中其他*号全部删除。形参p已指向字符串中最后的一个字母。不使用c的字符串函数。
*/

#include<stdio.h>

void fun();

int main(void)
{
    char s[] = "**bc****d**", * t;
    t = s;
    while (*t)
    {
        t++;
    }
    t--;
    while (*t == '*')
    {
        t--;
    }
    fun(s, t);
    printf("After:\n");
    puts(s);
}

void fun(char* a, char* p)
{
    char* q;int i = 0, k, j;
    for (q = a;q < p;q++)
    {
        if (*q != '*')
        {
            a[i++] = *q;
            k = i;
        }
    }
    for (q;*q;q++)
    {
        a[k++] = *q;
        j = k;
    }
    a[j] = '\0';
}