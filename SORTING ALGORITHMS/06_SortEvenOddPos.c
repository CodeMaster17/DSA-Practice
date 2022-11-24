// HARSSHIT YADAV
// 2105891
/*

Let there is an array of n distinct elements. The task is to sort all even-placed numbers in increasing and odd-placed numbers in decreasing order. The modified array should contain all sorted even-placed numbers followed by reverse sorted odd-placed numbers.
Note that the first element is considered as even placed because of its index 0.

Examples:
Input:  arr[] = {0, 1, 2, 3, 4, 5, 6, 7}
Output: arr[] = {0, 2, 4, 6, 7, 5, 3, 1}
Even-place elements : 0, 2, 4, 6
Odd-place elements : 1, 3, 5, 7
Even-place elements in increasing order :
0, 2, 4, 6
Odd-Place elements in decreasing order :
7, 5, 3, 1


*/
#include <stdio.h>
#include <stdlib.h>
#define size 10
int main()
{
    int ar[size], i, j, temp, arRes[size];
    printf("Enter the array : ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &ar[i]);
    }

    // sorting all the elements at its first place
    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (ar[i] > ar[j])
            {
                temp = ar[i];
                ar[i] = ar[j];
                ar[j] = temp;
            }
        }
    }
    j = 0;
    for (i = 0; i < size; i += 2)
    {

        arRes[j] = ar[i];
        j++;
    }
    for (i = 1; i < size + 1; i += 2)
    {
        arRes[j] = ar[i];
        j++;
    }

    // printing the new result
    for (i = 0; i < size; i++)
    {
        printf("%d ", arRes[i]);
    }
    return 0;
}