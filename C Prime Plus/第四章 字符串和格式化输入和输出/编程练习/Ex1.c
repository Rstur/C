#include <stdio.h>

int main(void)
{
    char first[20];
    char last[20];
    printf("Enter your first name: \n");
    scanf("%s", &first);
    printf("Enter your last name: \n");
    scanf("%s", &last);

    printf("Your name is %s %s", last, first.);

    return 0;
}