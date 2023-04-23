#include <stdio.h>
#include <string.h>

int main(void)
{
    char ch;
    int count = 0;
    printf("Enter words(# to end):");
    while ((ch = getchar()) != '#')
    {
        if (count % 8 == 0)
        {
            putchar('\n');
        }
        if (ch == '\n')
        {
            printf("'\\n'==%3d", ch);
        }
        else if (ch == '\t')
        {
            printf("'\\t==%3d", ch);
        }
        else
        {
            printf("'%c'==%3d", ch, ch);
        }
    }
    return 0;
}