#include <stdio.h>

int main(void)
{
    float num;
    printf("Enter a floating-point value :");
    scanf("%d", &num);
    printf("fixed-point notation: %f\n", num);
    printf("expoential notation: %e\n", num);
    printf("p notation: %a\n", num);

    return 0;
}