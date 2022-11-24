// HARSHIT YADAV
// 2105891
//  Implementing queue using LL
#include <stdio.h>
#include <stdlib.h>
#define size 10
int q[size];
int front = -1;
int rear = -1;

void enqueue(int x)
{
    if (front == -1 && rear == -1)
    {
        front = rear = 0;
        q[rear] = x;
    }
    else if ((rear + 1) % size == front)
    {
        printf("Queue full");
    }
    else
    {
        rear = (rear + 1) % size;
        q[rear];
    }
}

void dequeue()
{
    if (front == -1 && rear == -1)
    {
        printf("Queue is empty");
    }
    else if (front == rear)
    {
        front = rear = -1;
    }
    else
    {
        printf("%d ", q[front]);
        front = (front + 1) % size;
    }
}
void display()
{
    int i = front;
    if (front == -1 &&rear = -1)
    {
        printf("queue is empty ");
    }
    else
    {
        printf("Queue is : ");
        while (i != rear)
        {
            printf("%d", q[i]);
            i = (i + 1) % size;
        }
        printf("%d", q[rear]);
    }
}
int main()
{
    return 0;
}