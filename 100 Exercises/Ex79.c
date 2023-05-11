/*
已知学生的记录由学号和学习成绩构成，N名学生的数据已存入a结构体数组中。
请编写函数fun，该函数的功能是：找出成绩最低的学生记录，通过形参返回主函数(规定只有一个最低分)。s
*/

#include<stdio.h>

void fun();

struct student
{
    int id;
    int score;
};

int main(void)
{
    struct student s[5] = { {101,60},{102,60},{103,50},{104,80},{105,70} };
    struct student h[5];
    printf("all student:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("ID:%d,score:%d\n", s[i].id, s[i].score);
    }
    fun(s, h);
    printf("The mininum score:\n");
    printf("Id:%d,score:%d", h->id, h->score);

    return 0;
}

void fun(struct student s[], struct student* h)
{
    *h = s[0];
    for (int i = 0; i < 5; i++)
    {
        if (s[i].score < h->score)
        {
            *h = s[i];
        }
    }
}


