#include<stdio.h>
struct Node{
    int coef;
    int expo;
    struct Node *link;
};
struct Node* create(struct Node * start){
    int i, n, ex, co;
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        scanf("%d%d", &co, &ex);
        start = insert(start, co , ex);
    }
    return start;
}

// inserting in the linked list
struct Node* insert(struct Node * start, int co, int ex){
    struct Node *temp, *q;
    temp=(struct Node*)malloc(sizeof(struct Node));
    temp-> coef = co;
    temp->expo = ex;
    if(start == NULL || (ex>start->expo))
    {
        temp-> link = start;
        start = temp;
    }
    else{
        q= start;
        while(q->link != NULL && q->link->expo >= ex)
        {
            q = q->link;
        }
    temp->link = q->link;
    q->link = temp;
    }
    return start;
}

// displaying the linked list
void display(struct Node * q){
    while(q != NULL)
    {
        printf("%dx^%d", q->expo, q->expo);
        q= q->link;
        if(q!=NULL)
        printf("+");
        else
        printf("\n");
    }
}

// addition of two polynomials
void poly_add(struct Node *p1, struct Node * p2)
{
    struct Node *start3;
    start3 = NULL;
    while(p1 != NULL && p2 != NULL)
    {
        if(p1->expo > p2->expo)
        {
            start3 = insert(start3, p1->coef, p1->expo);
            p1 = p1->link;
        }
        else if(p2->expo > p1->expo){
            start3 = insert(start3, p2->coef, p2->expo);
            p1= p1->link;
            p2=p2->link;
        }
    }
    while(p1 != NULL)
    {
        start3 = insert(start3, p1->coef, p1->expo);
        p1= p1->link;
    }
    while(p2 != NULL)
    {
        start3 = insert(start3, p2->coef, p2->expo);
        p2=p2->link;
    }
    display(start3);
}
void main()
{
    struct Node* start1=NULL, *start2 = NULL;
    start1 = create(start1);
    start2= create(start2);
    display(start1);
    display(start2);
    poly_add(start1, start2);
}

