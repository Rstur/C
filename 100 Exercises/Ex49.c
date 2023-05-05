/*
请编写函数fun，其功能是：将s所指字符串中下标位偶数同时ASCII值为奇数的字符删除，s中剩余的字符形成的新串放在t所指的数组中。
*/

#include<stdio.h>

char fun(char* ch, char* str)
{
    int i, j;
    for (i = j = 0;ch[i] != '\0';i++)
    {
        if (i % 2 == 1 || ch[i] % 2 == 0)
        {
            str[j++] = ch[i];
        }
    }
    str[j] = '\0';

    printf("%s", str);
}

int main(void)
{
    char ch[40];
    char str[40];
    printf("Enter a string:\n");
    gets(ch);
    fun(ch, str);

    return 0;
}