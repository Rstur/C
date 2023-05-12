/*
规定输入字符串中只包含字母和*号。请编写函数fun，它的功能是：将函数字符串中的前导*号全部删除，中间和尾部的*号不删除
*/

#include<stdio.h>
#include<string.h>

char fun(char* s);

int main(void)
{
    char s[] = "***a*d*f**";
    printf("%d\n", strlen(s));
    fun(s);
    printf("%s", s);
    printf("\n%d", strlen(s));
}

char fun(char* s)
{
    int i = 0;
    while (*s == '*')
    {
        i++;
        s++;
    }
    if (i > 0)
    {
        strcpy(s - i, s);
    }
}