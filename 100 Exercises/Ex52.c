/*
编写一个函数fun，它的功能是：实现两个字符串的连接(不使用库函数strcat)，即把p2所指的字符串连接到p1所指的字符串后。
*/

#include<stdio.h>

void fun();

int main(void)
{
    char str1[] = "Hello";
    char str2[] = " World!";
    fun(str1, str2);

    printf("Combined:%s", str1);

    return 0;
}

void fun(char* str1, char* str2)
{
    while (*str1)
    {
        str1++;
    }
    while (*str2)
    {
        *str1++ = *str2++;
    }
    *str1 = '\0';
}