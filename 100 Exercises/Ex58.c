/*
编写函数fun，它的功能是：求n以内(不包括n)同时能被3与7整除的所有自然数之和的平方根s，并作为函数值返回。
*/

#include<stdio.h>
#include<math.h>

int fun();

int main(void)
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    int s = fun(&n);
    printf("%d", s);
}

int fun(int* n)
{
    int sum = 0;
    for (int i = 0;i < *n;i++)
    {
        if (i % 3 == 0 && i % 7 == 0)
        {
            sum += i;
        }
    }
    int s = sqrt(sum);

    return s;
}