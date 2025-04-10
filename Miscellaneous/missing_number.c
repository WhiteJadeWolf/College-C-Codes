/* Given an unsorted array of size n. Array elements are in the range of 1 to n.
One number from set {1, 2, ...n} is missing and one number occurs twice in the array.
The task is to find these two numbers. */

#include <stdio.h>
#include <stdlib.h>

int maximum(int *arr, int n)
{
    int max = 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

void find_missing(int *arr, int n)
{
    int max = maximum(arr, n);
    int flag0 = 0, flag2 = 0;
    int *X = (int *)calloc(max + 1, sizeof(int));
    for (int i = 0; i < n; i++)
    {
        X[arr[i]]++;
    }
    for (int i = 1; i <= max; i++)
    {
        if (X[i] == 0)
        {
            flag0 = 1;
            printf("\n%d is MISSING.", i);
        }
        if (X[i] == 2)
        {
            flag2 = 1;
            printf("\n%d occurs TWICE.", i);
        }
    }
    if (!flag0)
    {
        printf("\nNo number is missing in the array.");
    }
    if (!flag2)
    {
        printf("\nNo number occurs twice in the array.");
    }
    printf("\n");
}

int main()
{
    int ch;
    while (1)
    {
        printf("\nEnter your choice :--\n1 - Execute the program\n2 - Exit\nChoice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
        {
            int n;
            printf("\nEnter size of array : ");
            scanf("%d", &n);
            int arr[n];
            printf("Enter %d numbers (1 to %d) : ", n, n);
            for (int _ = 0; _ < n; _++)
            {
                scanf("%d", &arr[_]);
            }
            find_missing(arr, n);
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