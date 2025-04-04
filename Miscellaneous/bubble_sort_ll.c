/* Given a singly linked list, sort it using bubble sort by swapping struct nodes.
Input: 5 -> 1 -> 32 -> 10 -> 78
Output: 1 -> 5 -> 10 -> 32 -> 78 */

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *createnode(int val)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = val;
    newnode->next = NULL;
    return newnode;
}

struct node *createlinkedlist(int n)
{
    struct node *head = NULL, *temp = NULL, *newnode = NULL;
    int value;
    for (int i = 1; i <= n; i++)
    {
        printf("Enter data for struct node %d : ", i);
        scanf("%d", &value);
        newnode = createnode(value);
        if (head == NULL)
        {
            head = newnode;
        }
        else
        {
            temp->next = newnode;
        }
        temp = newnode;
    }
    return head;
}

void displayll(struct node *head)
{
    struct node *temp = head;
    while (temp)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

void bubblesort(struct node **head, int n)
{
    if (n < 2 || head == NULL || *head == NULL)
    {
        return;
    }
    for (int i = 0; i < n - 1; i++)
    {
        struct node **ptr = head;
        struct node *a = *head;
        while (a && a->next)
        {
            struct node *b = a->next;
            if (a->data > b->data)
            {
                a->next = b->next;
                b->next = a;
                *ptr = b;
                ptr = &(a->next);
            }
            else
            {
                ptr = &(a->next);
                a = a->next;
            }
        }
    }
}

int main()
{
    int n;
    printf("Enter length of linked list : ");
    scanf("%d", &n);
    struct node *head = createlinkedlist(n);
    printf("Linked list before sorting : ");
    displayll(head);
    bubblesort(&head, n);
    printf("\nLinked list after bubble-sorting : ");
    displayll(head);
    return 0;
}