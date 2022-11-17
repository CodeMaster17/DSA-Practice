// HARSSHIT YADAV
// 2105891
//  checking whether a binary tree is BST or not?
/*
      50
    /   \
   40   60
  / \   /\
20 45  55 70

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
void inOrder(struct Node *root)
{
    if (root == NULL)
        return;

    inOrder(root->left);
    printf("%d ", root->data);
    inOrder(root->right);
}

int IsBST(struct Node *root)
{
    static  struct Node *prev = NULL; // this is to check for which children we are checking
    if (root != NULL)
    {
        if (!IsBST(root->left))
        {
            return 0;
        }
        if (prev != NULL && root->data <= prev->data)
        {
            return 0;
        }
        prev = root;
        return IsBST(root->right);
    }
    else
    {
        return 1;
    }
}

int main()
{
    int choice;
    int data;
    struct Node *root = (struct Node *)malloc(sizeof(struct Node));
    root = NULL;
    while (1)
    {
        printf("Enter your choice : 1. insert 2. InOrder 3. exit");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the data : ");
            scanf("%d", &data);
            root = insert(root, data);
            break;
        case 2:

            inOrder(root);
            break;
        case 3:
            exit(0);
        default:
            break;
        }
    }
    return 0;
}