/*
学生的记录是由学号和成绩组成，N名学生的数据已在主函数中放入结构体数组s中，请编写函数fun，
它的功能是：把指定分数范围内的学生数据放在b所指的数组中，分数范围内的学生人数由函数值返回。
*/

#include<stdio.h>
#define N  5

struct student
{
    int id;
    int score;
};

int fun();

int main(void)
{
    struct student s[N] = { {101,80},{102,50},{103,90},{104,90},{105,70} };
    struct student b[N];
    for (int i = 0; i < N; i++)
    {
        printf("ID:%d,Score:%d\n", s[i].id, s[i].score);
    }
    int l, h;
    printf("Enter the lowest score: ");
    scanf("%d", &l);
    printf("Enter the hightest score: ");
    scanf("%d", &h);

    int count = fun(s, b, &l, &h);
    printf("Student's score between %d and %d are :\n", l, h);
    for (int i = 0; i < count; i++)
    {
        printf("ID:%d,Score:%d\n", b[i].id, b[i].score);
    }
    printf("Count:%d", count);
}

int fun(struct student s[], struct student b[], int* l, int* h)
{
    int count = 0;
    for (int i = 0; i < N; i++)
    {
        if (s[i].score >= *l && s[i].score <= *h)
        {
            b[count] = s[i];
            count++;
        }
    }
    return count;
}
