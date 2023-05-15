/*
请编写函数fun，该函数的功能是：移动一维数组中的内容，若数组中由n个整数，
要求把下标从0到p(p小于等于n－1)的数组元素平移到数组的最后。
*/

#include<stdio.h>
#define M 100
void fun(int* s, int t, int m)
{
    int a[M], i, j = 0;
    for (i = 0;i <= t;i++)
        a[i] = s[i];
    for (i = t + 1;i < m;i++)
    {
        s[j] = s[i];
        j++;
    }
    for (i = 0;i <= t;i++)
    {
        s[j] = a[i];
        j++;
    }
}
int main(void)
{
    int str[M] = { 1,2,3,4,5,6,7,8,9,10 };
    int i, t, n = 10;

    int test[M] = { 1,1,2,3,5,8,13,21,34,55,89,144 };
    printf("Before:\n");
    for (i = 0;i < n;i++)
        printf("%3d", str[i]);
    printf("\n\nEnter t: ");
    scanf("%d", &t);
    fun(str, t, n);
    printf("\nAfter:\n");
    for (i = 0;i < n;i++)
        printf("%3d", str[i]);
    printf("\n\n");
}
