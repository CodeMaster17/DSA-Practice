// Delete the duplicate nodes in a single linked list. For example, if input is: 1->3->3->3->5->6, then output should be 1->3->5->6.

#include<stdio.h>
 #include<stdlib.h>

 struct Node
 {
    int data;
    struct Node *link;
 };

    void deleteDuplicate(struct Node* head){
        struct Node * ptr = head;
        while(ptr->link != NULL)
        {
            if((ptr->data) == (ptr->link->data)){
            ptr = ptr->link;
                continue;
            }
            else{
                printf(" The elements is : %d \n", ptr->data);
            ptr = ptr->link;
            }
        }
        return;
    }

    void Traversing(struct Node *head){
        struct Node * pointer;
        while(pointer != NULL)
        {
             printf(" The elements is : %d", pointer->data);
            pointer = pointer->link;
        }
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
 deleteDuplicate(head);
    return 0;
 }
 