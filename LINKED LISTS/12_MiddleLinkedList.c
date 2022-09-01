// WAP in C to find out the middle part of the linked list

// Reverse a linked list iteratively
#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node * link;
};

// using approach 1 : finding the length of the linked list
int getLength(struct Node * head){
    int n = 0;
    struct Node * ptr = head;
    while(ptr != NULL)
    {
        n++;
        ptr = ptr->link;
    }
    printf("The length is : %d", n);
    return n ;
}


void FindMid(struct Node * head){
    int len = getLength(head);
    struct Node * curr = head;
    if(len%2 == 0)
    {
        int n = len/2;
        while(n > 0)
        {
            curr = curr->link;
            n--;
        }
        printf("the mid elemenmt present is : %d", curr->data);
    }
    else{
        int n = len/2 ;
        while(n > 0)
        {
            curr = curr->link;
            n--;
        }
        printf("the mid elemenmt present is : %d", curr->data);
    }
}


void traversing(struct Node *head){
    printf("\nEntered in traversing function \n");
    struct Node *ptr = head;
    while(ptr!=NULL){
        printf("Element is : %d \n", ptr->data);
        ptr= ptr->link;
    }
    return;
}

int main(){
    struct Node *head = (struct Node *)malloc(sizeof(struct Node*));
    struct Node *second = (struct Node *)malloc(sizeof(struct Node*));
    struct Node *third = (struct Node *)malloc(sizeof(struct Node*));
    struct Node *fourth = (struct Node *)malloc(sizeof(struct Node*));
    struct Node *fifth = (struct Node *)malloc(sizeof(struct Node*));

    head->data = 3;
    head->link = second;
    second->data =4;
    second->link = third;
    third->data = 23;
    third->link = fourth;
    fourth->data =1;
    fourth->link = fifth;
    fifth->data = 2;
    fifth->link = NULL;
   printf("going to call traversing function ");
    traversing(head);
    FindMid(head);
}