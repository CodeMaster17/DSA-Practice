// HARSSHIT YADAV
// 2105891
//  selction sort - sorting from start
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int temp;
    int ar[] = {32, 45, 67, 43, 2, 345, 56, 42, 54, 276};
    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (ar[j] < ar[i])
            {
                temp = ar[i];
                ar[i] = ar[j];
                ar[j] = temp;
            }
        }
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d ,", ar[i]);
    }
    return 0;
}