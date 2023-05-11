/*
请编写函数fun，其功能时：将两个两位数的正整数a、b合并形成一个整数放在c中，
合并的方式是：将a数的十位和个位数依次放在c数的十位和千位上，b的十位和个位整数依次放在c数的百位和个位上。
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
    int c = (b % 10) + (a - a % 10) + (b / 10 * 100) + (a % 10 * 1000);
    return c;
}