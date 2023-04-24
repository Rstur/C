/*
请编写一个函数，用来删除字符串中的所有空格。
*/

#include <stdio.h>
#include <stdlib.h>

void fun(char *str)
{
    int i = 0;
    char *p = str;
    while (*p)
    {
        if (*p != ' ')
        {
            str[i] = *p;
            i++;
        }
        p++;
    }
    str[i] = '\0';
}

int main()
{
    char str[50];
    printf("Enter string:\n");
    gets(str);
    fun(str);
    printf("%s", str);

    return 0;
}