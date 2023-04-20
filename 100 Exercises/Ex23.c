/*
请编写函数fun，该函数的功能是：判断字符串是否为回文?若是则函数返回1，主函数中输出YES，否则返回0，主函数中输出NO。
回文是指顺读和倒读都是一样的字符串。
*/

#include <stdio.h>
#include <string.h>

int fun(char str[100])
{
    int i, temp = 0;
    int len;
    for (i = 0, len = strlen(str) - 1; i < len; i++, len--)
    {
        if (str[i] != str[len])
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
}

int main(void)
{
    char str[100];
    printf("输入字符串:\n");
    scanf("%s", str);
    if (fun(str))
    {
        printf("%s", "YES");
    }
    else
    {
        printf("%s", "NO");
    }

    return 0;
}