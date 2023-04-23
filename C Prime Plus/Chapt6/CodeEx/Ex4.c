#include <stdio.h>

int main(void)
{
    int m;
    int n;
    char ch = 'A';
    for (m = 1; m < 7; m++)
    {
        for (n = 0; n < m; n++)
        {
            printf("%c", ch++);
        }
        printf("\n");
    }
    return 0;
}
