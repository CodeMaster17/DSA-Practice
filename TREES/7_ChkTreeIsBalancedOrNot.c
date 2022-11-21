// HARSSHIT YADAV
// 2105891
//  check wheather a tree is balanced orr not
/*
      50
    /   \
   40   60
  /
20

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

// time complexity = O(n) - since we are traversing each node
// space complexity = O(n)
int height(struct Node *root)
{
    if (!root)
        return 0;

    int x = height(root->left);
    int y = height(root->right);
    if (x > y)
    {
        return x + 1;
    }
    else if (x == y)
    {
        return x + 1;
    }
    else
    {
        return y + 1;
    }
}

void chkBalance(struct Node *root)
{
    int leftHeight = height(root->left);
    int rightHeight = height(root->right);
    if (leftHeight - rightHeight >= 2)
    {
        printf("tree not balanced");
    }
    else
    {
        printf("tree not balanced");
    }
}

int main()
{
    int choice;
    int data, heightTree;
    struct Node *root = (struct Node *)malloc(sizeof(struct Node));
    root = NULL;
    while (1)
    {
        printf("Enter your choice : 1. insert 2. InOrder 3. height 4.Check Balance \n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the data : ");
            scanf("%d", &data);
            root = insert(root, data);
            break;
        case 2:

            // inOrder(root);
            break;
        case 3:
            heightTree = height(root);
            printf("height of tree is : %d \n", heightTree);
            break;
        case 4:
            chkBalance(root);
            break;
        default:
            break;
        }
    }
    return 0;
}