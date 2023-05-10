/*
请编写一个函数fun，它的功能时：求Fibonacci数列中大于t的最小的一个数，结果由函数返回。其中Fibonacci数列F(n)的定义为：
F(0)=0,F(1)=1,F(n)=F(n-1)+F(n-2)
*/

#include <stdio.h>

int fibonaci(int i)
{
    if (i == 0)
    {
        return 0;
    }
    if (i == 1)
    {
        return 1;
    }
    return fibonaci(i - 1) + fibonaci(i - 2);
}

int  main()
{
    int i;
    for (i = 0; i < 10; i++)
    {
        printf("%d\t\n", fibonaci(i));
    }
    return 0;
}