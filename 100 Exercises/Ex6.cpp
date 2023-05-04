/*
请编写一个函数void fun(char a[],char b[],int n),其功能是：
删除各字符串中指定下标的字符。其中，a指向原字符串，删除后的字符串存放在b所指的数组中，n中存放指定的下标。
*/
// n小于len
// 原字符串a保持不变

#include <stdio.h>
#include <string.h>
// #define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
// #include <stdio.h>
// #include "../doctest.h"

void fun(char a[], char b[], int n)
{
    int len = strlen(a);
    strcpy(b, a);
    if (n < len)
    {
        for (int i = n; i < len; i++)
        {

            *(b + i) = *(b + i + 1); // 从删除位置开始往前覆盖
        }

        *(b + len) = '\0';

    }
}

int main()
{
    char str1[50], str2[50];
    int n;
    printf("请输入字符串\n");
    scanf("%s", str1);
    printf("请输入删除字符串的位置\n");
    scanf("%d", &n);
    fun(str1, str2, n);
    printf(str2);
    printf("\n");
    printf(str1);
}

// TEST_CASE("ex6") {

//     char str[500], buf[500];


//     strcpy(str, "sdfasfasfsdf");
//     fun(str, buf, 1000);
//     CHECK(strcmp(buf, "") == 0);




//     // CHECK(factorial(1) == 1);
//     // CHECK(factorial(2) == 2);
//     // CHECK(factorial(3) == 6);
//     // CHECK(factorial(10) == 3628800);
// }