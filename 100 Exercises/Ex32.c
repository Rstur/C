/*
请编写函数fun，其功能是：
将s所指字符串中除了下标为奇数、同时ASCII值也为奇数的字符之外，其余的所有字符都删除，串中剩余字符所形成的一个新串放在t所指的一个数组中。
*/

#include <stdio.h>
#include <string.h>

int fun(char *s, char *t)
{
    int i, j = 0;
    int len = strlen(s);
    for (i = 0; i < len; i++)
    {
        if ((i % 2 != 0) && (s[i] % 2 != 0))
        {
            t[j++] = s[i];
        }
    }
    printf("%s", t);

    return 0;
}

int main(void)
{
    char s[50];
    char t[50];
    printf("Enter words:");
    scanf("%s", s);
    fun(s, t);

    return 0;
}