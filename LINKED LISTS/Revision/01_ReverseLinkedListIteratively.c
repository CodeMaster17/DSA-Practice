// Reverse a linked list iteratively
#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node * link;
};
void traversing(struct Node *head){
    printf("\nEntered in traversing function.. \n");
    struct Node *ptr = head;
    while(ptr!=NULL){
        printf("Element is : %d \n", ptr->data);
        ptr= ptr->link;
    }
    return;
}

// logic for reversing
struct Node * Reverse(struct Node * head)
{
    struct Node * curr = head;
    struct Node * prev= NULL;
    struct Node * forward= curr->link;
    while(curr != NULL){
        forward = curr->link;
        curr->link = prev;
        prev= curr;
        curr = forward;
    }
    return prev;
}

int main(){
    struct Node *head = (struct Node *)malloc(sizeof(struct Node*));
    struct Node *second = (struct Node *)malloc(sizeof(struct Node*));
    struct Node *third = (struct Node *)malloc(sizeof(struct Node*));
    struct Node *fourth = (struct Node *)malloc(sizeof(struct Node*));
    struct Node *fifth = (struct Node *)malloc(sizeof(struct Node*));

    head->data = 1;
    head->link = second;
    second->data =2;
    second->link = third;
    third->data = 3;
    third->link = fourth;
    fourth->data =4;
    fourth->link = NULL;
   head = Reverse(head);
   printf("going to call traversing function ");
    traversing(head);
}