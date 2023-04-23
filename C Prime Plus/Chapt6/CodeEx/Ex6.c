#include <stdio.h>

int main(void)
{
    int i, j, x;
    int square, cube;

    printf("Enter the starting number:");
    scanf("%d", &i);
    printf("Enter the ending number:");
    scanf("%d", &j);
    printf("%s %5s %10s\n", "num", "sqare", "cube");
    for (x = i; x <= j; x++)
    {
        square = x * x;
        cube = x * square;
        printf("%d %5d %10d\n", x, square, cube);
    }
    return 0;
}