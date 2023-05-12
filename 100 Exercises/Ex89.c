/*
学生的记录是由学号和成绩组成，N名学生的数据已在主函数中放入结构体数组s中，请编写函数fun，它的功能是：
把高于等于平均分的学生数据放在b所指的数组中，高于等于平均分的学生人数通过形参n传回，平均分通过函数值返回。
*/

#include<stdio.h>

struct student
{
    int ID;
    int Score;
};

void fun();

int main(void)
{
    int average, sum;
    int count = 0;
    struct student s[5] = { {101,60},{102,80},{103,70},{104,90},{105,60} };
    for (int i = 0; i < 5; i++)
    {
        sum += s[i].Score;
        average = sum / 5;
    }
    printf("%d", sum);
    printf("\n%d", average);
    fun(s, average, &count);
    printf("\n%d", count);
}

void fun(struct student* s, int average, int* count)
{

    for (int i = 0; i < 5; i++)
    {
        if (s[i].Score > average)
        {
            (*count)++;
        }
    }
}
