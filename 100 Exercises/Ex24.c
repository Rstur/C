/*
请编写一个函数fun，它的功能是：将一个数字字符串转换为一个整数(不得调用C语言提供的将字符串转换为整数的函数)。
*/

#include <stdio.h>
#include <string.h>

int fun(char* str)
{
    int i = 0;
    while (*str != '\0')
    {
        i = i * 10 + *str - '0';
        str++;
    }
    return i;
}

int main(void)
{
    char str[100];
    printf("Enter number:\n");
    scanf("%s", str);
    printf("%d", fun(str));
}