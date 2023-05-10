/*
请编写函数fun，其功能是：将两位数的正整数a、b合并成一个整数放在c中。
合并的方式是：将a数的十位和个位数依次放在c数的百位和个位上，b数的十位和个位数依次放在c数的十位和千位上。
*/

#include<stdio.h>

int fun();

int main(void)
{
    int i = 12, j = 34;
    // printf("Enter first num:\n");
    // scanf("%d", &i);
    // printf("Enter second num:\n");
    // scanf("%d", &j);
    printf("Combined:%d", fun(i, j));

    return 0;
}

int fun(int i, int j)
{
    int s = (i % 10) + (j - j % 10) + (i / 10 * 100) + (j % 10 * 1000);
    return s;
}