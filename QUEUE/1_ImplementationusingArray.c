// HARSSHIT YADAV
// 2105891
// Implemnetation of Queue using array
#include <stdio.h>
#include <stdlib.h>

struct Queue
{
    int size;
    int f;    // front index
    int r;    // rear index
    int *arr; // array to dynamically allocate memory
};

int isFull(struct Queue *ptr) // function to check wheather the queue is full
{
    if (ptr->r == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isEmpty(struct Queue *ptr) // function to check wheather the queue is empty
{
    if (ptr->r == ptr->f)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void enqueue(struct Queue *ptr, int val) // function to take input of the elements
{
    if (isFull(ptr))
    {
        printf("Queue Overflow");
    }
    else
    {
        ptr->r = ptr->r + 1;
        ptr->arr[ptr->r] = val;
    }
}

int dequeue(struct Queue *q)
{ // function to delete the element in queue and return the deleted element
    int a = -1;
    if (isEmpty(q)) // function to check wheather the queue is empty
    {
        printf("this queue is full");
    }
    else
    {
        q->f++;
        q = q->arr[q->f];
    }
    return a;
}

int main()
{
    struct Queue q;
    q.size = 100;
    q.f = q.r = -1;
    q.arr = (int *)malloc(q.size * (sizeof(int)));

    if (isEmpty(&q))
    {
        printf("Queue is empty");
    }

    // enqueue few elements
    enqueue(&q, 12);
    enqueue(&q, 15);

    return 0;
}
