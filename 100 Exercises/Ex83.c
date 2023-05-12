/*
假定输入的字符串中只包含字母和*号。请编写函数fun，它的功能使：将字符串尾部的*号全部删除，前面和中间的*号不删除。
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

    return 0;
}

void fun(char* s)
{
    int i = strlen(s);
    while (s[i - 1] == '*')
    {
        i--;
    }
    s[i] = '\0';
}
