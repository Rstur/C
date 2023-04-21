#include <stdio.h>
#define MIN 60

int main(void)
{
    int min;
    int hour;
    int mins;
    printf("Enter a number(min):\n");
    scanf("%d", &min);
    while (min > 0)
    {
        hour = min / MIN;
        mins = min % MIN;

        printf("%d equal to %d hours and %d mins\n", min, hour, mins);
        printf("Next number(0 to quit):");
        scanf("%d", &min);
    }
    return 0;
}