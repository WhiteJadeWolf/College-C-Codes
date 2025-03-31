/* Given an array of non-negative integers, implement the Radix Sort algorithm to sort the array in ascending order. */

#include <stdio.h>
#include <stdlib.h>

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
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

void countsort(int *arr, int n, int exp)
{
    int output[n];
    int i, count[10] = {0};
    for (i = 0; i < n; i++)
    {
        count[(arr[i] / exp) % 10]++;
    }
    for (i = 1; i < 10; i++)
    {
        count[i] += count[i - 1];
    }
    for (i = n - 1; i >= 0; i--)
    {
        output[count[(arr[i] / exp) % 10] - 1] = arr[i];
        count[(arr[i] / exp) % 10]--;
    }
    for (i = 0; i < n; i++)
    {
        arr[i] = output[i];
    }
}

void radixsort(int *arr, int n)
{
    int m = maximum(arr, n);
    for (int exp = 1; m / exp > 0; exp *= 10)
        countsort(arr, n, exp);
}

int main()
{
    int ch;
    while (1)
    {
        printf("\nEnter your choice :--\n1 - Radix sort given array\n2 - Exit\nChoice : ");
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
            radixsort(arr, n);
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