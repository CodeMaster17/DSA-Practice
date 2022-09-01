// HARSSHIT YADAV
// 2105891
/* Perform the following operations on a Circular linked list using Switch Case.
i) create the list
ii) display its elements
iii) insert a node at the beginning
iv) insert a node at a given position
v) delete any given node */

#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *link;
};

// creation of cirrcular linked list
struct Node * createCircularLinkedList(){
    printf("Creating a circular linked list...");
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
    fifth->link = head;
    return head;
}

// displaying the circular linked list
void DisplayLinkedList(struct Node * head){
    printf("printing a linked list...");
    struct Node * ptr = head;
    do{
        printf("the number is  : %d \n", ptr->data);
        ptr= ptr->link;
    }while(ptr != head);
    return;
}

// inserting a node in between
struct Node * InsertAtBeginning(struct Node * head){
    struct Node * newNode =(struct Node *)malloc(sizeof(struct Node));
    int data;
    printf("Enter the data :"); 
    scanf("%d", &newNode->data);
    struct Node * ptr = head->link;
    newNode->link = head;
    while(ptr->link != head){
        ptr=ptr->link;
    } 
    ptr->link = newNode;
    return newNode;

}

// inserting at particular position
struct Node* InsertAtPosition(struct Node * head){
    struct Node * newNode =(struct Node *)malloc(sizeof(struct Node));
    int data;
    printf("Enter the data :"); 
    scanf("%d", &newNode->data);
    int i=1,pos;
    printf("Enter the position where data should be inserted : ");
    scanf("%d", &pos);
    struct Node * ptr = head->link;
    struct Node * prev = head;
    while(i != pos){
        ptr = ptr->link;
        i++;
    }
    newNode->link = ptr->link; 
    ptr->link = newNode;
    return head;
}
// delete a given node - use of 2nd pointer
struct Node* DeleteANode(struct Node * head){
    struct Node * ptr = head;
    int i=1,pos;
    printf("Enter the position where data should be deleted : ");
    scanf("%d", &pos);
    while(i < pos){
        ptr = ptr->link;
        i++;
    }
    struct Node * q=ptr->link;
    ptr->link = q->link;
    free(q);
    return head;
}
int main()
{
    printf("Enter your choice : \n 1. Create Linked List \n 2. Display Linked List \n 3.Insert a node at beginning \n Insert a node in given position \n 5. Delete any given node\n");
    int choice;
        struct Node * head;
    while(1)
    {
        printf("Enter choice");
    scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            head = createCircularLinkedList();
            break;
        case 2:
            DisplayLinkedList(head);
            break;
        case 3:
            head = InsertAtBeginning(head);
            break;
        case 4:
            head = InsertAtPosition(head);
            break;
        case 5:
            head=  DeleteANode(head);
            break;
        default :
        printf("Wrong Input");
        }
    }
    return 0;
}