
// HARSSHIT YADAV
// 2105891
//  Sort a given singly linked list
// ###DONE
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
    printf("displaying funct :");
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
// sorting the LL
void SortLL()
{
    struct Node *current = (struct Node *)malloc(sizeof(struct Node));
    struct Node *next = (struct Node *)malloc(sizeof(struct Node));
    current = head;
    int temp;
    while (current != NULL)
    {
        next = current->link;
        while (next != NULL)
        {
            if (next->info < current->info)
            {
                temp = current->info;
                current->info = next->info;
                next->info = temp;
            }
            next = next->link;
        }
        current = current->link;
    }
    return;
}

int main()
{
    createLinkedList();
    display();
    SortLL();
    printf("sorting ended \n");
    display();
    return 0;
}