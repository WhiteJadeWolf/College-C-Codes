/* Let A[n] be an array of n distinct integers.
If i < j and A[i] > A[j], then the pair (i, j) Is called an inversion of A.
Write a C/C++ program that determines the number of Inversions in any permutation on n elements in O(n lg n) worst-case time.
(Hint: Modify merge sort)
Example: A = {4, 1, 3, 2} output is 4 */

#include <stdio.h>
#include <stdlib.h>

int c = 0;

void inversionupdate(int *A, int l, int m, int r)
{
    int i = l, j = m + 1, k = 0;
    int B[r - l + 1];
    while (i <= m && j <= r)
    {
        if (A[i] <= A[j])
        {
            B[k++] = A[i++];
        }
        else
        {
            B[k++] = A[j++];
            c += (m - i + 1); // All remaining elements in left subarray form an inversion
        }
    }
    while (i <= m)
    {
        B[k++] = A[i++];
    }
    while (j <= r)
    {
        B[k++] = A[j++];
    }
    for (int _ = 0; _ < k; _++)
    {
        A[l + _] = B[_];
    }
}

void inversionC(int *A, int l, int r)
{
    if (l < r)
    {
        int m = (l + r) / 2;
        inversionC(A, l, m);
        inversionC(A, m + 1, r);
        inversionupdate(A, l, m, r);
    }
}

int main()
{
    int ch;
    while (1)
    {
        printf("\nEnter your Choice :--\n1 - Check the number of inversion pairs in an array\n2 - Quit\nChoice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
        {
            int n;
            printf("\nEnter size of array : ");
            scanf("%d", &n);
            int A[n];
            printf("Enter %d numbers : ", n);
            for (int i = 0; i < n; i++)
            {
                scanf("%d", &A[i]);
            }
            inversionC(A, 0, n - 1);
            printf("No. of inversion pairs : %d\n", c);
            printf("Sorted Array : ");
            for (int i = 0; i < n; i++)
            {
                printf("%d ", A[i]);
            }
            printf("\n");
            c = 0;
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
