/*
请编写一个函数fun，它的功能使：计算n门课程的平均分，计算结果作为函数值返回。
*/

#include<stdio.h>

struct study
{
    char class[10];
    int score;
};

int fun();

int main(void)
{
    struct study a[5] = { {"math",60},{"english",50},{"science",80},{"history",90},{"chemstry",70} };
    printf("%d", fun(a));

    return 0;
}

int fun(struct study a[])
{
    int sum;
    for (int i = 0; i < 5; i++)
    {
        sum += a[i].score;
    }
    int average = sum / 5;

    return average;
}