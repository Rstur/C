#include <stdio.h>

int main(void)
{
    char name[100];
    printf("Enter your name: \n");
    scanf("%s", name);

    printf("\"%s\"", name);
    printf("\n");
    printf("\"%20s\"", name);
    printf("\n");
    printf("\"%-20s\"", name);

    return 0;
}