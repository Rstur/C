/*
请编写函数fun，其功能是：将s所指字符串中ASCII值为偶数的字符删除，串中剩余字符形成一个新串放在t所指的数组中。
*/

#include <stdio.h>

void fun(char* str1, char* str2);

int main(void)
{
    char str1[20] = "aabbccddee";
    char str2[20];
    // printf("Enter a string:\n");
    // gets(str1);
    fun(str1, str2);
    printf("%s", str2);

    return 0;
}

void fun(char* str1, char* str2)
{
    while (*str1)
    {
        if ((*str1) % 2 != 0)
        {
            *str2 = *str1;
            str2++;
        }
        str1++;
    }
    *str2 = '\0';
}