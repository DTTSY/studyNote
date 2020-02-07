/*
 * @Descripttion: 
 * @version: v1版本
 * @Author: 邓涛
 * @Date: 2020-02-04 18:54:00
 * @LastEditors  : 邓涛
 * @LastEditTime : 2020-02-07 18:03:06
 */
//头插法建立单链表
#include <stdio.h>
#include <stdlib.h> //malloc函数

struct Node
{                      //链表结点
    int data;          //数据
    struct Node *link; //指向下一个结点的指针
};

/* 头插法建立单链表：返回单链表的头指针 */
struct Node *buildLinkedList(int *arr, int n); /* 头插法建立单链表 */
void printLinkedList(struct Node *head);       /* 打印链表 */

int main(int argc, char const *argv[])
{
    int n, i;
    int *a;
    scanf("%d", &n);
    a = (int *)malloc(n * sizeof(int)); //动态内存分配申请数组空间
    for (i = 0; i < n; ++i)
    {
        scanf("%d", &a[i]);
    }

    struct Node *head = NULL; //声明一个指针变量head

    //创建链表，把返回的头指针赋值给head指针变量
    head = buildLinkedList(a, n);

    //打印链表：整个链表用head来代表。
    printLinkedList(head);

    free(a); //释放存储空间

    return 0;
}

/* 头插法建立单链表：返回单链表的头指针 */
struct Node *buildLinkedList(int *arr, int n) /* 头插法建立单链表 */
{
    struct Node *head, *temp;
    head = NULL;
    temp = NULL;
    for (int i = 0; i < n; i++)
    {
        head = (struct Node *)malloc(sizeof(struct Node));
        head->data = arr[i];
        head->link = temp;
        temp = head;
    }

    return head;
}
void printLinkedList(struct Node *head) /* 打印链表 */
{
    static int no = 0;
    while (head->link != NULL)
    {
        if (no++)
            printf(" ");
        printf("%d", head->data);
        head = head->link;
    }
    printf(" %d", head->data);
}