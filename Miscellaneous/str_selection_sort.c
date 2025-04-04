/* Given an array of strings, sort the array using Selection Sort.
Input: paper true soap floppy flower
Output: floppy, flower, paper, soap, true */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 100

void selectionsort(char arr[][MAX], int n)
{
    int cur = 0, i = 1, min;
    char temp[MAX];
    if (n <= 1)
    {
        return;
    }
    for (int i = 0; i < n - 1; i++)
    {
        min = i;
        for (int j = i; j < n; j++)
        {
            if (strcmp(arr[j], arr[min]) < 0)
            {
                min = j;
            }
        }
        if (min != i)
        {
            strcpy(temp, arr[i]);
            strcpy(arr[i], arr[min]);
            strcpy(arr[min], temp);
        }
    }
}

int main()
{
    int ch;
    while (1)
    {
        printf("\nEnter your choice :--\n1 - Selection-Sort an array of strings\n2 - Exit\nChoice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
        {
            int n;
            printf("\nEnter size of array : ");
            scanf("%d", &n);
            char arr[n][MAX];
            getchar();
            printf("Enter %d strings : ", n);
            char in[MAX];
            for (int i = 0; i < n; i++)
            {
                scanf("%s", in);
                strcpy(arr[i], in);
            }
            selectionsort(arr, n);
            printf("Sorted Array : ");
            for (int i = 0; i < n; i++)
            {
                printf("%s, ", arr[i]);
            }
            printf("\n");
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
