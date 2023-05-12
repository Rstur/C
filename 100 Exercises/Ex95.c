/*
.假定输入的字符串中只包含字母和*号。请编写函数fun，它的功能是：使字符串的前导*号不得多于n个；
若多于n个，则删除多于的*号；若少于或等于n个，则什么也不做。字符串中间和尾部的*号不删除
*/

#include<stdio.h>
#include<string.h>

char fun();

int main(void)
{
    char s[] = "***a*d*f**";
    int n = 4;
    printf("%d\n", strlen(s));
    fun(s, n);
    printf("%s", s);
    printf("\n%d", strlen(s));

}

char fun(char* s, int n)
{
    int i = 0;
    while (*s == '*')
    {
        i++;
        s++;
    }
    if (i > n)
    {
        strcpy(s - i, s);
    }
}

