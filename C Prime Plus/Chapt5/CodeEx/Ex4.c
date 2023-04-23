#include <stdio.h>
#define CMTOM 100.0

int main(void)
{
    float height;
    float heightinM;
    printf("Enter your height(cm):\n");
    scanf("%f", &height);
    while (height > 0)
    {
        heightinM = height / CMTOM;
        printf("%f cm = %f m \n", height, heightinM);
        printf("Enter your height(cm):\n");
        scanf("%f", &height);
    }
    return 0;
}
