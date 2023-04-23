#include <stdio.h>

int main(void)
{
    int upper, lower, square, sum;

    printf("Enter two number:");
    while ((scanf("%d %d", &lower, &upper)) != 0 && (upper > lower))
    {
        sum = 0;
        for (int n = lower; n <= upper; n++)
        {
            sum += n * n;
        }
        printf("The sums of the squares from %d to %d is %d\n", lower, upper, sum);
        printf("Enter next two number:");
    }
    printf("Done");

    return 0;
}