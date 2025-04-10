/* arr[] = {170, 45, 75, 90, 802, 24, 2, 66} , Sort array using Radix sort. */

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
    int arr[] = {170, 45, 75, 90, 802, 24, 2, 66};
    int n = 8;
    printf("Original array : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    radixsort(arr, n);
    printf("Sorted array : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}