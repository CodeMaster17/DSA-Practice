// HARSHIT YADAV
// 2105891
//  Merge two sorted arrays
#include <stdio.h>
#include <stdlib.h>
int *sort(int ar1[], int size1, int ar2[], int size2)
{
    int finalSize = size1 + size2;
    int ar[finalSize];
    int i = 0, k = 0, j = 0;
    while (i < size1 && j < size2)
    {
        if (ar1[i] > ar2[j])
        {
            ar[k] = ar2[j];
            j++;
            k++;
        }
        else if(ar1[i] < ar2[j])
        {
            ar[k] = ar2[j];
            i++;
            k++;
        }
    }
}
int main()
{
    int ar1[] = {1, 3, 4, 8};
    int ar2[] = {2, 5, 6};
    merge(ar1, 4, ar2, 3);
    return 0;
}