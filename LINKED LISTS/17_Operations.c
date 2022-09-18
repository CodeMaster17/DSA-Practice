// HARSSHIT YADAV
// 2105891
// Operations linked list
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *link;
} *head = NULL;

void createList()
{
    int n;
    head = NULL;
    struct Node *temp;
    printf("Enter the number of nodes you want to enter : \n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
        printf("Enter the data : \n");
        scanf("%d", &newNode->data);
        newNode->link = NULL;
        if (head == NULL)
        {
            head = temp = newNode;
        }
        else
        {
            temp->link = newNode;
            temp = newNode;
        }
    }
}

void Display()
{
    struct Node *pointer = head;
    if (pointer == NULL)
    {
        printf("List is empty");
        return;
    }

    while (pointer != NULL)
    {
        printf("entered data is : %d\n", pointer->data);
        pointer = pointer->link;
    }
    return;
}

void Search()
{
    int scr, pos = 0, count = 0;
    printf("Enter the data you want to search :");
    scanf("%d", &scr);
    struct Node *temp = head;
    if (head == NULL)
    {
        printf("List is empty");
        return;
    }
    while (temp != NULL)
    {
        if (temp->data == scr)
        {
            printf("ELement is found at : %d position", ++pos);
            count++;
        }
        pos++;
        temp = temp->link;
    }
    if (count == 0)
        printf("Element not found");
}

void Reverse()
{
    printf("Reversing the linked list \n");
    struct Node *prev, *temp, *q;
    prev = NULL, temp = head;
    while (temp != NULL)
    {
        q = temp->link;
        temp->link = prev;
        prev = temp;
        temp = q;
    }
    head = prev;
}

void Sort()
{
    printf("Sorting the linked list \n");
    struct Node *temp = head, *q, *next;
    int storage;
    next = temp->link;
    while (temp != NULL)
    {
       
    }
}
int main()
{
    createList();
    Display();

    Reverse();
    Display();

    Sort();
    Display();
    return 0;
}