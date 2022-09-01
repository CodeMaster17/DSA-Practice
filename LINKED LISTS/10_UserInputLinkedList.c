//HARSSHIT YADAV
//2105891
//
#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node * link;
}*head;

void createList(){
    struct Node * temp = head;
    if(head == NULL)
    {
        temp = head;
        temp->data;
    }
}

int main()
{
    int n;
    printf("enter the number of items you want to store in linkedlist : \n");
    scanf("%d", &n);
    for(int i = 0; i< n; i++)
    {
        createList();
    }
    return 0;
}