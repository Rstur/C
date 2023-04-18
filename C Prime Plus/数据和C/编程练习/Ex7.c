#include <stdio.h>

int main(void)
{
    float inch;
    printf("Enter your height in inch: ");
    scanf("%f", &inch);
    printf("Your height in cm is %f.", inch * 2.54);

    return 0;
}