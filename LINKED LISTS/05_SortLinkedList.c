//HARSSHIT YADAV
//2105891
//Sort a singly linkedList
#include<stdio.h>
#include<stdlib.h>
 struct Node
 {
    int data;
    struct Node *link;
 };

 struct Node * sortLinkedList(struct Node *head){
     struct Node *ptr1 = head;
     struct Node *ptr2 = head;
     struct Node *ptr3 = head;
     int temp;
     ptr2 = head->link;
     while(ptr3 != NULL)
     {  
        while(ptr2 != NULL)
        {
            if(ptr1->data > ptr2->data)
            {
                temp = ptr2->data;
                ptr2->data = ptr1->data;
                ptr1->data = temp;
            }
            ptr1=ptr1->link;
            ptr2=ptr2->link;

        }
        ptr3=ptr3->link;
        ptr1 = head;
        ptr2 = head->link;
     }
     return head;
}
void traversing( struct Node *head){
    printf("Entered in traversing function");
    struct Node *ptr = head;
    while(ptr!=NULL){
        printf("Element is : %d \n", ptr->data);
        ptr= ptr->link;
    }
    return;
}

int main()
{
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
    fourth->link = NULL;
 head = sortLinkedList(head);
 traversing(head);
    return 0;
}