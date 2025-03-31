/* Implement Count-Sort on a given array (Works with only non-negative integers) */

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

void display(int *arr, int n)
{
    for (int _ = 0; _ < n; _++)
    {
        printf("%d ", arr[_]);
    }
    printf("\n");
}

int maximum(int *arr, int n)
{
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

void countsort(int *arr, int n)
{
    int max = maximum(arr, n);
    int count[max + 1];
    for (int i = 0; i <= max; i++)
    {
        count[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        count[arr[i]]++;
    }
    int icount = 0, imain = 0;
    while (icount <= max)
    {
        if (count[icount] > 0)
        {
            arr[imain++] = icount;
            count[icount] -= 1;
        }
        else
        {
            icount++;
        }
    }
}

int main()
{
    int ch;
    while (1)
    {
        printf("\nEnter your choice :--\n1 - Count sort given array\n2 - Exit\nChoice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
        {
            int n;
            printf("\nEnter size of array : ");
            scanf("%d", &n);
            int arr[n];
            printf("Enter %d numbers : ", n);
            for (int _ = 0; _ < n; _++)
            {
                scanf("%d", &arr[_]);
            }
            countsort(arr, n);
            printf("Sorted Array : ");
            display(arr, n);
            break;
        }
        case 2:
            exit(0);
        default:
            printf("INVALID INPUT - TRY AGAIN.\n");
        }
    }
    return 0;
}