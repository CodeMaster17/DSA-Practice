// HARSSHIT YADAV
// 2105891
//  AVL tree rotation & insertion
#include <stdio.h>
#include <stdlib.h>
struct Node
{
    struct Node *left;
    struct Node *right;
    int key;
    int height;
};

int getHeight(struct Node *n)
{
    if (n == NULL)
        return 0;

    else
        n->height;
}

struct Node *insert(struct Node *root, int data)
{
    if (root == NULL)
    {
        root = (struct Node *)malloc(sizeof(struct Node));
        root->key = data;
        root->left = NULL;
        root->right = NULL;
    }
    else if (data > root->key)
    {
        root->right = insert(root->right, data);
    }
    else if (data < root->key)
    {
        root->left = insert(root->left, data);
    }
    else
    {
        printf("\n Duplicate data \n");
        return root;
    }
}
// creating a new node
struct Node *createNode(int key)
{
    struct Node *node = (struct Node *)malloc(sizeof(struct Node));
    node->key = key;
    node->left = NULL;
    node->right = NULL;
    node->height = 1;
    return node;
}

// max function
int max(int a, int b)
{
    return a > b ? a : b;
}

// calculation of balance factor
int getBalanceFactor(struct Node *n)
{
    if (n == NULL)
        return 0;

    return getHeight(n->left) - getHeight(n->right);
}

// right rotation
struct Node *rightRotate(struct Node *y)
{
    struct Node *x = y->left;
    struct Node *T2 = x->right;

    // on rotating
    x->right = y;
    y->left = T2;

    // updating heights
    y->height = max(getHeight(y->right), getHeight(y->left)) + 1;
    x->height = max(getHeight(x->right), getHeight(x->left)) + 1;

    return x;
}

// left rotation
struct Node *leftRotate(struct Node *x)
{
    // making the initial tree
    struct Node *y = x->right;
    struct Node *T2 = y->left;

    // on rotating
    y->left = x;
    x->right = T2;

    // updating heights
    y->height = max(getHeight(y->right), getHeight(y->left)) + 1;
    x->height = max(getHeight(x->right), getHeight(x->left)) + 1;

    return y;
}

// binary search tree insertion
struct Node *insertKey(struct Node *node, int key)
{
    if (node == NULL)
        return (createNode(key));

    if (key < node->key)
        node->left = insertKey(node->left, key);
    else if (key > node->key)
        node->right = insertKey(node->right, key);
    return node;

    // for getting height
    node->height = 1 + max(getHeight(node->left), getHeight(node->right));

    // balance factor
    int bf = getBalanceFactor(node);

    // left left case
    if (bf > 1 && key < node->left->key)
    {
        rightRotate(node);
    }

    // right right case
    if (bf < -1 && key > node->right->key)
    {
        node->left = leftRotate(node->left);
        leftRotate(node);
    }

    // left right case
    if (bf > 1 && key > node->left->key)
    {
        rightRotate(node);
    }

    // right left case

    if (bf < -1 && key < node->right->key)
    {
        node->right = rightRotate(node->right);
        leftRotate(node);
    }

    return node;
}
// preOrder traversal
void preOrder(struct Node *root)
{
    if (root == NULL)
        return;

    printf("%d ", root->key);
    preOrder(root->left);
    preOrder(root->right);
}

int main()
{
    struct Node *root = NULL;
    root = insert(root, 1);
    root = insert(root, 2);
    root = insert(root, 4);
    root = insert(root, 5);
    root = insert(root, 6);
    root = insert(root, 3);
    preOrder(root);
    return 0;
}