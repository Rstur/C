/*
���дһ������void fun(char a[],char b[],int n),�书���ǣ�
ɾ�����ַ�����ָ���±���ַ������У�aָ��ԭ�ַ�����ɾ������ַ��������b��ָ�������У�n�д��ָ�����±ꡣ
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

            *(a + i) = *(a + i + 1); // ��ɾ��λ�ÿ�ʼ��ǰ����
        }

        *(a + len) = '\0';

        strcpy(b, a); // ��a��Ԫ�ظ���b
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
}
