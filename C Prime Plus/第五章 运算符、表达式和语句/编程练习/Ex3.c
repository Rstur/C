#include <stdio.h>
#define DAY 7

int main(void)
{
    int day;
    int weeks;
    int dayinweek;
    printf("Enter days value\n");
    scanf("%d", &day);
    while (day > 0)
    {
        weeks = day / DAY;
        dayinweek = day % DAY;
        printf("%d days equal to %d weeks and %d days. \n", day, weeks, dayinweek);
        printf("Enter next value\n");
        scanf("%d", &day);
    }
    return 0;
}