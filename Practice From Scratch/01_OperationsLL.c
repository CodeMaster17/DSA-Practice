// HARSSHIT YADAV
// 2105891
//
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int info;
    struct Node *link;
} *head = NULL;

// create a linked list
void createLinkedList()
{
    int data, n;
    struct Node *temp;
    head = NULL;
    printf("Enter the number of nodes you want to enter : \n");
    scanf("%d", &n);
    int choice = 1;
    while (choice <= n)
    {
        struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
        printf("Enter the data to entry : ");
        scanf("%d", &newNode->info);
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
        choice++;
    }
}
// displaying the linked list
void display()
{
    struct Node *ptr;
    if (ptr == NULL)
    {
        printf("list is empty");
        return;
    }
    ptr = head;
    while (ptr != NULL)
    {
        printf("Entered data is : %d \n", ptr->info);
        ptr = ptr->link;
    }
    return;
}
// insert node at beginning
void insertBeginning()
{
    struct Node *temp;
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    printf("Enter the data you want to enter ");
    scanf("%d", &newNode->info);
    newNode->link = head;
    head = newNode;
}
// insert node at the end
void insertAtEnd()
{
    struct Node *ptr;
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    printf("Enter the data you want to enter ");
    ptr = head;
    scanf("%d", &newNode->info);
    while (ptr->link != NULL) // ###########################yhn dhyaan de.....ptr->link != NULL h
    {
        ptr = ptr->link;
    }
    ptr->link = newNode;
    newNode->link = NULL;
}
// insert Node at given position
void insertPos()
{
    struct Node *ptr, *ptrNext;
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    printf("Enter the data you want to enter ");
    ptr = head;
    ptrNext = head->link;
    scanf("%d", &newNode->info);
    int pos, i = 1;
    printf("\n enter the position you want to enmter the node ");
    scanf("%d", &pos);
    while (i < pos)
    {
        ptr = ptr->link;
        ptrNext = ptrNext->link;
        i++;
    }
    ptr->link = newNode;
    newNode->link = ptrNext;
}
// delete node at given position
void delete ()
{
    struct Node *ptr = head;
    struct Node *ptrNext = head->link;
    struct Node *ptrPrev = NULL;
    printf("Enter the node you want to delete : ");
    int pos, i = 1;
    scanf("%d", &pos);
    while (i < pos)
    {
        ptr = ptr->link;
        ptrNext = ptrNext->link;
        if (ptrPrev == NULL)
            ptrPrev = head;

        else
            ptrPrev = ptrPrev->link;

        i++;
    }
    free(ptr);
    ptrPrev->link = ptrNext;
}

int main()
{
    createLinkedList();
    display();
    // insertBeginning();
    // display();
    // insertAtEnd();
    // insertPos();
    delete ();
    display();
    return 0;
}