/*
请编写一个函数fun(char *s)，该函数的功能使把字符串中的内容逆置
*/

#include <stdio.h>
#include <string.h>

void fun(char* s)
{
    int len = strlen(s);
    int i;
    for (i = 0; i < len / 2; i++)
    {
        char temp = s[i];
        s[i] = s[len - i - 1];
        s[len - i - 1] = temp;
    }
}

int main(void)
{
    char s[50];
    printf("Enter some words:", s);
    scanf("%s", s);
    fun(s);
    printf("Reverse result:%s", s);

    return 0;
}