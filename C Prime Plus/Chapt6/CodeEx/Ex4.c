#include <stdio.h>

int main(void)
{
    int m;
    int n;

    for (m = 0; m <= 5; m++)
    {
        for (n = 0; n <= m; n++)
        {
            for (int x = 'A'; x <= 'U'; x++)
            {
                printf("%c", x);
                if (m == n)
                {
                    printf("\n");
                }
            }
        }
    }
    return 0;
}