#include <stdio.h>
#define SIZE 8
int main(void)
{
    int a1[SIZE];
    int a2[SIZE];

    printf("Enter eight numbers:");
    for (int i = 1; i < SIZE; i++)
    {
        scanf("%d", &a1[i]);
        a2[i] = a2[i - 1] + a1[i];
        printf("%d\n", a2[i]);
    }
    return 0;
}