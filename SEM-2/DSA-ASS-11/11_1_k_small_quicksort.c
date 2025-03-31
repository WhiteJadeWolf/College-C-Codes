/* Find the kth smallest element in an array using quicksort. */

#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int partition(int *arr, int low, int high)
{
    int pivot = arr[low], i = low + 1, j = high, temp;
    do
    {
        while (arr[i] <= pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }
        if (i < j)
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    } while (i <= j);
    temp = arr[j];
    arr[j] = arr[low];
    arr[low] = temp;
    return j;
}

int quicksortksmall(int *arr, int low, int high, int k)
{
    int indexpos;
    if (low < high)
    {
        indexpos = partition(arr, low, high);
        if (k - 1 == indexpos)
        {
            return arr[k];
        }
        else if (k - 1 < indexpos)
        {
            quicksortksmall(arr, low, indexpos - 1, k);
        }
        else
        {
            quicksortksmall(arr, indexpos + 1, high, k);
        }
    }
}

int main()
{
    int ch;
    while (1)
    {
        printf("\nEnter your choice :--\n1 - Find kth smallest element using quick sort\n2 - Exit\nChoice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
        {
            int n, k;
            printf("\nEnter size of array : ");
            scanf("%d", &n);
            int arr[n];
            printf("Enter %d numbers : ", n);
            for (int _ = 0; _ < n; _++)
            {
                scanf("%d", &arr[_]);
            }
            printf("Enter k : ");
            scanf("%d", &k);
            printf("%d th smallest element : %d\n", k, quicksortksmall(arr, 0, n - 1, k));
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