#include <stdio.h>

int main(void)
{
    char ch;
    int count = 0;
    printf("Enter words(# to end):");
    while ((ch = getchar()) != '#')
    {
        switch (ch)
        {
        case '!':
            printf("!!");
            count++;
            break;
        case '.':
            putchar('!');
            count++;
            break;
        default:
            putchar(ch);
            break;
        }
    }
    printf("\n");
    printf("count %d", count);

    return 0;
}