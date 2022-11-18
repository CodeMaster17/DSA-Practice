// HARSSHIT YADAV
// 2105891
//  stack Implementation using array
#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
int top = -1;
int stack[SIZE];
void push()
{
    int data;
    scanf("%d", &data);
    if (top == SIZE - 1)
    {
        printf("Overflow");
        return;
    }
    else
    {
        top = top + 1;
        stack[top] = data;
    }
}
void pop()
{
    if (top == -1)
    {
        printf("Underflow");
        return;
    }
    else
    {
        printf("the poped element is %d", stack[top]);
        top = top - 1;
    }
}
void display()
{
    int i;
    if (top == -1)
    {
        printf("Stack is empty");
        return;
    }
    else
    {
        for (int i = top; i >= 0; i--)
        {
            printf("%d", stack[i]);
        }
    }
}
int main()
{
    int choice;
    scanf("%d", &choice);
    while (1)
    {
        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
        case 4:
            exit(1);
        }
    }
    return 0;
}