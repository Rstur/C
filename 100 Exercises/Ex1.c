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