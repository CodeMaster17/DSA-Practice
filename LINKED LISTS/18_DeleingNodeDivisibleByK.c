// HARSSHIT YADAV
// 2105891
// Delete all the nodes that are divisible by K
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
} *head = NULL;

void createList()
{
    int n;
    printf("Enter the number of nodes you want to enter :");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
        struct Node *temp;
        printf("Enter the data :");
        scanf("%d", &newNode->data);
        newNode->next = NULL;
        if (head == NULL)
        {
            head = temp = newNode;
        }
        else
        {
            temp->next = newNode;
            temp = newNode;
        }
    }
}

void Display()
{
    struct Node *temp = head;
    while (temp != NULL)
    {
        printf("The data  is : %d\n", temp->data);
        temp = temp->next;
    }
}
void DeleteDivisibleByK()
{
    int num, pos = 0, length = 0;
    printf("Enter the divisor :");
    scanf("%d", &num);
    struct Node *temp = head->next, *ptr, *curr = head;
    while (temp != NULL)
    {
        length++;
        temp = temp->next;
    }
    temp = head;
    while (temp == NULL)
    {

        if (temp->data % num == 0)
        {
            if (pos == 0)
            {
                ptr = head;
                head = head->next;
                free(ptr);
            }
            else if (pos == length - 1)
            {
            }
        }
    }
}
int main()
{
    createList();
    Display();
    return 0;
}