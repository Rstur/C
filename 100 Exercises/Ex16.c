/*
请编写一个函数float fun(double h),函数的功能是对变量h中的值保留2位小数，并对第三位进行四舍五入(规定h中的值为正数)。
*/

#include <stdio.h>

float fun(double h)
{
    int temp = (int)(h * 100 + 0.5);

    h = temp / 100.0f;

    return h;
}

int main(void)
{
    float h;
    printf("Enter a number:");
    scanf("%f", &h);
    printf("Result is :%f", fun(h));

    return 0;
}