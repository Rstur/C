#include <stdio.h>

int main(void)
{
    int m;
    int n;
    for (m = 0; m <= 5; m++)
    {
        for (n = 0; n <= m; n++)
        {
            printf("%c", 'F' - n);
            if (m == n)
            {
                printf("\n");
            }
        }
    }
    return 0;
}