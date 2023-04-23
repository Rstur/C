#include <stdio.h>

int main(void)
{
    int n;
    int ct_double = 0;
    double sum_double = 0;
    int ct_single = 0;
    double sum_single = 0;

    printf("Enter number(0 to end):");
    while (scanf("%d", &n) == 1 && n != 0)
    {
        if (n % 2 == 0)
        {
            sum_double += n;
            ct_double++;
        }
        else
        {
            sum_single += n;
            ct_single++;
        }
    }
    printf("Number of double:%d", ct_double);
    if (ct_double > 0)
    {
        printf("   average:%g", sum_double / ct_double);
    }
    putchar('\n');

    printf("Number of single:%d", ct_single);
    if (ct_single > 0)
    {
        printf("   average:%g", sum_single / ct_single);
    }
    putchar('\n');
    printf("\ndone\n");

    return 0;
}