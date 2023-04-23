#include <stdio.h>

int main(void)
{
    int arr[8];

    printf("Enter eight numbers:");
    for (int i = 0; i < 8; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Reverse the numbers is:\n");
    for (int i = 7; i >= 0; i--)
    {
        printf("%d", arr[i]);
    }
    return 0;
}