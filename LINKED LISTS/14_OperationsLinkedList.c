// various operations on singly linked list
#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
} *first = NULL;

void createList(int A[], int n)
{
    int i;
    struct Node *t, *last;
    first = (struct Node *)malloc(sizeof(struct Node));
    first->data = A[0];
    first->next = NULL;
    last = first;

    for (i = 1; i < n; i++)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

// displaying the list
void Display(struct Node *p)
{
    printf("Displaying linked list : \n");
    if (p == NULL || p->next == NULL)
    {
        printf("List is empty");
    }
    else
    {

        while (p != NULL)
        {
            printf("%d \n", p->data);
            p = p->next;
        }
    }
}

// reversing a linked list
struct Node *Reverse()
{
    struct Node *curr = first, *prev = NULL, *forward;
    forward = curr->next;
    if (first == NULL)
    {
        printf("\nEmpty List");
    }
    else
    {
        while (curr != NULL)
        {
            forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
        }
        return prev;
    }
}

// delete duplicate node for a sorted linked list
// struct Node *deleteDuplicate()
// {
//     printf("\nprogram in delete duplicate function\n");
//     if (first == NULL)
//     {
//         printf("The list is empty");
//     }
//     else
//     {
//         printf("program in else part\n");
//         struct Node *current = first, *index;
//         index = current->next;
//         printf("%d\n", index->data);
//         while (index == NULL)
//         {
//             if (current->data == index->data)
//             {
//                 current->next = index->next;
//                 index = current->next;
//             }
//             current = current->next;
//             index = index->next;
//         }
//     }
//     return first;
// }

// sort a linked list
void sortLinkedList()
{
    struct Node *current = first, *index;
    int temp;
    index = current->next;
    while (index == NULL)
    {
        while (current == NULL)
        {
            if (current->data > index->data)
            {
                temp = current->data;
                current->data = index->data;
                index->data = temp;
            }
        }
        
    }
}

int main()
{

    int n, *A;
    printf("Enter the number of elements you want to enter in the linked list\n");
    scanf("%d", &n);
    A = (int *)malloc(n * sizeof(int));
    printf("Enter the elements of the linked list\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }
    createList(A, n);
    Display(first);
    struct Node *newNode;
    // newNode = Reverse();
    // Display(newNode);
    // newNode = deleteDuplicate(first);
    sortLinkedList();
    Display(first);
    return 0;
}