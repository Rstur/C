/*
假定输入的字符串中只包含字母和*号，请编写函数fun，它的功能是：除了字符串前导和尾部的*号之外，将串中其他*号全部删除。
形参h已指向字符串第一个字符，形参p已指向字符串中最后一个字母。在编写程序时，不得使用C语言提供的字符串函数   。
*/

#include<stdio.h>

void fun();

int main(void)
{
    char s[] = "***a*d*f**";

    char* p = s;

    while (*p != '\0')
    {
        p++;
    }
    p--;
    fun(s, p);
    printf("%s", s);
    return 0;
}

void fun(char* h, char* p)
{
    while (*h == '*')
    {
        h++;
    }
    while (*p == '*')
    {
        p--;
    }
    char* q = h;
    while (q < p)
    {
        if (*q == '*')
        {
            char* w = q + 1;
            while (w <= p && *w == '*')
            {
                w++;
            }

        }
    }
}