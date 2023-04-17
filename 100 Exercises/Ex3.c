/*
请编写函数void fun(int x,int pp[],int *n),它的功能是：
求出能整除x且不是偶数的各整数，并按从小到大的顺序放在pp所指的数组中，这些除数的个数通过形参n返回
*/

void fun(int x, int pp[], int *n)
{
    int i;

    *n = 0;

    for (i = 1; i <= x; i++)
    {
        if (i % x == 0 && i % 2 != 0)
        {
            pp[*n] = i;
            (*n)++;
        }
    }

    // 对pp数组进行从小到大的排序
    int j, temp;
    for (i = 0; i < (*n) - 1; i++)
    {
        for (j = i + 1; j < (*n); j++)
        {
            if (pp[i] > pp[j])
            {
                temp = pp[i];
                pp[i] = pp[j];
                pp[j] = temp;
            }
        }
    }
}
