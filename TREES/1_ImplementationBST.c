// HARSSHIT YADAV
// 2105891
//  Implementation of BST
#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int info;
    struct Node *left;
    struct Node *right;
};

struct Node *insert(struct Node *root, int data)
{
    if (root == NULL)
    {
        root = (struct Node *)malloc(sizeof(struct Node));
        root->info = data;
        root->left = NULL;
        root->right = NULL;
    }
    else if (data > root->info)
    {
        root->right = insert(root->right, data);
    }
    else if (data < root->info)
    {
        root->left = insert(root->left, data);
    }
    else
    {
        printf("\n Duplicate data \n");
        return root;
    }
}

// preOrder traversal
void preOrder(struct Node *root)
{
    if (root == NULL)
        return;

    printf("%d ", root->info);
    preOrder(root->left);
    preOrder(root->right);
}

// postOrder traversal
void postOrder(struct Node *root)
{
    if (root == NULL)
        return;

    postOrder(root->left);
    postOrder(root->right);
    printf("%d ", root->info);
}

// inOrder traversal
void inOrder(struct Node *root)
{
    if (root == NULL)
        return;

    inOrder(root->left);
    printf("%d ", root->info);
    inOrder(root->right);
}

int main()
{
    int choice;
    struct Node *root = (struct Node *)malloc(sizeof(struct Node));
    int data;
    root = NULL;
    while (1)
    {
        printf("Enter your choice : 1. insert 2. preOrder 3.post order ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the data : ");
            scanf("%d", &data);
            root = insert(root, data);
            break;
        case 2:
            preOrder(root);
            break;

        case 3:
            postOrder(root);
            break;

        case 4:
            inOrder(root);
        default:
            break;
        }
    }
    return 0;
}