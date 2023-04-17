/*
请编写一个函数void fun(char a[],char b[],int n),其功能是：
删除各字符串中指定下标的字符。其中，a指向原字符串，删除后的字符串存放在b所指的数组中，n中存放指定的下标。
*/

#include <stdio.h>
#include <string.h>

void fun(char a[], char b[], int n)
{
    int len = strlen(a);
    if (a[n] != '\0')
    {
        for (int i = n; i < len; i++)
        {

            *(a + i) = *(a + i + 1); // 从删除位置开始往前覆盖
        }

        *(a + len) = '\0';

        strcpy(b, a); // 将a中元素付给b
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
}
