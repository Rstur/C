/*
���дһ������void fun(char a[],char b[],int n),�书���ǣ�
ɾ�����ַ�����ָ���±���ַ������У�aָ��ԭ�ַ�����ɾ������ַ��������b��ָ�������У�n�д��ָ�����±ꡣ
*/
// nС��len
// ԭ�ַ���a���ֲ���

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

            *(b + i) = *(b + i + 1); // ��ɾ��λ�ÿ�ʼ��ǰ����
        }

        *(b + len) = '\0';

    }
}

int main()
{
    char str1[50], str2[50];
    int n;
    printf("�������ַ���\n");
    scanf("%s", str1);
    printf("������ɾ���ַ�����λ��\n");
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