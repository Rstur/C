#include <stdio.h>

int main(void)
{
    char ch;
    int sp_num = 0;
    int el_num = 0;
    int other = 0;
    while ((ch = getchar()) != '#')
    {
        if (ch == ' ')
        {
            sp_num++;
        }
        else if (ch == '\n')
        {
            el_num++;
        }
        else
        {
            other++;
        }
        printf("space is %d,enter is %d,other is %d", sp_num, el_num, other);
    }
    return 0;
}