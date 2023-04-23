#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[30];

    printf("Enter a word:");
    scanf("%s", str);

    for (int i = strlen(str) - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }
    return 0;
}