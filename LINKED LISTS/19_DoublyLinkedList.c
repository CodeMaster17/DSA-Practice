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

// insert node end
void InsertNodeEnd()
{
    int info;
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    struct Node *temp = head;
    printf("Enter the data you want to enter in the last :");
    scanf("%d", &info);
    newNode->data = info;
    while (temp != NULL)
    {
        temp = temp->next;
    }
    newNode->prev = temp->next;
    newNode->next = NULL;
    temp->next = newNode;
}

int main()
{
    createList();
    Display();
    InsertNodeBeg();
    Display();
    InsertNodeEnd();
    Display();
    return 0;
}