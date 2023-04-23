#include <stdio.h>

int main(void)
{
    int i, j, k;
    char input;

    printf("Enter first letter:");
    scanf("%c", &input);

    for (i = 0; i < (int)(input - 'A' + 1); i++)
    {
        for (j = 1; j <= (int)(input - 'A' + 1 - i); j++)
            printf(" ");
        for (k = 0; k <= 2 * i; k++)
            if (k <= i)
                putchar('A' + k);
            else
                putchar('A' + 2 * i - k);
        printf("\n");
    }
}