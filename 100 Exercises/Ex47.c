/*
请编写一个函数void fun(char *ss)，其功能时：将字符串ss中所有下标为奇数位置上的字母转换为大写(若位置上不是字母，则不转换)。
*/

#include<stdio.h>
#include<ctype.h>
#include<string.h>

void fun(char* ss)
{
    int i = 0;
    int len = strlen(ss);
    for (i = 0;i < len;i++)
    {
        if (i % 2 == 0 || i == 0)
        {
            putchar(ss[i]);
        }
        else
        {
            putchar(toupper(ss[i]));
        }
    }
}

int main(void)
{
    char ss[40];
    printf("Enter a string:\n");
    gets(ss);
    fun(ss);

}