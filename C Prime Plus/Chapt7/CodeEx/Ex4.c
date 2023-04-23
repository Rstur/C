#include <stdio.h>

int main(void)
{
    char ch;
    int count = 0;

    while ((ch = getchar()) != '#')
    {
        if (ch == '.')
        {
            putchar('!');
            count++;
        }
        else if (ch == '!')
        {
            printf("!!");
            count++;
        }
        else
        {
            putchar(ch);
        }
    }
    putchar(ch);
    printf("%d", count);

    return 0;
}