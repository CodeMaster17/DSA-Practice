// HARSSHIT YADAV
// 2105891
//  Merge Sort - #######DONE
#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

void merge(int arr[], int temp[], int low1, int up1, int low2, int up2)
{
    int i = low1;
    int j = low2;
    int k = low1;

    while ((i <= up1) && (j <= up2))
    {
        if (arr[i] <= arr[j])
            temp[k++] = arr[i++];

        else
            temp[k++] = arr[j++];
    }
    while (i <= up1)
    {
        temp[k++] = arr[i++];
    }
    while (j <= up2)
    {
        temp[k++] = arr[j++];
    }
}
void copy(int arr[], int temp[], int low, int up)
{
    int i;
    for (i = low; i <= up; i++)
    {
        arr[i] = temp[i];
    }
}
void mergeSort(int arr[], int low, int up)
{
    int mid;
    int temp[SIZE];
    if (low < up)
    {
        mid = (low + up) / 2;
        mergeSort(arr, low, mid); // recursion call to break the first half of the  array

        mergeSort(arr, mid + 1, up); // recursion cal to break the second half of the array

        merge(arr, temp, low, mid, mid + 1, up);
        copy(arr, temp, low, up);
    }
}
int main()
{
    int i, n, arr[SIZE];

    printf("enter elements \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]); // taking input
    }
    mergeSort(arr, 0, n - 1);

    // printing ouput

    printf("array after sorting : \n");
    for (i = 0; i < n; i++)
        printf("%d\n", arr[i]);
    return 0;
}
