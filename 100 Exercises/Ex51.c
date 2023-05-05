/*
请编写函数fun，其功能是：将所有大于1小于整数m的非素数存入xx所指的数组中，非素数的个数通过k传回。
*/

#include<stdio.h>
#define M 100

int fun();

int main(void)
{
    int non_prime[M - 2];
    int num_non_prime;

    fun(non_prime, &num_non_prime);

    printf("non_prime between 2 and %d :\n", M);
    for (int i = 0;i < num_non_prime;i++)
    {
        printf("%d ", non_prime[i]);
    }
    printf("\nnon_prime number is %d\n", num_non_prime);

    return 0;
}

int fun(int non_prime[], int* num_non_prime)
{
    int i, j;
    *num_non_prime = 0;
    for (i = 2;i < M;i++)
    {
        for (j = 2;j < i;j++)
        {
            if (i % j == 0)
            {
                non_prime[(*num_non_prime)++] = i;
                break;
            }
        }
    }
}