// HARSSHIT YADAV
// 2105891
//  Linear Search
#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
void Search(int ar[], int element)
{
    int count = 0;
    for (int i = 0; i < SIZE; i++)
    {
        if (ar[i] == element)
        {
            printf("Element is found at %d position : ", i);
            count = 1;
            break;
        }
    }
    if (count == 0)
    {
        printf("\nElement not found");
    }
}
int main()
{
    int i, ar[SIZE], data;
    printf("Enter elements : \n");
    for (i = 0; i < SIZE; i++)
    {
        scanf("%d", &ar[i]);
    }
    printf("Enter the data to be searched : ");
    scanf("%d", &data);
    Search(ar, data);
    return 0;
}