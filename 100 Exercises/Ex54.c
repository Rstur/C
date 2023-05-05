/*
学生的记录由学号和成绩组称个，N名学生的数据已在主函数中放入结构体数组s中，请编写函数fun，它的功能是：
把低于平均分的学生数据放在b所指的数组中，低于平均分的学生人数通过形参n传回，平均分通过函数值返回。
*/

#include<stdio.h>

struct student
{
    char name[10];
    int score;
};

void fun();

int main(void)
{
    struct student s[5] = { {"a",80},{"b",60},{"c",90},{"d",70},{"e",60} };
    struct student b[5];
    int k = 0;
    fun(s, b, &k);
    printf("\n%d", k);
    for (int i = 0; i < k; i++)
    {
        printf("\nName:%s,Score:%d", b[i].name, b[i].score);
    }

}

void fun(struct student s[], struct student b[], int* k)
{
    int average = 0;
    int sum = 0;
    int count = 0;
    for (int i = 0;i < 5;i++)
    {
        sum += s[i].score;
        average = sum / 5;
    }
    printf("%d", sum);
    printf("\n%d", average);
    for (int i = 0; i < 5; i++)
    {
        if (s[i].score < average)
        {
            b[count] = s[i];
            count++;
        }
    }
    *k = count;
}
