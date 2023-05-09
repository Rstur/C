/*
请编写函数fun，该函数的功能使：统计各年龄段的人数。N个年龄通过调用随机函数获得，并放在主函数的age数组中；
要求函数把0至9岁年龄段的人数放在d[0]中，把10至19岁年龄段的人数放在d[1]中，把20至29岁的人数放在d[2]中，
其余以此类推，把100岁(含100以上年龄的人数都放在d[10]中。结果在主函数中输出。s
*/

#include<stdio.h>
#include<stdlib.h>
#define N 20

void fun();

int main(void)
{
    int a[N];
    for (int i = 0; i < N; i++)
    {
        a[i] = rand() % 120;
        printf("%2d  ", a[i]);
    }
    int d[10];
    fun(a, d);

    for (int i = 0; i < 11; i++) {
        if (i == 10) {
            printf("\nNumber of people aged 100 or over: %d\n", d[i]);
        }
        else {
            printf("\nNumber of people aged between %d and %d: %d\n", i * 10, i * 10 + 9, d[i]);
        }
    }

    return 0;
}

void fun(int a[], int d[])
{
    for (int i = 0; i < 11; i++)
    {
        d[i] = 0;
    }
    for (int i = 0; i < N; i++)
    {
        int agebetween = a[i] / 10;
        if (agebetween > 10)
        {
            agebetween = 10;
        }
        d[agebetween]++;
    }
}
