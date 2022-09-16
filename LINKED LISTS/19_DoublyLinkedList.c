// HARSSHIT YADAV
// 2105891
// Do the operations on doubly linked list
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
} *head = NULL;

void createList()
{
    int n;
    printf("Enter the number of nodes you want to enter :");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
        struct Node *temp, *last = NULL;
        printf("Enter the data :");
        scanf("%d", &newNode->data);
        newNode->next = NULL;
        newNode->prev = NULL;
        if (head == NULL)
        {
            head = temp = newNode;
            temp->prev = last;
            last = head;
        }
        else
        {
            temp->next = newNode;
            temp = newNode;
            temp->prev = last;
            last = temp;
        }
    }
}

void Display()
{
    struct Node *temp = head;
    while (temp != NULL)
    {
        printf("The data  is : %d\n", temp->data);
        temp = temp->next;
    }
}

void InsertNodeBeg()
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    struct Node *temp, *last = NULL;
    printf("Enter the data :");
    scanf("%d", &newNode->data);
    newNode->next = head;
    newNode->prev = last;
    head = newNode;
}

int main()
{
    createList();
    Display();
    InsertNodeBeg();
    Display();
    return 0;
}