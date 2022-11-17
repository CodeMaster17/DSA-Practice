// HARSSHIT YADAV
// 2105891
//  Binary search
#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
void BinarySearch(int ar[])
{
    int data, i = 0, mid, low = 0, up = SIZE - 1, j, count = 0;
    printf("Enter the data to be searched : ");
    scanf("%d", &data);
    mid = (low + up) / 2;
    while (low != up)
    {
        if (ar[i] > mid)
        {
            low = mid + 1;
        }
        if (ar[i] < mid)
        {
            up = mid - 1;
        }
        for (j = low; j < up; j++)
        {
            if (ar[j] == data)
            {
                printf("Element is found at : %d position\n", j + 1);
                count++;
                break;
            }
        }
        if (count != 0)
        {
            break;
        }
        mid = (low + up) / 2;
        if (low == up && count == 0)
        {
            printf("element not found");
        }
    }
    return;
}
int main()
{
    int ar[SIZE];
    printf("Enter the elements ");
    for (int i = 0; i < SIZE; i++)
    {
        scanf("%d", &ar[i]);
    }
    BinarySearch(ar);
    return 0;
}