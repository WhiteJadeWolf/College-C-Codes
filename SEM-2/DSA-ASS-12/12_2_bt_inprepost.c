/*  Write a C/C++ program that ask the user to enter 10 integer arr.
Use these arr to construct a binary tree with 10 nodes.
After constructing the tree, perform and display the inorder, preorder, and postorder traversals. */

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct queuenode
{
    struct node *treenode;
    struct queuenode *next;
};

struct queue
{
    struct queuenode *front;
    struct queuenode *rear;
};

struct queue *createqueue()
{
    struct queue *q = (struct queue *)malloc(sizeof(struct queue));
    q->front = q->rear = NULL;
    return q;
}

void enqueue(struct queue *q, struct node *node)
{
    struct queuenode *temp = (struct queuenode *)malloc(sizeof(struct queuenode));
    temp->treenode = node;
    temp->next = NULL;
    if (q->rear == NULL)
    {
        q->front = q->rear = temp;
    }
    else
    {
        q->rear->next = temp;
        q->rear = temp;
    }
}

struct node *dequeue(struct queue *q)
{
    if (q->front == NULL)
    {
        return NULL;
    }
    struct queuenode *temp = q->front;
    struct node *node = temp->treenode;
    q->front = q->front->next;
    if (q->front == NULL)
    {
        q->rear = NULL;
    }
    free(temp);
    return node;
}

int isempty(struct queue *q)
{
    return (q->front == NULL);
}

struct node *createnode(int value)
{
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = value;
    new_node->left = new_node->right = NULL;
    return new_node;
}

void insert(struct node **root, int value)
{
    struct node *new_node = createnode(value);
    if (*root == NULL)
    {
        *root = new_node;
        return;
    }
    struct queue *q = createqueue();
    enqueue(q, *root);
    while (!isempty(q))
    {
        struct node *temp = dequeue(q);

        if (temp->left == NULL)
        {
            temp->left = new_node;
            break;
        }
        else
        {
            enqueue(q, temp->left);
        }

        if (temp->right == NULL)
        {
            temp->right = new_node;
            break;
        }
        else
        {
            enqueue(q, temp->right);
        }
    }
    while (!isempty(q))
    {
        dequeue(q);
    }
    free(q);
}

void inorder(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
}

void preorder(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    printf("%d ", root->data);
    preorder(root->left);
    preorder(root->right);
}

void postorder(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    printf("%d ", root->data);
}

int main()
{
    struct node *root = NULL;
    int arr[10];
    printf("Enter 10 integers : ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        insert(&root, arr[i]);
    }
    printf("\nInorder traversal : ");
    inorder(root);
    printf("\nPreorder traversal : ");
    preorder(root);
    printf("\nPostorder traversal : ");
    postorder(root);
    printf("\n");
    return 0;
}
