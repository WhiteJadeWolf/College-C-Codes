/* Implement Bucket Sort,
arr[] = {0.897, 0.565, 0.656, 0.1234, 0.665, 0.3434} */

#include <stdio.h>
#include <stdlib.h>

struct node
{
    float data;
    struct node *next;
};

void insertsorted(struct node **list, float value)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = value;
    newnode->next = NULL;
    if (*list == NULL || (*list)->data >= value)
    {
        newnode->next = *list;
        *list = newnode;
    }
    else
    {
        struct node *current = *list;
        while (current->next != NULL && current->next->data < value)
            current = current->next;
        newnode->next = current->next;
        current->next = newnode;
    }
}

void bucketSort(float arr[], int n)
{
    struct node **buckets = (struct node **)malloc(n * sizeof(struct node *));
    for (int i = 0; i < n; i++)
    {
        buckets[i] = NULL;
    }
    for (int i = 0; i < n; i++)
    {
        int index = (int)(arr[i] * n);
        insertsorted(&buckets[index], arr[i]);
    }
    int idx = 0;
    for (int i = 0; i < n; i++)
    {
        struct node *current = buckets[i];
        while (current != NULL)
        {
            arr[idx++] = current->data;
            struct node *temp = current;
            current = current->next;
            free(temp);
        }
    }
    free(buckets);
}

int main()
{
    float arr[] = {0.897, 0.565, 0.656, 0.1234, 0.665, 0.3434};
    int n = 6;
    printf("Original array : ");
    for (int i = 0; i < n; i++)
    {
        printf("%f ", arr[i]);
    }
    printf("\n");
    bucketSort(arr, n);
    printf("Sorted array : ");
    for (int i = 0; i < n; i++)
    {
        printf("%f ", arr[i]);
    }
    printf("\n");
    return 0;
}
