// HARSSHIT YADAV
// 2105891
// Operation on linked list

#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int info;
    struct Node *link;
};
// struct Node *head = (struct Node *)malloc(sizeof(struct Node));
struct Node *createLink(struct Node *head)
{
    int data;
    struct Node *p = (struct Node *)malloc(sizeof(struct Node));
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    printf("Enter the data :");
    scanf("%d", &data);
    p->info = data;
    p->link = NULL;
    if (head == NULL)
    {
        // head = p;
        head->info = data;
        head->link = NULL;
        ptr = head;
        return head;
    }
    else
    {

        ptr->link = p;
        ptr = p;
        return head;
    }
}

void Display(struct Node *head)
{

    if (head == NULL)
    {
        printf("list is empty");
    }

    struct Node *pointer = head;
    while (pointer != NULL)
    {
        printf("The value of the data is :%d\n", pointer->info);
        pointer = pointer->link;
    }
}
int main()
{

    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    // struct Node *newhead = (struct Node *)malloc(sizeof(struct Node));
    head = NULL;
    int n;
    printf("Enter the number of nodes you want to add");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("loop running");
        head = createLink(head);
    }
    Display(head);
    return 0;
}