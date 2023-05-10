/*
学生的记录由学号和成绩组成N名学生的数据已在主函数中放入结构体数组s中，请编写函数fun，
它的功能时：把分数最低的学生数据放在h所指的数组中，
注意：分数最低的学生可能不止一个，函数返回分数最低的学生的人数。
*/

#include<stdio.h>

int fun();

struct student
{
    int id;
    int score;
};

int main(void)
{
    struct student s[5] = { {101,50},{102,60},{103,80},{104,50},{105,50} };
    struct student h[5];
    for (int i = 0;i < 5;i++)
    {
        printf("Name:%d,Score:%d\n", s[i].id, s[i].score);
    }
    int count = fun(s, &h);
    printf("The lowest score:\n");
    for (int i = 0;i < count;i++) {
        printf("Name:%d,Score:%d\n", h[i].id, h[i].score);
    }

    return 0;
}

int fun(struct student s[], struct student* h)
{
    float minscore = s[0].score;
    for (int i = 1;i < 5;i++) {
        if (s[i].score < minscore) {
            minscore = s[i].score;
        }
    }
    int count = 0;
    for (int i = 0;i < 5;i++) {
        if (s[i].score == minscore) {
            h[count] = s[i];
            count++;
        }
    }
    return count;
}