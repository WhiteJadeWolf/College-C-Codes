/* Sort an array using quicksort. */

#include <stdio.h>
#include <stdlib.h>

#define MAX 100

void display(int *arr, int n)
{
    for (int _ = 0; _ < n; _++)
    {
        printf("%d ", arr[_]);
    }
    printf("\n");
}

int partition(int *arr, int low, int high)
{
    int pivot = arr[low];
    int i = low + 1;
    int j = high;
    int temp;
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

void quicksort(int *arr, int low, int high)
{
    int indexpos;
    if (low < high)
    {
        indexpos = partition(arr, low, high);
        quicksort(arr, low, indexpos - 1);
        quicksort(arr, indexpos + 1, high);
    }
}

int main()
{
    int ch;
    while (1)
    {
        printf("\nEnter your choice :--\n1 - Quick sort given array\n2 - Exit\nChoice : ");
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
            quicksort(arr, 0, n - 1);
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