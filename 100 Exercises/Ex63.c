/*
请编写一个函数fun，它的功能是：计算并输出给定整数n的所有因子(不包括1与自身)之和。规定n的值不大于1000。
*/

#include<stdio.h>

int fun();

int main(void)
{
    int n;
    printf("Enter a number:");
    scanf("%d", &n);
    printf("total:%d", fun(n));
}

int fun(int n)
{
    int j = 0;
    int i = 2;
    for (i = 2;i < n;i++)
    {
        if (n % i == 0) {
            j += i;
        }
    }

    return j;
}