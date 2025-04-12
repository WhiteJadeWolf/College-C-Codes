/* Write a C or C++ program to sort the input array [12, 45, 33, 87, 56, 9, 11, 7, 67] using the Bucket Sort algorithm with 7 buckets. */

#include <stdio.h>
#include <stdlib.h>

#define BUCK_C 7
#define ARR_SIZE 9

struct node
{
    int data;
    struct node *next;
};

void insertsorted(struct node **bucket, int value)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = value;
    newnode->next = NULL;
    if (*bucket == NULL || value < (*bucket)->data)
    {
        newnode->next = *bucket;
        *bucket = newnode;
        return;
    }
    struct node *current = *bucket;
    while (current->next != NULL && current->next->data < value)
    {
        current = current->next;
    }
    newnode->next = current->next;
    current->next = newnode;
}

void bucketsort(int *arr, int n)
{
    struct node *buckets[BUCK_C] = {NULL};
    int i;
    int max = arr[0];
    for (i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    for (i = 0; i < n; i++)
    {
        int index = (arr[i] * BUCK_C) / (max + 1);
        insertsorted(&buckets[index], arr[i]);
    }
    int idx = 0;
    for (i = 0; i < BUCK_C; i++)
    {
        struct node *node = buckets[i];
        while (node != NULL)
        {
            arr[idx++] = node->data;
            struct node *temp = node;
            node = node->next;
            free(temp);
        }
    }
}

int main()
{
    int arr[ARR_SIZE] = {12, 45, 33, 87, 56, 9, 11, 7, 67};
    printf("Original array : ");
    for (int i = 0; i < ARR_SIZE; i++)
    {
        printf("%d ", arr[i]);
    }
    bucketsort(arr, ARR_SIZE);
    printf("\nSorted array : ");
    for (int i = 0; i < ARR_SIZE; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
