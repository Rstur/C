/*
假定输入的字符串中只包含字母和*号，请编写函数fun，它的功能是：除了字符串前导和尾部的*号之外，将串中其他*号全部删除。
形参h已指向字符串第一个字符，形参p已指向字符串中最后一个字母。在编写程序时，不得使用C语言提供的字符串函数   。
*/

#include <stdio.h>

void fun(char* h, char* p);

int main(void)
{
    char str[] = "***bc**j**d***";
    char* h = str;
    char* p = h + sizeof(str) - 2;

    printf("Before: %s\n", str);
    fun(h, p);
    printf("After : %s\n", str);

    return 0;
}

void fun(char* h, char* p)
{
    char* t = h;
    char* s = p;


    while (*t == '*')
    {
        t++;
    }


    while (*s == '*')
    {
        s--;
    }


    char* q = t;
    while (q <= s)
    {
        if (*q == '*')
        {
            char* r = q;
            while (*r != '\0')
            {
                *r = *(r + 1);
                r++;
            }
            *r = '\0';
            s--;
        }
        else
        {
            q++;
        }
    }
}
