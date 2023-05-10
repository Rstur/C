/*
假定输入的字符串中只包含字母和*号。请编写函数fun，它的功能是：删除字符串中所有*号。在编写函数时，不得使用C语言提供的字符串函数。
*/

#include<stdio.h>

void fun();

int main(void)
{
    char ch[] = "aa*ad*qw*a*d*wq";
    printf("%s", ch);

    fun(ch);
    printf("\n%s", ch);
}

void fun(char* str)
{
    char* p = str;
    while (*p)
    {
        if (*p != '*')
        {
            *str = *p;
            str++;
        }
        p++;
    }
    *str = '\0';
}