/*
请编写函数fun，其功能是：将s所指字符串中ASCII值为奇数的字符删除，串中剩余字符形成一个新串放在t所指的数组中。
*/

#include<stdio.h>

char fun();

int main(void)
{
    char ch[40];
    char str[40];
    printf("Enter a string:\n");
    gets(ch);
    fun(ch, str);

    return 0;
}

char fun(char* ch, char* str)
{
    int i, j;
    for (i = j = 0;ch[i] != '\0';i++)
    {
        if (ch[i] % 2 == 0) //ASCII值为奇数的字符
        {
            str[j++] = ch[i];
        }
    }
    str[j] = '\0';

    printf("%s", str);
}