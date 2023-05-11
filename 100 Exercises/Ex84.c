/*
请编写函数fun，其功能是：将两个两位数的正整数a b合并形成一个整数放在c中，
合并的方式是：将a数的十位和个位数依次放在c的个位和百位上，b数的十位和个位数依次放在c数的千位和十位上。
*/

#include<stdio.h>

int fun();

int main(void)
{
    int a = 12;
    int b = 34;

    printf("%d", fun(a, b));
}

int fun(int a, int b)
{
    int c = (a % 10) + (b - b % 10) + (a / 10 * 100) + (b % 10 * 1000);
    return c;
}