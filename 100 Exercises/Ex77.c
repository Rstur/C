/*
请编写一个函数fun，其功能是：将两个两位数的正整数ab合并形成一个整数放在c中。
合并方式是：将a数的十位和个位数依次放在c数的个位和百位上，b数的十位和个位数依次放在c数的十位和千位上。
*/

#include<stdio.h>

int fun();

int main(void)
{
    int a = 12, b = 34;
    printf("Combined:%d", fun(a, b));

    return 0;
}

int fun(int a, int b)
{
    int c = (a % 10) + (b - b % 10) + (a / 10 * 100) + (b % 10 * 1000);
    return c;
}