// HARSSHIT YADAV
// 2105891
//  . Let there be an array, arr[0..n-1] of distinct elements and a range [low, high], find all numbers that are in a range, but not the array. The missing elements should be printed in sorted order.
// ##### NOT DONE ######################################################


#include <stdio.h>
#include <stdlib.h>
#define size 10
int main()
{
    int ar[] = {10, 12, 11, 15};
    int max, min, temp = 0, count = 0;
    printf("Enter the min limit : ");
    scanf("%d", &min);
    printf("Enter the max limit : ");
    scanf("%d", &max);

    for (int i = min + 1; i < max; i++)
    {
        count = 0;
        while (temp < 4)
        {
            if (i != ar[temp] && temp == 3)
            {
                count = 1;
            }

            temp++;
        }
        if (count == 0)
        {
            printf("%d ", i);
        }
        temp = 0;
    }

    return 0;
}