/*
N名学生的成绩已在主函数中放入一个带头节点的链表结构中，h指向链表的头节点。请编写函数fun，它的功能是：求出平均分，由函数值返回；
*/
#include<stdio.h>

int fun();
struct linknode
{
    int score;
    struct linknode* next;
};

int main(void)
{
    struct linknode node1 = { 50,NULL };
    struct linknode node2 = { 80,NULL };
    struct linknode node3 = { 60,NULL };
    struct linknode node4 = { 90,NULL };
    struct linknode node5 = { 70,NULL };

    node1.next = &node2;
    node2.next = &node3;
    node3.next = &node4;
    node4.next = &node5;

    fun(&node1);
}

int fun(struct linknode* head)
{
    struct linknode* p = head->next;
    int max = head->next->score;
    while (p != NULL)
    {
        if (p->score <= max)
        {
            p = p->next;
        }
        else
        {
            max = p->score;
        }
    }
    printf("%d", max);
}
