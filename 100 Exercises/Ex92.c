/*
请编写函数fun，它的功能是计算：s=(ln(1)+ln(2)+ln(3)+...+ln(m))(0.5),s作为函数值返回
*/

#include<stdio.h>
#include<math.h>

double fun(int m);

int main(void)
{
    int m;
    printf("Enter a num:\n");
    scanf("%d", &m);
    double s = fun(m);

    printf("%lf", s);
    return 0;
}

double fun(int m)
{
    double sum = 0.0;
    for (int i = 1; i <= m; i++)
    {
        sum += log(i);
    }
    double s = 0.5 * sum;
    return s;
}