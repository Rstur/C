/*
编写函数fun,该函数的功能是：从字符中删除指定的字符，同一字母的大、小写按不同字符处理。
*/

#include <stdio.h>
#include<ctype.h>

void fun(char* s, char d)
{
    int j = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] != d)
        {
            s[j++] = s[i];
        }
    }
    s[j] = '\0';
}

int main(void)
{
    char s[50];
    char d;
    printf("Enter some words:\n");
    scanf("%s", s);
    printf("Enter a letter:\n");
    scanf(" %c", &d); //%c前添加空格，忽略上一次输入的换行符

    fun(s, d);
    printf("%s", s);

    return 0;
}
