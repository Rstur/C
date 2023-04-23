/*
请编写一个函数fun，它的功能是：
比较两个字符串的长度，(不得调用C语言提供的求字符串长度的函数)，函数返回较长的字符串。若两个字符串长度相同，则返回第一个字符串。
*/

#include <stdio.h>
#include <string.h>

int my_strlen(char *str)
{
    char *p = str;

    while (*p != '\0')
    {
        p += 1;
    }
    return p - str;
}

char *fun(char *str1, char *str2)
{
    int len1 = my_strlen(str1);
    int len2 = my_strlen(str2);
    return len1 >= len2 ? str1 : str2;
}

int main(void)
{
    char str1[20];
    char str2[20];
    printf("Enter first string:\n");
    scanf("%s", str1);
    printf("Enter second string:\n");
    scanf("%s", str2);

    printf("The longest string is %s ", fun(str1, str2));

    return 0;
}