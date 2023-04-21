#include <stdio.h>

int main(void)
{
    int num1;
    int count = 0;
    printf("Enter a number :");
    scanf("%d", &num1);
    while (count++ < 11)
    {
        printf("%d", num1++);
    }
    return 0;
}