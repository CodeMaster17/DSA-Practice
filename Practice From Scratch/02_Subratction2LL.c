// HARSSHIT YADAV
// 2105891
// Let the number "XYZ" be represented as Z->Y->X in the linked list. If two such numbers are given in two different linked lists, then with the above representation, write a C-program to subtract the second number (represented in the second linked list) from the first number (represented in the first linked list) and store the result in the third linked list with above representation.
#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int info;
    struct Node *link;
} *head = NULL;
// create a linked list
struct Node *createLinkedList()
{
    int data, n, num;
    struct Node *temp;
    head = NULL;
    int choice = 1;

    printf("enter the number :");
    scanf("%d", &num);

    while (choice <= 3)
    {
        struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
        newNode->info = num % 10;
        num = num / 10;
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
    return head;
}
// displaying the linked list
void display(struct Node *head)
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
struct Node *subtract(struct Node *head1, struct Node *head2)
{
    struct Node *ptr1 = head1;
    struct Node *ptr2 = head2;
    struct Node *res = (struct Node *)malloc(sizeof(struct Node));
    struct Node *resHead = res = NULL;
    struct Node *resPtr = NULL;
    while (ptr1 != NULL)
    {
        if (res == NULL)
        {
            res->info = ptr1->info - ptr2->info;
            res->link = NULL;
            resHead = res;
            resPtr = res;
        }
        else
        {
            res->info = ptr1->info - ptr2->info;
            res->link = NULL;
            resPtr->link = res;
            resPtr = res;
        }
    }
    return resHead;
}
int main()
{
    printf("enter the 3 digits of 1st linked list :");
    struct Node *LL1 = createLinkedList();
    struct Node *LL2 = createLinkedList();
    // display(LL1);
    struct Node *LL3 = subtract(LL1, LL2);
    display(LL3);
    return 0;
}