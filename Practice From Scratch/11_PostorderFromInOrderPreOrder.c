// HARSHIT YADAV
// 2105891
//  calculate postorder from inorder and and preorder
#include <stdio.h>
#include <stdlib.h>
int j = 0;
void postOrder(int pre[], int in[], int n)
{
    if (n == 1)
        return;
    int root = pre[j];
    j++;
    int i = 0, LeftCount = 0, RightCount = 0;
    while (root != in[i])
    {
        LeftCount++;
        i++;
    }
    RightCount = n - LeftCount;
    int *leftTree = (int *)malloc(LeftCount * (sizeof(int)));
    int *leftTreePre = (int *)malloc(LeftCount * (sizeof(int)));
    int *rightTree = (int *)malloc(RightCount * (sizeof(int)));
    int *rightTreePre = (int *)malloc(RightCount * (sizeof(int)));
    i = 0;
    while (i < LeftCount)
    {
        leftTree[i] = in[i];
        i++;
    }
    i = 0;
    while (i < LeftCount)
    {
        leftTreePre[i] = pre[i];
        i++;
    }
    i = RightCount;
    while (i < n)
    {
        rightTree[i] = in[i];
        i++;
    }
    i = RightCount;
    while (i < n)
    {
        rightTreePre[i] = pre[i];
        i++;
    }
    postOrder(leftTreePre, leftTree, LeftCount);
    postOrder(rightTreePre, rightTree, RightCount);
    printf("%d ", rightTree[0]);
    printf("%d ", root);
    printf("%d ", leftTreePre[0]);
}
void PostOrderTraversal() {}
int main()
{

    int n, i;
    printf("Enter the number of nodes in tree : ");
    scanf("%d", &n);
    int *pre = (int *)malloc(n * (sizeof(int)));
    int *in = (int *)malloc(n * (sizeof(int)));
    printf("\n Enter the Inorder of tree : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &in[i]);
    }
    printf("\n Enter the PreOrder of tree : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &pre[i]);
    }

    return 0;
}