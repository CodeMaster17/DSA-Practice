// HARSHIT YADAV
// 2105891
//  Dynamic memory allocation
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int row, column;
    // for 1 d array
    int *ar = (int *)malloc(5 * sizeof(int));

    // for 2D array
    int *ar = (int *)malloc(row * column * sizeof(int));

    return 0;
}