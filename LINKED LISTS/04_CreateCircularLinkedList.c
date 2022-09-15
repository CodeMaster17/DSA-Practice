// HARSSHIT YADAV
// 2105891
// Create circular linked list and print it
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *link;
};

void traversing(struct Node *head)
{
    struct Node *ptr = head;
    do
    {
        printf("Element is : %d \n", ptr->data);
        ptr = ptr->link;
    } while (ptr != head);
}
int main()
{
    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    struct Node *second = (struct Node *)malloc(sizeof(struct Node));
    struct Node *third = (struct Node *)malloc(sizeof(struct Node));
    struct Node *fourth = (struct Node *)malloc(sizeof(struct Node));
    struct Node *fifth = (struct Node *)malloc(sizeof(struct Node));

    head->data = 1;
    head->link = second;
    second->data = 2;
    second->link = third;
    third->data = 3;
    third->link = fourth;
    fourth->data = 4;
    fourth->link = fifth;
    fifth->data = 5;
    fifth->link = head;
    traversing(head);
    return 0;
}