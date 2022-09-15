#include <stdio.h>
#include <stdlib.h>
void createLinkedList();
void display();
void search();
void delete ();
void reverseLinkedList();
void sort();
void insertBeginning();
void insertLast();
void insertMiddle();

struct Node
{
    int info;
    struct Node *link;
} *head = NULL;

int main()
{
    printf("Program started : \n");
    createLinkedList();
    display();
    // printf("Running to add node in the beggiining\n");
    // insertBeginning();
    // display();
    // printf("Running to add node in the last\n");
    // insertLast();
    // display();
    // search();
    // printf("Sorting and displaying\n");
    // sort();
    printf("Deleting process started\n");
    delete ();
    display();
    return 0;
}
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

// insert in beginning
void insertBeginning()
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    printf("Enter the data to entry : ");
    scanf("%d", &newNode->info);
    newNode->link = head;
    head = newNode;
}

// searching an element
void search()
{
    struct Node *ptr = head;
    printf("Enter the data you want to search");
    int n, pos = 0, count = 0;
    scanf("%d", &n);
    while (ptr != NULL)
    {
        pos++;
        if (ptr->info == n)
        {
            printf("The element is found at : %d position", pos);
            count++;
        }
        ptr = ptr->link;
    }
    if (count == 0)
    {
        printf("Element not found \n");
    }
}
// sorting the linked list
void sort()
{
    struct Node *current, *index;
    int temp;
    current = head;
    index = NULL;
    while (current != NULL)
    {
        index = current->link;
        while (index != NULL)
        {
            if (current->info > index->info)
            {

                temp = current->info;
                current->info = index->info;
                index->info = temp;
            }
            index = index->link;
        }
        current = current->link;
    }
}

// deleting a node
void delete ()
{
    int del;
    printf("enter the data you wantr to delete :");
    scanf("%d", &del);
    struct Node *temp, *nextNode, *q;
    temp = head;
    if (head->info == del)
    {
        head = temp->link;
        q = temp;
        free(q);
        return;
    }
    while (temp->link->link != NULL)
    {
        if (temp->link->info == del)
        {
            q = temp->link;
            temp->link = q->link;
        }
    }
}