#include <stdio.h>
#include <math.h>

int main(void)
{
    float age;
    printf("Enter your age: ");
    scanf("%f", &age);
    printf("Your age is %f,equal to %f seconds.", &age, age * 3.156 * pow(10, 7));

    return 0;
}