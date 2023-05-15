/*
某学生的记录由学号、8门课程成绩和平均分组成，学号和8门课程的成绩已在主函数中给出。
请编写函数fun，它的功能是：求出该学生的平均分放在记录的ave成员中。请自己定义正确的形参。
*/

#include <stdio.h>

struct student
{
    char id[10];
    float score[8];
    float average;
};

void fun(struct student* p)
{
    double sum = 0;
    int i;
    for (i = 0; i < 8; i++)
    {
        sum += (*p).score[i];
    }
    (*p).average = sum / 8.0;
}

int main(void)
{
    struct student s = { "123456", 60, 70, 80, 90, 100, 60, 70, 80 };
    int i;
    fun(&s);

    printf("The %s student's score are:\n", s.id);
    for (i = 0; i < 8; i++)
    {
        printf("%.2f\n", s.score[i]);
    }
    printf("average is :%.2f", s.average);

    return 0;
}