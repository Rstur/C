/*
请编写函数fun，其功能是：将两个两位数的正整数a,b合并成一个整数放在c中。
合并的方式是：将a数的十位和个位依次放在c数的千位和十位上，b数的十位和个位数依次放在c数的百位和个位上。
*/

#include<stdio.h>

int fun(char* a, char* b)
{
    char c[10];

    c[0] = a[0];
    c[1] = b[0];
    c[2] = a[1];
    c[3] = b[1];
    printf("%s", c);
}

int main(void)
{
    char a[8];
    char b[8];
    printf("Enter first num:\n");
    gets(a);

    printf("Enter second num:\n");
    gets(b);
    fun(a, b);
}