/*
请编写一个函数void fun(int m,int k,int xx[]),该函数的功能是：将大于整数m且紧靠m的k各素数存入xx所指的数组中。
*/

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

// 判断一个数是否是素数
bool isPrime(int n)
{
    if (n < 2)
        return false;
    int limit = sqrt(n);
    for (int i = 2; i <= limit; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

// 将大于整数m且紧靠m的k个素数存入xx所指的数组中
void fun(int m, int k, int xx[])
{
    int count = 0; // 记录已找到的素数个数
    int n = m + 1; // 从m的下一个数开始寻找素数
    while (count < k)
    { // 找到k个素数为止
        if (isPrime(n))
        {
            xx[count] = n;
            count++;
        }
        n++;
    }
}

int main()
{
    int m = 10;
    int k = 5;
    int xx[k];     // 定义长度为k的数组
    fun(m, k, xx); // 调用fun函数
    for (int i = 0; i < k; i++)
    {
        printf("%d ", xx[i]);
    }
}
