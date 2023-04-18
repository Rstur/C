#include <stdio.h>

int main(void)
{
    int x;
    printf("Enter ASCII: ");
    scanf("%d", &x);
    printf("%d is the ASCII code for %c.\n", x, x);

    return 0;
}