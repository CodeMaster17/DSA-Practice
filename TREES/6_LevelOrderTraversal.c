// Amazon
// HARSSHIT YADAV
// 2105891
// Print level order traversal of a tree
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
//  traversing
// #####NOT COMPLETED
int LvlOrderTraversal(struct Node *root)
{

    if (!root)
        return 0;

    else
    {

        printf("%d,", root->data);

        if (root->left != NULL)
        {
            // printf("%d,", root->left->data);
            LvlOrderTraversal(root->left);
        }
        if (root->right != NULL)
        {
            // printf("%d,", root->right->data);
            LvlOrderTraversal(root->right);
        }
    }
    return 1;
}
int main()
{
    int choice;
    int data, res;
    struct Node *root = (struct Node *)malloc(sizeof(struct Node));
    root = NULL;
    while (1)
    {
        printf("\nEnter your choice : 1. insert 2. InOrder 3. Lvl Order Traversal \n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the data : ");
            scanf("%d", &data);
            root = insert(root, data);
            break;
        case 2:

            printf("InOrder traversal of this tree is : \n");
            inOrder(root);
            break;
        case 3:
            res = LvlOrderTraversal(root);
            if (res == 0)
            {
                printf("\nRoot not present\n");
            }

            break;
        default:
            break;
        }
    }
    return 0;
}