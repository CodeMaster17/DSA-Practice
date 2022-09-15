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
    int info;
    printf("Enter the info na : ");
    scanf("%d", &info);
    struct Node * temp = head;
    if(head == NULL)
    {
        head->data = info;
        head->link = temp;
        temp->link = NULL;
    }
    else{
        while(temp != NULL)
        {
            temp= temp->link;
        }
        temp->data = info;
        temp->link = 
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