/* Given a sorted array of distinct elements arr[] of size n that is rotated at some unknown
point, the task is to find the minimum element in it. */

#include <stdio.h>
#include <stdlib.h>

int findmin(int *arr, int n)
{
    int low = 0, high = n - 1;
    if (arr[low] <= arr[high])
    {
        return arr[low];
    }
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] > arr[mid + 1])
        {
            return arr[mid + 1];
        }
        if (arr[mid - 1] > arr[mid])
        {
            return arr[mid];
        }
        if (arr[mid] > arr[high])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
}

int main()
{
    int ch;
    while (1)
    {
        printf("\nEnter your choice :--\n1 - Find Minimum element in user-given Rotated Array\n2 - Exit\nChoice : ");
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
            printf("\nMinimum Element = %d\n", findmin(arr, n));
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