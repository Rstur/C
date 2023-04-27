/*
请编写函数fun，它的功能是：求出ss所指字符串中指定字符的个数，并返回此值。
*/

#include <stdio.h>
#include <string.h>

int fun(char *str, char letter)
{
    int count = 0;
    while (*str)
    {
        if (*str == letter)
        {
            count++;
        }
        str++;
    }
    return count;
}

int main(void)
{
    char str[30];
    char letter;
    printf("Enter a string:\n");
    gets(str);
    printf("Enter a letter:\n");
    letter = getchar();
    printf("%d", fun(str, letter));

    return 0;
}
