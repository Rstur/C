/*
请编写一个函数fun，它的功能是：
比较两个字符串的长度，(不得调用C语言提供的求字符串长度的函数)，函数返回较长的字符串。若两个字符串长度相同，则返回第一个字符串。
*/

#include <stdio.h>
#include <string.h>

void fun(char *str1)
{
    int i = 0;
    printf("%d", str1[0]);
}

int main(void)
{
    char str1[4];
    // char str2[];
    printf("Enter first string:\n");
    scanf("%s", str1);
    printf("%s\n", str1);
    // printf("Enter second string:\n");
    // scanf("%s", str2);
    fun(str1);
    // printf("%d", fun(str1, str2));

    return 0;
}