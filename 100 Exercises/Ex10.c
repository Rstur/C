/*
编写函数fun,它的功能是：利用以下的简单迭代方法求方程cos(x)-x=0的一个实根。
迭代步骤如下：
(1)取x1初值为0.0；
(2)x0=x1,把x1的值赋给x0;
(3)x1=cos(x0),求出一个新的x1;
(4)若x0-x1的绝对值小于0.000001，则执行步骤(5),否则执行步骤(2);
(5)所求x1就是方程cos(x)-x=0的一个实根，作为函数值返回。
程序将输出Root=0.739085。
*/
#include <stdio.h>
#include <math.h>
#define ERR 0.000001

float fun()
{
    float x1 = 0.0, x0;
    do
    {
        x0 = x1;
        x1 = cos(x0);
    } while (fabs(x0 - x1) >= ERR);//fabs()绝对值
    return x1;
}

int main(void)
{
    float cos = fun();
    printf("Root= %f", cos);

    return 0;
}
