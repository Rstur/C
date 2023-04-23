#include <stdio.h>

int main(void)
{
    char ch;
    int count = 0;
    int mark = 0;

    printf("Enter your words:\n");
    while ((ch = getchar()) != '#')
    {
        switch (ch)
        {
        case 'e':
            mark = 1;
            break;
        case 'i':
            mark = 0;
            count++;
            break;
        default:
            mark = 0;
            break;
        }
    }
    printf("count:%d", count);

    return 0;
}