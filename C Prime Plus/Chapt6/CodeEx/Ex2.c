#include <stdio.h>

int main(void)
{
    int i;
    int n;
    for (i = 0; i <= 5; i++)
    {
        for (n = 0; n <= i; n++)
        {
            printf("$");
            if (i == n)
            {
                printf("\n");
            }
        }
    }
    return 0;
}