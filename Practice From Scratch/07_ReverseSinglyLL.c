// HARSHIT YADAV
// 2105891
//  Reverse singly linked list
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
void ReverseLL()
{
    struct Node *prev = NULL;
    struct Node *curr = head;
    struct Node *next = curr->link;
    while (next != NULL)
    {
        if (next->link == NULL)
        {
            head = curr;
        }
        else
        {
            curr->link = prev;
            prev = curr;
            curr = next;
            next = next->link;
        }
        curr = curr->link;
    }
}
int main()
{
    createLinkedList();
    display();
    ReverseLL();
    display();
    return 0;
}