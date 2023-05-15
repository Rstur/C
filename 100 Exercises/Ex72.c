/*
请编写函数fun，其功能是：将s所指字符串中下标为偶数的字符删除，串中剩余字符形成新串放在t所指数组中
*/

#include<stdio.h>

void fun(char* str, char* ch);

int main(void)
{
    char str[20] = "aasdkjwdioajsldkjwq";
    char ch[20];
    fun(str, ch);
    printf("%s", ch);

    return 0;
}

void fun(char* str, char* ch)
{
    int i, j;
    for (i = j = 0;str[i] != '\0';i++)
    {
        if (i % 2 != 0)//下标为偶数的字符
        {
            ch[j++] = str[i];
        }
    }
    ch[j] = '\0';
}