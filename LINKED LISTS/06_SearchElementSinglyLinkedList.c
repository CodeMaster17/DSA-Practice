//HARSSHIT YADAV
//2105891
// Search element in Singly Linked list
#include<stdio.h>
#include<stdlib.h>
 struct Node
 {
    int data;
    struct Node *link;
 };

 void Search(struct Node *head,int  info)
 {
    int i = -1, counter=0;
    struct Node * ptr = head;
    while(ptr != NULL)
    {
        i++;
        if(ptr->data == info)
        {
            
            counter++;
            break;
        }
        ptr= ptr->link;
    }
    if(counter == 1)
    {
        printf("Element found at %d position", ++i);
    }
    else{
        printf("Element not found");
    }
 }
int main()
{
    
    struct Node * head = (struct Node *)malloc(sizeof(struct Node));
    struct Node * second = (struct Node *)malloc(sizeof(struct Node));
    struct Node * third = (struct Node *)malloc(sizeof(struct Node));
    struct Node * fourth = (struct Node *)malloc(sizeof(struct Node));
    struct Node * fifth = (struct Node *)malloc(sizeof(struct Node));

    head->data = 1;
    head->link = second;
    second->data = 2;
    second->link = third;
    third->data = 3;
    third->link = fourth;
    fourth->data = 4;
    fourth->link = fifth;
    fifth->data = 5;
    fifth->link = NULL;
    printf("Enter the element to be found : \n");
    int info;
    scanf("%d", &info);
    Search(head, info);
    return 0;
}