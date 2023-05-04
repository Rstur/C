/*
编写一个函数，该函数可以统计一个长度为2的字符串在另一个字符串中出现的次数。
*/

#include<stdio.h>
#include<string.h>

int fun(char str[], char ch[]) {
    int count = 0;
    for (int i = 0; i < strlen(str) - 1; i++)
    {
        if (str[i] == ch[0] && str[i + 1] == ch[1])
        {
            count++;
        }
    }
    return count;
}

int main(void) {
    char str[40];
    char ch[4];
    printf("Enter a string:");
    gets(str);
    printf("Enter sub string:");
    gets(ch);
    printf("%d", fun(str, ch));
}