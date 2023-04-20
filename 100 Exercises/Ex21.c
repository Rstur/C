/*
请编写函数fun,对长度位7个字符的字符串，除首尾字符外，将其余5个字符按ASCII码降序排列。
*/

#include <stdio.h>
#include <string.h>

int fun(char str[7])
{
    int i = 0, temp = 0;
    int j = 0;
    for (i = 1, j = 5; i <= j; i++, j--)
    {
        if (str[i] < str[j])
        {
            temp = str[i];
            str[i] = str[j];
            str[j] = temp;
        }
    }
    return 0;
}

int main()
{
    char str[7];
    int i = 0;

    printf("输入7个字符的字符串:\n");
    scanf("%s", str);

    fun(str);

    for (i = 0; i < 7; i++)
    {
        printf("%c", str[i]);
    }
}