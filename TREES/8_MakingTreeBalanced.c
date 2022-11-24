// HARSSHIT YADAV
// 2105891
//  Make a Binary tree a balanced tree
/*
    algo
        1- calculate max height of the tree
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

void insertElemUsingHeight(struct Node *root)
{
    int leftHeight = height(root->left);
    int rightHeight = height(root->right);
    int maxHeight = (leftHeight > rightHeight) ? leftHeight : rightHeight;
    int minHeight = (leftHeight > rightHeight) ? leftHeight : rightHeight;
    int limit, i = 0;
    limit = maxHeight - minHeight;
    while (i < limit)
    {
        insertElements(root->left);
        insertElements(root->right);
        i++;
    }
}

// insert extra elements
void insertElements(struct Node *ptr)
{

    struct Node *newNodeLeft = (struct Node *)malloc(sizeof(struct Node));
    struct Node *newNodeRight = (struct Node *)malloc(sizeof(struct Node));
    newNodeLeft->data = ptr->data / 2;
    newNodeRight->data = ptr->data * 2;
    ptr->left = newNodeLeft;
    ptr->right = newNodeRight;
    insertElement(ptr->left);
    insertElement(ptr->right);
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
            
        default:
            break;
        }
    }
    return 0;
}