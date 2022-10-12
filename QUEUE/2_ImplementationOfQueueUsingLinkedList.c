// HARSSHIT YADAV
// 2105891
// Implementation of Node uising linked list
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *link;
};

// to insert elements to the linked list
void insert(struct Node *head)
{
    struct Node *front = NULL;
    struct Node *rear = NULL;
    struct Node *q = head;
    if (head == NULL) // condition to check whether linked list is present or not
    {
        printf("Linked List is not defined");
        return;
    }

    printf("Enter the data : ");
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node)); // dynamically allocating memory to node
    scanf("%d", &temp->data);
    while (q->link != NULL)
    {
        q = q->link;
    }
    q->link = temp;
    temp->link = NULL;
}

// to display the stack
void Display(struct Node *head)
{
    struct Node *q = head;
    while (q != NULL)
    {
        printf(" The entered data is : %d \n", q->data);
        q = q->link;
    }
}

int main()
{
    int n, i = 0;
    printf("Enter the number of elements you want to enter in the queue : \n");
    scanf("%d", &n);
    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    printf("Enter the first data : \n");
    scanf("%d", &head->data);
    head->link = NULL;
    while (i < n - 1)
    {
        insert(head);
        i++;
    }
    Display(head);
    return 0;
}