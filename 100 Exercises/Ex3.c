/*
请编写函数void fun(int x,int pp[],int *n),它的功能是：
求出能整除x且不是偶数的各整数，并按从小到大的顺序放在pp所指的数组中，这些除数的个数通过形参n返回
*/
#include <stdio.h>
#include <string.h>

void fun(int x, int pp[], int *n)
{
    int i;

    *n = 0;

    for (i = 1; i <= x / 3; i += 2)
    {
        if (x % i == 0 && i % 2 != 0)
        {
            pp[*n] = i;
            (*n)++;
        }
    }
}

int main()
{
    int x, aa[1000], n, i;
    printf("Input number:");
    scanf("%d", &x);
    fun(x, aa, &n);
    for (i = 0; i < n; i++)
        printf(" %d", aa[i]);
}
