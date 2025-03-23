/* Given an array arr[], its starting position l and its ending position r.
Sort the array using the merge sort algorithm.
Examples: Input: arr[] = [4, 1, 3, 9, 7]
Output: [1, 3, 4, 7, 9] */

#include <stdio.h>
#include <stdlib.h>

void merge(int *A, int l, int m, int r)
{
    int i = l, j = m + 1, k = l;
    int B[r + 1];
    while (i <= m && j <= r)
    {
        if (A[i] < A[j])
        {
            B[k] = A[i];
            k++;
            i++;
        }
        else
        {
            B[k] = A[j];
            k++;
            j++;
        }
    }
    while (i <= m)
    {
        B[k] = A[i];
        i++;
        k++;
    }
    while (j <= r)
    {
        B[k] = A[j];
        j++;
        k++;
    }
    for (int _ = l; _ <= r; _++)
    {
        A[_] = B[_];
    }
}

void mergesort(int *X, int l, int r)
{
    if (l < r)
    {
        int m = (r + l) / 2;
        mergesort(X, l, m);
        mergesort(X, m + 1, r);
        merge(X, l, m, r);
    }
}

int main()
{
    int ch;
    while (1)
    {
        printf("\nEnter your Choice :--\n1 - Merge Sort\n2 - Quit\nChoice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
        {
            int n;
            printf("Enter size of array : ");
            scanf("%d", &n);
            int A[n];
            printf("Enter %d numbers : ", n);
            for (int _ = 0; _ < n; _++)
            {
                scanf("%d", &A[_]);
            }
            mergesort(A, 0, n - 1);
            printf("Sorted Array : ");
            for (int _ = 0; _ < n; _++)
            {
                printf("%d ", A[_]);
            }
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