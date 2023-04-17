#include <stdio.h>

void br(void);
void cr(void);

int main()
{
    br();
    printf(",");
    cr();
    printf("\n");
    cr();
    printf("\n");
    br();

    return 0;
}

void br(void)
{
    printf("Brazil, Russia");
}

void cr(void)
{
    printf("India, China");
}