/*
请编写函数fun，该函数的功能是：统一一含字符串中单词的个数，作为函数值返回。
一行字符串在主函数中输入，规定所有单词由小写字母组成，单词之间由若干个空格格开，一行的开始没有空格。
*/

#include<stdio.h>

int fun();

int main(void)
{
    char str[100];
    printf("Enter a string:");
    gets(str);

    int count = fun(str);
    printf("The number of words in string is %d", count);

    return 0;
}

int fun(char* s)
{
    int count = 1;
    while (*s)
    {
        if (*s == ' ')
        {
            count++;
            s++;
        }
        s++;//末尾'\0'视作一个空格计算单词
    }
    return count;
}