// Reverse a linked list iteratively
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *link;
};

struct Node *Reverse(struct Node *head)
{
    struct Node *curr = head, *prev = NULL, *forward;
    forward = curr->link;
    if (head == NULL || head->link == NULL)
    {
        return head;
    }
    while (forward != NULL)
    {
        forward = curr->link;
        curr->link = prev;
        prev = curr;
        curr = forward;
    }
    return prev;
}
void traversing(struct Node *head)
{
    printf("\nEntered in traversing function");
    struct Node *ptr = head;
    while (ptr != NULL)
    {
        printf("Element is : %d \n", ptr->data);
        ptr = ptr->link;
    }
    return;
}

int main()
{
    struct Node *head = (struct Node *)malloc(sizeof(struct Node *));
    struct Node *second = (struct Node *)malloc(sizeof(struct Node *));
    struct Node *third = (struct Node *)malloc(sizeof(struct Node *));
    struct Node *fourth = (struct Node *)malloc(sizeof(struct Node *));
    struct Node *fifth = (struct Node *)malloc(sizeof(struct Node *));

    head->data = 3;
    head->link = second;
    second->data = 4;
    second->link = third;
    third->data = 23;
    third->link = fourth;
    fourth->data = 1;
    fourth->link = NULL;
    head = Reverse(head);
    printf("going to call traversing function ");
    traversing(head);
}