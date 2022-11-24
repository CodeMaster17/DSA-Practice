// HARSHIT YADAV
// 2105891
//  Implementing queue using array
#include <stdio.h>
#include <stdlib.h>
#define size 10

static int rear = -1, front = -1;
void enqueue(int q[], int data)
{
    if (front < size)
    {
        q[++front] = data;
        rear = 0;
    }
    else
    {
        printf("Queue full ");
    }
}

void dequeue()
{
    rear++;
}
void traverse(int ar[])
{
    printf("The queue is : \n");
    for (int i = rear; i < front; i++)
    {
        printf("%d ", ar[i]);
    }
}

int main()
{

    int ar[size], ch;

    while (1)
    {
        printf("Enter your choice : \n 1.enqueue \n 2. dequeue \n 3.traverse  \n 4. exit \n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter the data to be put in queue : ");
            int data;
            scanf("%d", &data);
            enqueue(ar, data);
            break;

        case 2:
            dequeue();
            break;

        case 3:
            traverse(ar);
            break;

        case 4:
            exit(0);
        default:
            break;
        }
    }

    return 0;
}