#include <stdio.h>

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
    if (p == NULL || p->next == NULL)
    {
        printf("List is empty");
    }
    else
    {

        while (p != NULL)
        {
            printf("%d", p->data);
            p = p->next;
        }
    }
}

int main()
{

    int n;
    printf("Enter the number of elements you want to enter in the linked list\n");
    scanf("%d", &n);
    int A[] = (int)malloc(n * sizeof(int));
    printf("Enter the elements of the linked list");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }
    createList(A, n);
    Display(first);
    return 0;
}