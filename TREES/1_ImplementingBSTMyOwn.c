// HARSSHIT YADAV
// 2105891
//  Implementing BST my own
#include <stdio.h>
#include <stdlib.h>

// structure
struct Node
{
    struct Node *left;
    struct Node *right;
    int data;
};

struct Node *createNode(struct Node *root, int key)
{
    if (root == NULL)
    {
        root = (struct Node *)malloc(sizeof(struct Node));
        root->data = key;
        root->left = NULL;
        root->right = NULL;
        return root;
    }
    if (key < root->data)
    {
        root->left = createNode(root->left, key);
    }
    if (key > root->data)
    {
        root->right = createNode(root->right, key);
    }
    if (key == root->data)
    {
        printf("Duplicate Node");
    }
}

void InOrder(struct Node *root)
{
    if (root == NULL)
        return;

    InOrder(root->left);
    printf("%d ", root->data);
    InOrder(root->right);
}

int main()
{
    int choice;
    struct Node *root = (struct Node *)malloc(sizeof(struct Node));
    int data;
    root = NULL;
    while (1)
    {
        printf("Enter your choice : 1. insert 2.inOrder ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the data : ");
            scanf("%d", &data);
            root = createNode(root, data);
            break;
        case 2:
            InOrder(root);
            break;
        default:
            break;
        }
    }
    return 0;
}