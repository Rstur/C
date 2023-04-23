#include <stdio.h>

int main(void)
{
    int days, sum, count;

    printf("Enter days:\n");
    scanf("%d", &days);
    count = 0;
    sum = 0;
    while (count++ < days)
    {
        sum = sum + count;
        printf("sum=%d\n", sum);
    }
    return 0;
}