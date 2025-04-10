/* Find duplicates in an Array with values 1 to N using counting sort. */

#include <stdio.h>
#include <stdlib.h>

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

void find_duplicates(int *arr, int n)
{
    int max = maximum(arr, n);
    int flag = 0;
    int *X = (int *)calloc(max + 1, sizeof(int));
    for (int i = 0; i < n; i++)
    {
        X[arr[i]]++;
    }
    for (int i = 0; i <= max; i++)
    {
        if (X[i] > 1)
        {
            printf("\n%d has %d duplicates.", i, X[i] - 1);
            flag = 1;
        }
    }
    if (!flag)
    {
        printf("\nNo duplicates found.");
    }
    printf("\n");
}

int main()
{
    int ch;
    while (1)
    {
        printf("\nEnter your choice :--\n1 - Find Duplicates in an array using Count Sort\n2 - Exit\nChoice : ");
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
            find_duplicates(arr, n);
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