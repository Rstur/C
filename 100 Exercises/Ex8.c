/*
编写函数fun,功能是：根据以下公式计算s,计算结果作为函数值返回；n通过形参传入。s=1+1/(1+2)+1/(1+2+3)+.......+1/(1+2+3+4+......+n)
*/

#include <stdio.h>

float fun(int n)
{
    float s = 0;
    float m = 0;
    for (int i = 1; i <= n; i++)
    {
        m += i;
        s += (1 / m);
    }
    return s;
}

int main()
{
    int n;
    printf("please enter n: ");
    scanf("%d", &n);
    float c = fun(n);
    printf("the result is :%f", c);

    return 0;
}
