/* Given an array A[] of size N (1 ≤ N ≤ 105), the task is to calculate the number of swaps required to sort the array using insertion sort algorithm.
Input: A [] = {2, 1, 3, 1, 2}
Output: 4 */

#include <stdio.h>
#include <stdlib.h>
#define MAX 105

void display(int *arr, int n)
{
    if (n > 0)
    {
        for (int i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");
        return;
    }
    printf("Empty array\n");
}

int getminind(int *arr, int k, int n)
{
    int minind = k;
    for (int i = k + 1; i < n; i++)
    {
        if (arr[i] < arr[minind])
        {
            minind = i;
        }
    }
    return minind;
}

int inswapcount(int *arr, int n)
{
    int minind, c = 0;
    for (int i = 0; i < n - 1; i++)
    {
        int temp;
        minind = getminind(arr, i, n);
        if (arr[i] != arr[minind])
        {
            temp = arr[i];
            arr[i] = arr[minind];
            arr[minind] = temp;
            c++;
        }
    }
    return c;
}

int main()
{
    int arr[] = {1, 4, 2, 6, 3, 7, 4, 10, 9, 8};
    int n = 10;
    printf("Array before sorting : ");
    display(arr, n);
    int swapcount = inswapcount(arr, n);
    printf("Array after sorting : ");
    display(arr, n);
    printf("No. of swaps : %d\n", swapcount);
    return 0;
}