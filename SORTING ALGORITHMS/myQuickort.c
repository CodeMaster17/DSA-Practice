// HARSSHIT YADAV
// 2105891
// my quick sort
#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
int ar[SIZE];
int QuickSort(int ar[], int low, int up)
{
    int pivot = ar[low];
    int i, j, temp;
    i = low + 1;
    j = up - 1;
    while (i <= j)
    {
        while (ar[i] < pivot)
            i++;

        while (ar[i] > pivot)
            j--;

        if (i <= j)
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
    pivot = ar[j];
    ar[low] = temp;
    ar[low] = ar[j];
    ar[j] = temp;
    return j;
}

void quick(int ar[], int low, int up)
{
    int pivLow;
    if (low >= up)
    {
        return;
    }
    pivLow = QuickSort(ar, low, up);
    quick(ar, low, pivLow - 1);
    quick(ar, pivLow + 1, up);
}

int main()
{
    return 0;
}