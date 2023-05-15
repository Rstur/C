/*
假定输入的字符串中只包含字母和*号。请编写函数fun，它的功能是：
使字符串中尾部的*号不得多于n个；若多于n个，则删除多于的*号；若少于或等于n个，则什么也不做，字符串中间和前面的*号不删除。
*/
#include <stdio.h>

void fun();

int main(void)
{
    char str[] = "a**bc***d**";
    fun(str);
    printf("%s", str);

    return 0;
}

void fun(char* a)
{
    int i = 0;
    char* p = a;

    while (*p)
    {
        i++;
        p++;
    }


    for (i = i - 1;a[i] == '*';i--)
    {
        a[i] = '\0';
    }
}