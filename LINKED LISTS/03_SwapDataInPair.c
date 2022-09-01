//HARSSHIT YADAV
//2105891
//
#include<stdio.h>
#include<stdlib.h>
struct Node
 {
    int data;
    struct Node *link;
 };

 void swap(struct Node *ptr){
    
 }

int main()
{
    
    struct Node *head = (struct Node *)malloc(sizeof(struct Node*));
    struct Node *second = (struct Node *)malloc(sizeof(struct Node*));
    struct Node *third = (struct Node *)malloc(sizeof(struct Node*));
    struct Node *fourth = (struct Node *)malloc(sizeof(struct Node*));
    struct Node *fifth = (struct Node *)malloc(sizeof(struct Node*));

    head->data = 1;
    head->link = second;
    second->data = 2;
    second->link = third;
    third->data = 2;
    third->link = fourth;
    fourth->data = 3;
    fourth->link = NULL;
    return 0;
}