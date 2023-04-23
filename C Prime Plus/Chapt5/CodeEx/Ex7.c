#include <stdio.h>

void fun(double n)
{
    printf("The cube of %f is %f.\n", n, n * n * n);
}

int main(void)
{
    double num;
    printf("Enter a number:\n");
    scanf("%lf", &num);
    fun(num);

    return 0;
}