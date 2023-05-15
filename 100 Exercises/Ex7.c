/*
请编写一个函数int fun(int *s,int t,int *k),用来求出数组的最大元素在数组中的下标并存放在k所指的储存单元中。
*/
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <stdio.h>
#include "../doctest.h"

int fun(int* s, int t, int* k)
{
    int i, m;
    *k = 0;
    for (i = 0; i < t; i++)
    {
        if (s[i] > s[*k])
            m = i;
    }
    *k = m;
}

void main(void)
{
    int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }, k;
    fun(a, sizeof(a) / sizeof(a[0]), &k);
    printf("%d,%d\n", k, a[k]);

    return 0;
}

// TEST_CASE("ex7") {

//     int a1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }, k;
//     fun(a1, sizeof(a1) / sizeof(a1[0]), &k);
//     CHECK(k == 9);


//     int a2[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//     fun(a2, sizeof(a2) / sizeof(a2[0]), &k);
//     CHECK(k == 8);


// }