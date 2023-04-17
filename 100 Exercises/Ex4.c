/*
请编写一个函数void fun(char *tt,int pp[]),统计在tt字符中"a"到"z"26各字母各自出现的次数，并依次放在pp所指的数组中。
*/

#include <string.h>

void fun(char *tt, int pp[])
{
    int i, len;

    // 将pp数组中的所有元素初始化为0
    memset(pp, 0, sizeof(int) * 26);

    // 统计字符串中每个字母出现的次数
    len = strlen(tt);
    for (i = 0; i < len; i++)
    {
        if (tt[i] >= 'a' && tt[i] <= 'z')
        {
            pp[tt[i] - 'a']++;
        }
        else if (tt[i] >= 'A' && tt[i] <= 'Z')
        {
            pp[tt[i] - 'A']++;
        }
    }
}
