/*
请编写一个函数fun，它的功能是：将ss所指字符串中所有下标为奇数位置上的字母转换为大写(若该位置上不是字母，则不转换)。
*/
#include <stdio.h>
#include <string.h>

void fun(char *ch)
{
    int len;
    len = strlen(ch);
    for (int i = 0; i <= len; i++)
    {
        if ((i % 2 == 0) && (ch[i] >= 'a') && (ch[i] <= 'z'))
        {
            ch[i] = ch[i] - 32; // 大写字母和小写字母之间ASCII码差值为32
        }
    }
}

int main(void)
{

    char ch[50];
    printf("Enter words:");
    scanf("%s", ch);
    fun(ch);
    printf("%s", ch);

    return 0;
}