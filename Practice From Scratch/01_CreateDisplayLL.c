// HARSHIT YADAV
// 2105891
//  Create and Display Linked List
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *link;
} *head = NULL;

void createNode()
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    printf("Enter the data you wan to store : ");
    scanf("%d", &temp->data);
    temp->link = NULL;
    if (head == NULL)
    {
        head = temp;
        ptr = head;
        return;
    }
    ptr->link = temp;
    ptr = temp;
    return;
}

void Display()
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
int main()
{
    createLinkedList();
    Display();

    return 0;
}