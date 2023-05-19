/*
学生得记录由学号和成绩组称个，N名大学生得数据已在主函数中放入结构体数组s中，请编写函数fun，
它的功能时：按分数的高低排列学生的记录，高分在前。
*/

#include<stdio.h>
#define N 6

struct student
{
    char name[20];
    int score;
};

void fun(struct student s[])
{
    struct student temp;
    for (int i = 0;i < N - 1;i++)
    {
        for (int j = i + 1;j < N;j++)
        {
            if (s[j].score > s[i].score)
            {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
    printf("After:\n");
    for (int i = 0; i < N; i++)
    {
        printf("Name:%s,Score:%d\n", s[i].name, s[i].score);
    }
}

int main(void)
{
    struct student s[N] = { {"a",60},{"b",70},{"c",80},{"d",90},{"e",100},{"f",50} };
    for (int i = 0; i < N; i++)
    {
        printf("Name:%s,Score:%d\n", s[i].name, s[i].score);
    }
    fun(s);

    return 0;
}