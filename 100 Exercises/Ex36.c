/*
假定输入的字符串中只包含字母和*号。请编写函数fun，它的功能是：将字符串中的前导*号全部移到字符串的尾部。
*/

#include <stdio.h>

void fun(char *str)
{
    int i = 0;

    char *p = str;
    while (*p != '\0')
    {
        p++;
    }
    p--;
}

int main(void)
{
    char str[10];
    printf("Enter string:\n");
    scanf("%s", str);
    fun(str);
    printf("%s", str);

    return 0;
}