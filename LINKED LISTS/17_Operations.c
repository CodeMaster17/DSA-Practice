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
int main()
{
    createList();
    Display();
    return 0;
}