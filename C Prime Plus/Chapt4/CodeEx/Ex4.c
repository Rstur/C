#include <stdio.h>

int main(void)
{
    float height;
    char name[20];
    printf("Enter your eight(cm):\n");
    scanf("%f", &height);
    printf("Enter your name:\n");
    scanf("%s", name);
    printf("%s ,Your height is %f m.\n", name, height / 100.0);

    return 0;
}