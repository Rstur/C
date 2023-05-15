/*
学生的记录时由学号和成绩组成，N名学生的数据已在主函数中放入结构体数组s中，请编写函数fun，
它的功能时：函数返回指定学号的学生数据，指定的学号在主函数中输入。
若没找到指定学号，在结构体变量中给学号置空串，给成绩置-1,作为函数值返回(用于字符串比较的函数时strcmp)。
*/

#include<stdio.h>
#include<string.h>

struct student
{
    char id[50];
    int score;
};

struct student* fun();

int main(void)
{
    struct student s[] = { {"aa",50},{"bb",60},{"cc",80},{"dd",70},{"ee",90} };
    char name[4];
    struct student* stu;
    printf("Enter id:");
    scanf("%s", name);
    int n = sizeof(s) / sizeof(s[0]);
    stu = fun(name, s, n);
    if (strcmp(stu->id, "") != 0)
    {
        printf("\nstudent: %s %d\n", stu->id, stu->score);
    }
    else
    {
        printf("Student not found.\n");
    }
}

struct student* fun(char name[], struct student s[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (strcmp(s[i].id, name) == 0)
        {
            return &s[i];
        }
    }
    static struct student not_found = { "", -1 };//添加static 声明为静态储存类型
    return &not_found;
}