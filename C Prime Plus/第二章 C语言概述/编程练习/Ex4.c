#include <stdio.h>

void jolly(void);
void deny(void);

int main()
{
    jolly();
    printf("\n");
    jolly();
    printf("\n");
    jolly();
    printf("\n");
    deny();

    return 0;
}

void jolly(void)
{
    printf("For he's a jolly good felow!");
}

void deny(void)
{
    printf("Which nobody can deny!");
}