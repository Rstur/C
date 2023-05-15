/*
假定输入的字符串中只包含字母和*号。请编写函数fun，它的功能是：将字符串中的前导*号全部移到字符串的尾部。
*/

#include <stdio.h>
#include<string.h>

void fun(char* str)
{
    int n = 0;
    int i = 0;
    char* p = str;
    while (*p == '*')
    {
        p++;
        n++;
    }//定位第一个非*字符
    while (*p)
    {
        str[i] = *p;//非*字符前移
        i++;
        p++;
    }
    while (n != 0)
    {
        str[i] = '*';//末尾添加n个*
        i++;
        n--;
    }
    str[i] = '\0';


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