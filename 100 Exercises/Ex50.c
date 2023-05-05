/*
已知学生的记录是由学号和学习成绩构成，N名学生的数据已存入a机构体数组中。
请编写函数fun，该函数的功能是：找出成绩最高的学生记录，通过形参返回主函数(规定只有一个最高分)。
*/

#include<stdio.h>
#define N 6

void fun();

struct student
{
    char name[10];
    int score;
};

int main(void)
{
    int i = 0;
    struct student a[N] = { {"a",50},{"b",60},{"c",70},{"d",80},{"e",90},{"f",100} };
    struct student b;
    for (i = 0;i < N;i++)
    {
        printf("Name:%s,Score:%d\n", a[i].name, a[i].score);
    }
    fun(a, &b);
    printf("The hightest score:\n");
    printf("Name:%s,Score:%d", b.name, b.score);

    return 0;
}

void fun(struct student a[], struct student* b)
{
    int i;
    *b = a[0];
    for (i = 0;i < N;i++)
    {
        if (a[i].score > b->score)
        {
            *b = a[i];
        }
    }
}
