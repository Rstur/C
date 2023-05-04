/*
学生的记录由学号和成绩组成，N名学生的数据已在主函数中放入结构体数组s中，请编写函数fun，
它的功能使：把分数最高的学生数据放在h所指的数组中，注意：分数最高的学生可能不止一个，函数返回分数最高的学生的人数。
*/
#include <stdio.h>
#define N 5
struct student
{
    char name[10];
    int score;
};

int fun(struct student s[], struct student h[])
{
    float maxscore = s[0].score;
    for (int i = 1;i < N;i++) {
        if (s[i].score > maxscore) {
            maxscore = s[i].score;
        }
    }
    int count = 0;
    for (int i = 0;i < N;i++) {
        if (s[i].score == maxscore) {
            h[count] = s[i];
            count++;
        }
    }
    printf("Hight score student:\n");
    for (int i = 0;i < count;i++) {
        printf("Name:%s,Score:%d\n", h[i].name, h[i].score);
    }

    return count;
}

int main(void)
{
    struct student s[N] = { {"A",60},{"B",80},{"C",90},{"D",85},{"E",90} };
    int i = 0;
    for (i = 0;i < N;i++) {
        printf("Name:%s,Score:%d \n", s[i].name, s[i].score);
    }
    struct student h[N];
    printf("%d", fun(s, h));
}