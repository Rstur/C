/*
m个人的成绩存放在score数组中，请编写函数fun,它的功能是：
将低于平均分的人数作为函数值返回，将低于平均分的分数放在below所指定的数组中
*/

int fun(float score[], int m, float below[])
{
    float sum = 0.0, avg;
    int i, cnt = 0;

    // 计算平均分
    for (i = 0; i < m; i++)
    {
        sum += score[i];
    }
    avg = sum / m;

    // 找出低于平均分的人数和分数
    for (i = 0; i < m; i++)
    {
        if (score[i] < avg)
        {
            below[cnt++] = score[i];
        }
    }

    // 返回低于平均分的人数
    return cnt;
}
main()
{
    int i, n, below[9];
    int score[9] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    n = fun(score, 9, below);
    printf("\nBelow the average score are :");
    for (i = 0; i < n; i++)
        printf("%d ", below[i]);
}