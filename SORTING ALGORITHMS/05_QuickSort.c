// HARSSHIT YADAV
// 2105891
//  Quick Sort Algorithm
#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
int partition(int ar[], int low, int up)
{
    int temp, i, j, pivot;
    i = low + 1;
    j = up;
    pivot = ar[low];

    while (i <= j)
    {
        while (ar[i] < pivot && i < up)
        {
            i++;
        }
        while (ar[j] > pivot)
        {
            j--;
        }
        if (i < j)
        {
            temp = ar[i];
            ar[i] = ar[j];
            ar[j] = temp;
            i++;
            j--;
        }
        else
        {
            i++;
        }
    }
    ar[low] = ar[j];
    ar[j] = pivot;
    return j;
}
void quick(int ar[], int low, int up)
{
    int pivLow;
    if (low >= up)
    {
        return;
    }
    pivLow = partition(ar, low, up);
    quick(ar, low, pivLow - 1);
    quick(ar, pivLow + 1, up);
}
int main()
{
    int a[SIZE], n, i;
    printf("Enter elements :\n");
    for (i = 0; i < SIZE; i++)
    {
        scanf("%d", &a[i]);
    }
    quick(a, 0, SIZE - 1);
    printf("Output :\n");
    for (i = 0; i < SIZE; i++)
    {
        printf("%d\n", a[i]);
    }
    return 0;
}