// HARSSHIT YADAV
// 2105891
//  Searching in a binary tree

/*
    Algorithm :
      50
    /   \
   40   60
  / \   /\
20 45  55 70

    let suppose , we have tro find 55, first we will check wheather 55 is greater than key value of the root, i.e 55, and the answer is yes. Therefore we will move to right side of the BST, otherwise left. We will keep moving further in the same way until we find the element

    Total time taken in the process will be : T(n) = (height of the tree) * (time taken to compare two nodes)

    height of the tree can be:
      (log n )< =(h) <= (n)

*/

#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node *insert(struct Node *root, int data)
{
    if (root == NULL)
    {
        root = (struct Node *)malloc(sizeof(struct Node));
        root->data = data;
        root->left = NULL;
        root->right = NULL;
    }
    else if (data > root->data)
    {
        root->right = insert(root->right, data);
    }
    else if (data < root->data)
    {
        root->left = insert(root->left, data);
    }
    else
    {
        printf("\n Duplicate data \n");
        return root;
    }
}
struct Node *Search(struct Node *root, int key)
{
    if (root == NULL)
        return NULL;

    if (root->data == key)
    {
        return root;
    }
    else if (key < root->data)
    {

        return Search(root->left, key);
    }
    else
        return Search(root->right, key);
}

int main()
{
    int choice;
    int info;
    struct Node *root = (struct Node *)malloc(sizeof(struct Node));
    int data;
    root = NULL;
    while (1)
    {
        printf("Enter your choice : 1. insert 2. Search 3. exit");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the data : ");
            scanf("%d", &data);
            root = insert(root, data);
            break;
        case 2:

            printf("enter the element you want to search : \n");
            scanf("%d", &info);
            struct Node *point;
            point = Search(root, info);
            if (point == NULL)
            {
                printf("Element not found");
            }
            else
            {
                printf("Element found\n");
            }
            break;
        case 3:
            exit(0);
        default:
            break;
        }
    }
    return 0;
}