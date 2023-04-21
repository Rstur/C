#include <stdio.h>

int main(void)
{
    int num1;
    int num2;
    int num3;
    printf("This program computes moduli.\n");
    printf("Enter an integer to serve as the second operand:\n");
    scanf("%d", &num1);
    printf("Now enter the first operand:");
    scanf("%d", &num2);
    while (num1 > 0 | num2 > 0)
    {
        num3 = num2 % num1;
        printf("%d %% %d is %d\n", num2, num1, num3);
        printf("Enter next number for first operand(<=0 to quit):");
        scanf("%d", &num1);
    }
    return 0;
}