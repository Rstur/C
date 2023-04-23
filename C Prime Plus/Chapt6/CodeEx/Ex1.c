#include <stdio.h>

int main(void)
{
    char a[26];
    int i;

    for (i = 0; i <= 26; i++)
    {
        a[i] = 'a' + i;
    }
    for (i = 0; i < 26; i++)
    {
        printf("%c", a[i]);
    }
    printf("\n");

    return 0;
}