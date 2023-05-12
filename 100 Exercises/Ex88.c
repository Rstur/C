/*
假定输入的字符串中只包含字母和*号。请编写函数fun，它的功能是：
除了字符串前导的*号之外，将串中其他*号全部删除。在编写函数时，不得使用C语言提供的字符串函数。
*/

#include<stdio.h>
#include<string.h>

void fun();

int main(void)
{
    char s[] = "***a*d*f**";
    printf("%d\n", strlen(s));
    fun(s);
    printf("%s", s);
    printf("\n%d", strlen(s));

}

void fun(char* s)
{
    int i = 0;
    int j = 0;
    while (s[i] == '*')
    {
        i++;
    }
    j = i;
    for (; s[i] != '\0'; i++)
    {
        if (s[i] != '*')
        {
            s[j++] = s[i];
        }
    }
    s[j] = '\0';
}

