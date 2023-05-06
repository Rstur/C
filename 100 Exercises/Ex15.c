/*
请编写一个函数unsigned fun(unsigned w),w是一个大于10的无符号整数，
若w是n(n≥2)位的整数，则函数求出w后n－1位的数作为函数值返回。
*/

#include <stdio.h>

unsigned fun(unsigned w)
{
    unsigned t, s = 0, s1 = 1, p = 0;
    t = w;
    while (t > 10)
    {
        p = t % 10;
        s += p * s1;
        s1 *= 10;
        t = t / 10;
    }
    return s;
}

int main(void)
{
    unsigned w;
    printf("Enter a number:");
    scanf("%u", &w);
    if (w < 10)
    {
        printf("Too small!");
    }
    else
        printf("%u", fun(w));

    return 0;
}